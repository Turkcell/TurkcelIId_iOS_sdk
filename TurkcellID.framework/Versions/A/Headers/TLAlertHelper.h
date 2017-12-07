//
//  TLAlertHelper.h
//  TurkcellID
//
//  Created by ahmet on 26/12/2016.
//  Copyright © 2016 Turkcell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TIconicAlertController.h"
#import "TIconicAlertView.h"
#import "TAlertAction.h"
#import "TLTextHelper.h"

typedef NS_ENUM(NSInteger, TButtonType) {
    TButtonTypeConfirm = 0,
    TButtonTypeCancel = 1
};

typedef NS_ENUM(NSUInteger, TLAlertViewType) {
    TLAlertViewTypeDefault,
    TLAlertViewTypePositive,
    TLAlertViewTypeWarning,
    TLAlertViewTypeError,
    TLAlertViewTypeInfo
};

@protocol TNavigableContainer

@optional

-(UIViewController*)activeViewController;

@end

@interface TLAlertHelper : NSObject <TAlertIconicProtocol>

-(void)showIconicAlert:(UIImage *)icon type:(TLAlertViewType)type description:(NSString *)description detailImage:(UIImage *)detailImage buttons:(NSMutableDictionary *)buttons;

-(void)showIconicBasicAlert:(UIImage *)icon type:(TLAlertViewType)type description:(NSString *)description okButtonTitle:(NSString *)okButtonTitle buttonAction:(CompletionBlock)buttonAction;

-(void)showIconicAlert:(UIImage *)icon type:(TLAlertViewType)type description:(NSString *)description okButtonTitle:(NSString *)okButtonTitle okButtonAction:(CompletionBlock)okButtonAction cancelButtonTitle:(NSString *)cancelButtonTitle cancelButtonAction:(CompletionBlock)cancelButtonAction;

-(void)showDefaultErrorIconicAlert:(NSString *)description okButtonTitle:(NSString *)okButtonTitle okButtonAction:(CompletionBlock)okButtonAction;

-(void)alertIconicDismissed:(TIconicAlertController *)alert;

@end

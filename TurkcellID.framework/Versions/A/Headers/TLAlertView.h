//
//  TLAlertView.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 26/03/15.
//  Copyright (c) 2015 Turkcell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TLTheme.h"

typedef void (^TLDismissBlock)(NSInteger buttonIndex);

typedef NS_ENUM(NSUInteger, TLAlertViewType) {
    TLAlertViewTypeDefault,
    TLAlertViewTypePositive,
    TLAlertViewTypeWarning,
    TLAlertViewTypeError,
    TLAlertViewTypeInfo
};

typedef NS_ENUM(NSUInteger, TLAlertViewAlignmentType) {
    TLAlertViewAlignmentTypeHorizontal,
    TLAlertViewAlignmentTypeVertical
};


@interface TLAlertView : UIView

+ (instancetype)showAlertViewWithType:(TLAlertViewType)type message:(NSString*)message buttonTitles:(NSArray*)buttonTitles onDismiss:(TLDismissBlock)handler;

+ (instancetype)showAlertViewWithType:(TLAlertViewType)type title:(NSString*)title message:(NSString*)message buttonTitles:(NSArray*)buttonTitles onDismiss:(TLDismissBlock)handler;

+ (instancetype)showAlertViewWithType:(TLAlertViewType)type alignmentType:(TLAlertViewAlignmentType)alignmentType title:(NSString*)title message:(NSString*)message buttonTitles:(NSArray*)buttonTitles onDismiss:(TLDismissBlock)handler;

- (void)show;

@property(nonatomic,strong) TLTheme * theme;
@end

//
//  TLUIHelper.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 29/06/15.
//  Copyright (c) 2015 Turkcell. All rights reserved.
//

typedef NS_ENUM(NSUInteger, TLButtonType) {
    TLButtonTypeDefault,
    TLButtonTypeWhite,
    TLButtonTypeBlack,
    TLButtonTypeClear
};

#import <Foundation/Foundation.h>
#import "BetaNaoTextField.h"

@interface TLUIHelper : NSObject

+(void) setupTextField:(UITextField *) textField;
+(void) setupCustomTextField:(BetaNaoTextField *) textField;
+(void) setupButton:(UIButton *) button withType:(TLButtonType) type;
+ (void)unhighlightBorder:(UIButton *) button;

@end



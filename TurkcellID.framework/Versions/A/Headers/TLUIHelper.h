//
//  TLUIHelper.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 29/06/15.
//  Copyright (c) 2015 Turkcell. All rights reserved.
//

typedef NS_ENUM(NSUInteger, TLButtonType) {
    TButtonTypeDefault,
    TButtonTypeWhite,
    TButtonTypeBlack
};

#import <Foundation/Foundation.h>

@interface TLUIHelper : NSObject

+(void) setupTextField:(UITextField *) textField;
+(void) setupButton:(UIButton *) button withType:(TLButtonType) type;
+ (void)unhighlightBorder:(UIButton *) button;

@end



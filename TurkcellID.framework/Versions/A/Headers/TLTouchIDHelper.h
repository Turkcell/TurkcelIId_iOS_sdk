//
//  TouchIDManager.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 06/02/15.
//  Copyright (c) 2015 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TurkcellIDConstants.h"
#import "TLUICKeyChainStore.h"

#define TOUCHID_IDENTIFIER					    @"TouchIDEnableIdentifier"
#define TOUCHID_LAST_OFFER_TIME					@"TouchIDLastOfferTime"

typedef enum {
    TLTouchIDErrorAuthenticationCancel = 0,
    TLTouchIDErrorAuthenticationFailed,
    TLTouchIDErrorAuthenticationPassword,
    TLTouchIDErrorAuthenticationNoPasscode,
    TLTouchIDErrorAuthenticationOff,
    TLTouchIDErrorAuthenticationNotSupported
} TouchIDErrorAuthentication;

@interface TLTouchIDHelper : NSObject

+ (BOOL)canUseTouchID;

+ (void)useTouchIDWithCompletionHandler:(void (^)(NSError *error))handler;

+ (BOOL)isTouchIDEnabled:(NSString *) chainID;

+ (BOOL)setTouchIDEnabled:(BOOL)enabled chain:(NSString *) chainID;

+ (BOOL)shouldPromoteTouchID:(NSString *) chainID;

+ (void)resetSettings:(NSString *) chainID;

+ (BOOL)savePromoteTouchID:(NSString *) chainID;

@end
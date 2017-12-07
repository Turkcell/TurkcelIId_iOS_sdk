//
//  KeyChainHelper.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 06/02/15.
//  Copyright (c) 2015 . All rights reserved.
//



#import <Foundation/Foundation.h>
#import "TLUICKeyChainStore.h"
#import "TLAccountModel.h"

#define LL_REMEMBER_ME_LAST_OFFER       @"k_light_login_rememberme_last_offer"


@interface TLKeyChainHelper : NSObject

+(BOOL) saveAccount:(TLAccountModel *) account chain:(NSString *) chainID;
+(TLAccountModel *) getAccount:(NSString *) chainID;
+(BOOL) hasAnyAccount;
+(BOOL) saveMaskedMsisdn:(NSString *) maskedMsisdn encryptedMsisdn:(NSString *) encryptedMsisdn chain:(NSString *) chain;
+(NSString *) getMaskedMsisdn:(NSString *) chain;
+(NSString *) getEncryptedMsisdn:(NSString *) chain;
+(BOOL) deleteAccount:(NSString *) chainID;
+(BOOL) shouldPromoteLightLoginRememberMe:(NSString *) chainID;
+(void) resetSettings:(NSString *) chainID;
+(BOOL) savePromoteLightLoginRememberMe:(NSString *) chainID;

@end

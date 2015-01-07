//
//  TSDKConstants.h
//  TurkcellSDK
//
//  Created by yasin kaya on 4/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TurkcellIDConstants : NSObject

/*!
 * Used for login
 */
extern NSInteger const SENDER_TYPE_LOGIN;

/*!
 * Used for logout
 */
extern NSInteger const SENDER_TYPE_LOGOUT;

/*!
 * Used for changing the password
 */
extern NSInteger const SENDER_TYPE_CHANGE_PASSWORD;

/*!
 *
 */
extern NSString* const _YES;

/*!
 *
 */
extern NSString* const _NO;

/*!
 *
 */
extern NSString* const STORE_AUTH_TOKEN;

/*!
 *
 */
extern NSString* const STORE_CLIENT_SECRET;

/*!
 *
 */
extern NSString* const TSDK_ENCRYPT_KEY;

/*!
 *
 */
extern NSString* const CLIENT_VERSION_NUM;

@end

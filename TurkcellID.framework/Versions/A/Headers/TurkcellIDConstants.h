/*******************************************************************************
 *
 *  Copyright (C) 2014 Turkcell
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *******************************************************************************/
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

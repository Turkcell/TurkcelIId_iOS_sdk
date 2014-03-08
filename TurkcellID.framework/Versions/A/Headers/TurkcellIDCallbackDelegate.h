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
//  TSDKAllDelegates.h
//  TurkcellSDK
//
//  Created by yasin kaya on 4/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 * Protocol is defined for the use of TurkcellIDMainView to implement the callbacks which triggers according to the server respoonse
 */
@protocol TurkcellIDCallbackDelegate
/*!
 * loginWithSuccess
 *
 * It is called when the login request is successfull.
 * \authToken Application should store and use this token value for remind me purposes
 */
-(void) loginWithSuccess:(NSString *)authToken;
/*!
 * loginWithError
 *
 * It is called when the login fails. Client should retry login.
 */
-(void) loginWithError;
/*!
 * closeWindow
 *
 * It is called when the client opens sms screen to get Turkcell Sifre.
 */
-(void) closeWindow;

@end



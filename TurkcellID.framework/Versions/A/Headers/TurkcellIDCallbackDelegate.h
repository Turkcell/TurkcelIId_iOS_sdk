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



//
//  TSDKMainViewController.h
//  TurkcellSDK
//
//  Created by yasin kaya on 4/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "TurkcellIDCallbackDelegate.h"
#import <MessageUI/MessageUI.h>

@interface TurkcellIDMainView : UIView <UIWebViewDelegate>

/*!
 * This functions gives you the ability login to the system and gets a token as a return.If it is the first login or remember me is not selected, it asks for a number and password.
 * \appID : This value is given by the system administrator for relevant application. It is given as a string parameter.
 * \sender : It is a constant value. If it is a login request SENDER_TYPE_LOGIN value should be used.
 * \operationDelegate : It is the class which implements the related protocol. This class has to implement TurkcellIDCallbackDelegate protocol.
 * \messageParentViewController : This viewcontroller is the view that the sms send screen will open on it.
 * \messageDelegate : The class that implements MFMessageComposeViewControllerDelegate. This is called when the sms send screen opens.
 * \fullScreen : Turkcell ID screens can open fullscreen or partially using this parameter.
 * \useTestServer : Uses test server url for server requests.
 */
- (id)initWithAppId:(NSString *)appId
             sender:(NSInteger)sender
  operationDelegate:(id<TurkcellIDCallbackDelegate>)operationDelegateParameter
messageParentViewController:(UIViewController *)messageParentViewControllerParameter
    messageDelegate:(id<MFMessageComposeViewControllerDelegate>)messageDelegateParameter
         fullScreen:(BOOL)fullScreenParameter
      useTestServer:(BOOL)useTestServerParameter
       smsSupported:(BOOL)smsSupported;

- (id)initWithAppId:(NSString *)appId
             sender:(NSInteger)sender
  operationDelegate:(id<TurkcellIDCallbackDelegate>)operationDelegateParameter
messageParentViewController:(UIViewController *)messageParentViewControllerParameter
    messageDelegate:(id<MFMessageComposeViewControllerDelegate>)messageDelegateParameter
         fullScreen:(BOOL)fullScreenParameter
      useTestServer:(BOOL)useTestServerParameter
       smsSupported:(BOOL)smsSupported
      disableRadius:(BOOL) disableRadius;


- (void)show;
+ (void)logout;

@end


TurkcellId_iOS_sdk
===================

Turkcell ID SDK provides an authentication mechanism for Android applications by using Turkcell user info.

Application ID could be get from sabri.elci@turkcell.com.tr

## Sample Code

```objective-c
//import this header tou your project
#import <TurkcellID/TurkcellID.h>


```objective-c
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
//Login
TurkcellIDMainView *loginView = [[TurkcellIDMainView alloc] initWithAppId:@"APP_ID"
                                                                       sender:SENDER_TYPE_LOGIN
                                                            operationDelegate:self
                                                  messageParentViewController:self
                                                              messageDelegate:self
                                                                   fullScreen:YES
                                                                useTestServer:NO];
    
[loginView show];
```
```objective-c
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
//Change Password
TurkcellIDMainView *loginView = [[TurkcellIDMainView alloc] initWithAppId:@"APP_ID"
                                                                       sender:SENDER_TYPE_CHANGE_PASSWORD
                                                            operationDelegate:self
                                                  messageParentViewController:self
                                                              messageDelegate:self
                                                                   fullScreen:flagFullScreen
                                                                useTestServer:flagUseTest];
    
[loginView show];
```

```objective-c
//Logout
[TurkcellIDMainView logout];
```

```objective-c
//TurkcellIDCallbackDelegate methods
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
```

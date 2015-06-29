//
//  ServiceRequest.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 06/02/15.
//  Copyright (c) 2015 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TLAFHTTPRequestOperationManager.h"


typedef void (^TLServiceResponseHandler)(id response);
typedef void (^TLServiceResponseWithErrorHandler)(NSError* error ,id response);


/**
 NSNotification key for handling general errors during requests.
 
 Observe this notification if you want to control errors during requests from one central place.
 
 If you use ServiceResponseHandler during request call, this notification will be posted.
 
 If ServiceResponseWithErrorHandler is used, no notification is posted, failure should be handled in block.
 */
extern NSString * const TLRequestFailedWithErrorNotification;


extern NSString * const KeyMsisdn;
extern NSString * const KeyToken;
extern NSString * const KeyRememberMeToken;
extern NSString * const KeyAppID;
extern NSString * const KeyClientSecret;
extern NSString * const KeyMaskedMsisdn;
extern NSString * const KeyOldPassword;
extern NSString * const KeyPassword;
extern NSString * const KeyNewPassword;
extern NSString * const KeyCaptchaToken;
extern NSString * const KeyRememberMe;
extern NSString * const KeyEncryptedMsisdn;
extern NSString * const KeyChainID;
extern NSString * const KeyMsisdn_;
extern NSString * const KeyDeviceID;
extern NSString * const KeyTouchIDRequest;



extern NSString * const ResponseKeyEncryptedMsisdn;
extern NSString * const ResponseKeyCode;
extern NSString * const ResponseKeyMessage;
extern NSString * const ResponseKeyClientSecret;
extern NSString * const ResponseKeyMaskedMsisdn;
extern NSString * const ResponseKeyRememberMeToken;
extern NSString * const ResponseKeyAuthToken;
extern NSString * const ResponseKeyShowCaptcha;
extern NSString * const ResponseKeyChainID;
extern NSString * const ResponseKeyEncodedCaptcha;
extern NSString * const ResponseKeyNonTurkcellLogin;
extern NSString * const ResponseKeyRememberMeCheckedByDefault;
extern NSString * const ResponseKeyShowCellularRememberMeOffer;
/**
 Key for NSError object in NSNotication's userInfo dictionary.
 */
extern NSString * const TLRequestFailedErrorKey;

typedef NS_ENUM(NSUInteger, TLServiceType) {
    TLServiceTypeRequestAuthToken,
    TLServiceTypeLightLogin,
    TLServiceTypeLogout,
    TLServiceTypeGetAppConfig,
    TLServiceTypeLogin,
    TLServiceTypeCaptcha,
    TLServiceTypeChangePassword,
    TLServiceTypeLLRememberMe,
    TLServiceTypeInvalidateToken,
    TLServiceTypeForgotPassword
};

typedef NS_ENUM(NSUInteger, TLHTTPRequestType) {
    TLHTTPPost,
    TLHTTPGet,
    TLHTTPPut,
    TLHTTPDelete
};

@interface TLServiceRequest : NSObject

/**
 Designated initializer for ServiceObject
 
 @params type A ServiceType object
 */
+ (TLServiceRequest*)requestWithType:(TLServiceType)type;

/**
 Handler block is called in main thread.
 */
- (void)startWithCompletionHandler:(TLServiceResponseHandler)handler;
- (void)startWithCompletionHandler:(TLServiceResponseHandler)handler showHUD:(BOOL)block;


@property (nonatomic, assign) TLServiceType type;
@property (nonatomic, strong) NSString *path;
@property (nonatomic, strong) NSString *baseURL;
@property (nonatomic, assign) TLHTTPRequestType requestType;
@property (nonatomic, strong) id requestHeaders;
@property (nonatomic, strong) id requestParams;
@property (nonatomic, assign) NSURLRequestCachePolicy cachePolicy;
@property (nonatomic, strong) TLAFHTTPRequestSerializer* requestSerializer;

@end

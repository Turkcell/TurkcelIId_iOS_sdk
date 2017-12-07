

#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <Availability.h>

#if __IPHONE_OS_VERSION_MIN_REQUIRED
#import <MobileCoreServices/MobileCoreServices.h>
#else
#import <CoreServices/CoreServices.h>
#endif

#import "TLAFHTTPRequestOperation.h"
#import "TLAFURLResponseSerialization.h"
#import "TLAFURLRequestSerialization.h"
#import "TLAFSecurityPolicy.h"
#import "TLAFNetworkReachabilityManager.h"
@interface TLAFHTTPRequestOperationManager : NSObject <NSSecureCoding, NSCopying>

@property (readonly, nonatomic, strong) NSURL *baseURL;


@property (nonatomic, strong) TLAFHTTPRequestSerializer <TLAFURLRequestSerialization> * requestSerializer;


@property (nonatomic, strong) TLAFHTTPResponseSerializer <TLAFURLResponseSerialization> * responseSerializer;

@property (nonatomic, strong) NSOperationQueue *operationQueue;

///-------------------------------
/// @name Managing URL Credentials
///-------------------------------

/**
 Whether request operations should consult the credential storage for authenticating the connection. `YES` by default.

 @see AFURLConnectionOperation -shouldUseCredentialStorage
 */
@property (nonatomic, assign) BOOL shouldUseCredentialStorage;

/**
 The credential used by request operations for authentication challenges.

 @see AFURLConnectionOperation -credential
 */
@property (nonatomic, strong) NSURLCredential *credential;

///-------------------------------
/// @name Managing Security Policy
///-------------------------------

/**
 The security policy used by created request operations to evaluate server trust for secure connections. `AFHTTPRequestOperationManager` uses the `defaultPolicy` unless otherwise specified.
 */
@property (nonatomic, strong) TLAFSecurityPolicy *securityPolicy;

///------------------------------------
/// @name Managing Network Reachability
///------------------------------------

/**
 The network reachability manager. `AFHTTPRequestOperationManager` uses the `sharedManager` by default.
 */
@property (readwrite, nonatomic, strong) TLAFNetworkReachabilityManager *reachabilityManager;

///-------------------------------
/// @name Managing Callback Queues
///-------------------------------

/**
 The dispatch queue for the `completionBlock` of request operations. If `NULL` (default), the main queue is used.
 */
@property (nonatomic, strong) dispatch_queue_t completionQueue;

/**
 The dispatch group for the `completionBlock` of request operations. If `NULL` (default), a private dispatch group is used.
 */
@property (nonatomic, strong) dispatch_group_t completionGroup;

///---------------------------------------------
/// @name Creating and Initializing HTTP Clients
///---------------------------------------------

/**
 Creates and returns an `AFHTTPRequestOperationManager` object.
 */
+ (instancetype)manager;

/**
 Initializes an `AFHTTPRequestOperationManager` object with the specified base URL.

 This is the designated initializer.

 @param url The base URL for the HTTP client.

 @return The newly-initialized HTTP client
 */
- (instancetype)initWithBaseURL:(NSURL *)url NS_DESIGNATED_INITIALIZER;

///---------------------------------------
/// @name Managing HTTP Request Operations
///---------------------------------------

/**
 Creates an `AFHTTPRequestOperation`, and sets the response serializers to that of the HTTP client.

 @param request The request object to be loaded asynchronously during execution of the operation.
 @param success A block object to be executed when the request operation finishes successfully. This block has no return value and takes two arguments: the created request operation and the object created from the response data of request.
 @param failure A block object to be executed when the request operation finishes unsuccessfully, or that finishes successfully, but encountered an error while parsing the response data. This block has no return value and takes two arguments:, the created request operation and the `NSError` object describing the network or parsing error that occurred.
 */
- (TLAFHTTPRequestOperation *)HTTPRequestOperationWithRequest:(NSURLRequest *)request
                                                    success:(void (^)(TLAFHTTPRequestOperation *operation, id responseObject))success
                                                    failure:(void (^)(TLAFHTTPRequestOperation *operation, NSError *error))failure;

///---------------------------
/// @name Making HTTP Requests
///---------------------------

/**
 Creates and runs an `AFHTTPRequestOperation` with a `GET` request.

 @param URLString The URL string used to create the request URL.
 @param parameters The parameters to be encoded according to the client request serializer.
 @param success A block object to be executed when the request operation finishes successfully. This block has no return value and takes two arguments: the request operation, and the response object created by the client response serializer.
 @param failure A block object to be executed when the request operation finishes unsuccessfully, or that finishes successfully, but encountered an error while parsing the response data. This block has no return value and takes a two arguments: the request operation and the error describing the network or parsing error that occurred.

 @see -HTTPRequestOperationWithRequest:success:failure:
 */
- (TLAFHTTPRequestOperation *)GET:(NSString *)URLString
                     parameters:(id)parameters
                        success:(void (^)(TLAFHTTPRequestOperation *operation, id responseObject))success
                        failure:(void (^)(TLAFHTTPRequestOperation *operation, NSError *error))failure;

/**
 Creates and runs an `AFHTTPRequestOperation` with a `HEAD` request.

 @param URLString The URL string used to create the request URL.
 @param parameters The parameters to be encoded according to the client request serializer.
 @param success A block object to be executed when the request operation finishes successfully. This block has no return value and takes a single arguments: the request operation.
 @param failure A block object to be executed when the request operation finishes unsuccessfully, or that finishes successfully, but encountered an error while parsing the response data. This block has no return value and takes a two arguments: the request operation and the error describing the network or parsing error that occurred.

 @see -HTTPRequestOperationWithRequest:success:failure:
 */
- (TLAFHTTPRequestOperation *)HEAD:(NSString *)URLString
                      parameters:(id)parameters
                         success:(void (^)(TLAFHTTPRequestOperation *operation))success
                         failure:(void (^)(TLAFHTTPRequestOperation *operation, NSError *error))failure;

/**
 Creates and runs an `AFHTTPRequestOperation` with a `POST` request.

 @param URLString The URL string used to create the request URL.
 @param parameters The parameters to be encoded according to the client request serializer.
 @param success A block object to be executed when the request operation finishes successfully. This block has no return value and takes two arguments: the request operation, and the response object created by the client response serializer.
 @param failure A block object to be executed when the request operation finishes unsuccessfully, or that finishes successfully, but encountered an error while parsing the response data. This block has no return value and takes a two arguments: the request operation and the error describing the network or parsing error that occurred.

 @see -HTTPRequestOperationWithRequest:success:failure:
 */
- (TLAFHTTPRequestOperation *)POST:(NSString *)URLString
                      parameters:(id)parameters
                         success:(void (^)(TLAFHTTPRequestOperation *operation, id responseObject))success
                         failure:(void (^)(TLAFHTTPRequestOperation *operation, NSError *error))failure;

/**
 Creates and runs an `AFHTTPRequestOperation` with a multipart `POST` request.

 @param URLString The URL string used to create the request URL.
 @param parameters The parameters to be encoded according to the client request serializer.
 @param block A block that takes a single argument and appends data to the HTTP body. The block argument is an object adopting the `AFMultipartFormData` protocol.
 @param success A block object to be executed when the request operation finishes successfully. This block has no return value and takes two arguments: the request operation, and the response object created by the client response serializer.
 @param failure A block object to be executed when the request operation finishes unsuccessfully, or that finishes successfully, but encountered an error while parsing the response data. This block has no return value and takes a two arguments: the request operation and the error describing the network or parsing error that occurred.

 @see -HTTPRequestOperationWithRequest:success:failure:
 */
- (TLAFHTTPRequestOperation *)POST:(NSString *)URLString
                      parameters:(id)parameters
       constructingBodyWithBlock:(void (^)(id <TLAFMultipartFormData> formData))block
                         success:(void (^)(TLAFHTTPRequestOperation *operation, id responseObject))success
                         failure:(void (^)(TLAFHTTPRequestOperation *operation, NSError *error))failure;

/**
 Creates and runs an `AFHTTPRequestOperation` with a `PUT` request.

 @param URLString The URL string used to create the request URL.
 @param parameters The parameters to be encoded according to the client request serializer.
 @param success A block object to be executed when the request operation finishes successfully. This block has no return value and takes two arguments: the request operation, and the response object created by the client response serializer.
 @param failure A block object to be executed when the request operation finishes unsuccessfully, or that finishes successfully, but encountered an error while parsing the response data. This block has no return value and takes a two arguments: the request operation and the error describing the network or parsing error that occurred.

 @see -HTTPRequestOperationWithRequest:success:failure:
 */
- (TLAFHTTPRequestOperation *)PUT:(NSString *)URLString
                     parameters:(id)parameters
                        success:(void (^)(TLAFHTTPRequestOperation *operation, id responseObject))success
                        failure:(void (^)(TLAFHTTPRequestOperation *operation, NSError *error))failure;

/**
 Creates and runs an `AFHTTPRequestOperation` with a `PATCH` request.

 @param URLString The URL string used to create the request URL.
 @param parameters The parameters to be encoded according to the client request serializer.
 @param success A block object to be executed when the request operation finishes successfully. This block has no return value and takes two arguments: the request operation, and the response object created by the client response serializer.
 @param failure A block object to be executed when the request operation finishes unsuccessfully, or that finishes successfully, but encountered an error while parsing the response data. This block has no return value and takes a two arguments: the request operation and the error describing the network or parsing error that occurred.

 @see -HTTPRequestOperationWithRequest:success:failure:
 */
- (TLAFHTTPRequestOperation *)PATCH:(NSString *)URLString
                       parameters:(id)parameters
                          success:(void (^)(TLAFHTTPRequestOperation *operation, id responseObject))success
                          failure:(void (^)(TLAFHTTPRequestOperation *operation, NSError *error))failure;

/**
 Creates and runs an `AFHTTPRequestOperation` with a `DELETE` request.

 @param URLString The URL string used to create the request URL.
 @param parameters The parameters to be encoded according to the client request serializer.
 @param success A block object to be executed when the request operation finishes successfully. This block has no return value and takes two arguments: the request operation, and the response object created by the client response serializer.
 @param failure A block object to be executed when the request operation finishes unsuccessfully, or that finishes successfully, but encountered an error while parsing the response data. This block has no return value and takes a two arguments: the request operation and the error describing the network or parsing error that occurred.

 @see -HTTPRequestOperationWithRequest:success:failure:
 */
- (TLAFHTTPRequestOperation *)DELETE:(NSString *)URLString
                        parameters:(id)parameters
                           success:(void (^)(TLAFHTTPRequestOperation *operation, id responseObject))success
                           failure:(void (^)(TLAFHTTPRequestOperation *operation, NSError *error))failure;

@end


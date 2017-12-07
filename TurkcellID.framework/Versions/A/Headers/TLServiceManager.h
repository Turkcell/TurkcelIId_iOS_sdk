//
//  ServiceManager.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 06/02/15.
//  Copyright (c) 2015 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TLServiceRequest.h"
#import "TLAFNetworking.h"

@interface TLServiceManager : NSObject

+ (TLServiceManager*)sharedManager;

-(void)makeRequestWithServiceObject:(TLServiceRequest*)serviceObject onResponse:(TLServiceResponseWithErrorHandler)handler;
-(void)makeRequestWithServiceObject:(TLServiceRequest*)aserviceObject withTimeout:(NSTimeInterval)timeout onResponse:(TLServiceResponseWithErrorHandler)handler;

-(void)makeImageRequestWithPath:(NSString*)imagePath onResponse:(TLServiceResponseWithErrorHandler)handler;
-(void)makeImageRequestWithPath:(NSString*)imagePath withSize:(CGSize)imageSize onResponse:(TLServiceResponseWithErrorHandler)handler;

@property (nonatomic,strong) TLAFNetworkReachabilityManager        *reachabilityManager;
@property(nonatomic,assign,getter=isStub) BOOL stub;

@end

//
//  VerifyOTPVC.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 20/10/15.
//  Copyright © 2015 Turkcell. All rights reserved.
//

#import "TLBaseScrollVC.h"
#import "TLEnums.h"

@protocol TLVerifyDelegate <NSObject>

@optional
-(void) otpVerified: (NSString *) maskedEmail;
-(void) otpReturnAuthToken: (id) response;

@end


@interface TLVerifyOTPVC : TLBaseScrollVC

 @property(nonatomic,weak) id<TLVerifyDelegate> delegate;
-(instancetype) initWithMsisdn:(NSString *) msisdn withScreenType:(TLOtpVerifyType) type;

-(void) setUIForResend;

@end

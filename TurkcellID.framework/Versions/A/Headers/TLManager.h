//
//  TCellLogin.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 06/02/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TLLoginVC.h"
#import "TLEnums.h"
#import "TLRememberMeOfferVC.h"
#import "TLTheme.h"


@protocol TLLoginDelegate <NSObject>

@required
-(void) loginProcessCompleted:(BOOL) success type:(TLLoginType) loginType token:(NSString *) token;

@optional
-(void) customButtonClicked;

@end

@interface TLManager : NSObject<TLLoginVCDelegate,RememberMeOfferDelegate>

@property(nonatomic,weak) id<TLLoginDelegate> delegate;
-(instancetype)initWithAppID:(NSString *)appID  useTestServer:(BOOL)useTestServer theme:(TLTheme *)theme;
-(void)startLoginProcess:(UIViewController *) mainVC skipLightLogin:(BOOL)skipLightLogin showLoginPage:(BOOL)showLoginPage showLoader:(BOOL)pShowLoader dismissSession:(BOOL) dismissSession;
-(void)logout;
-(void)reset:(NSString *) chain;

+(NSString *) BaseSDKURL;
+(NSString *) BaseSDKURLHTTP;
+(NSString *) SDKAccessGroup;

@end

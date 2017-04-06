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

@protocol TLLoginAnalyticDelegate <NSObject>

@optional
-(void) analyticEventOccured:(NSString *) key type:(AnalyticType) analyticType;

@end

@interface TLManager : NSObject<TLLoginVCDelegate,RememberMeOfferDelegate,TLLoginAnalyticDelegate>

@property(nonatomic,weak) id<TLLoginDelegate> delegate;
@property(nonatomic,weak) id<TLLoginAnalyticDelegate> analyicDelegate;

@property(nonatomic,strong) NSString * language;
@property(nonatomic,strong) NSString * defaultRegion;
-(void)setHideDismissButton:(BOOL)hideDismissButton;

-(instancetype)initWithAppID:(NSString *)appID  useTestServer:(BOOL)useTestServer theme:(TLTheme *)theme customAccessGroup:(NSString *) accessGroup;
-(void)startLoginProcess:(UIViewController *) mainVC skipLightLogin:(BOOL)skipLightLogin showLoginPage:(BOOL)showLoginPage showLoader:(BOOL)pShowLoader dismissSession:(BOOL) dismissSession;
-(void)logout;
-(void)reset:(NSString *) chain;

+(NSString *) BaseSDKURL;
+(NSString *) BaseSDKURLHTTP;
+(NSString *) SDKAccessGroup;
+(void) hideLoginPage;
@end

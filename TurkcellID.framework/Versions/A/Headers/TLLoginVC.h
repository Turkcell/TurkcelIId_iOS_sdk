//
//  LoginVC.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 10/02/15.
//  Copyright (c) 2015 . All rights reserved.
//

#import "TLBaseScrollVC.h"
#import "TLEnums.h"
#import "TLAccountModel.h"
#import "BEMCheckBox.h"
#import <MessageUI/MessageUI.h>

@protocol TLLoginVCDelegate <NSObject>

- (void)loginSucceeded:(BOOL) success token:(NSString *) token type:(TLLoginType) type;
- (void) customButtonClicked;
@end

@interface TLLoginVC : TLBaseScrollVC<MFMessageComposeViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UITextField *msisdnLabel;
@property (weak, nonatomic) IBOutlet UITextField *passwordLabel;
@property (weak, nonatomic) IBOutlet UIButton *loginButton;
@property (weak, nonatomic) IBOutlet UITextField *captchaLabel;
@property (nonatomic, strong) NSString * appID;
@property (nonatomic, strong) NSString * customButtonTitle;
@property (nonatomic, strong) NSString * chainID;
@property (weak, nonatomic) IBOutlet UIView *captchaView;
@property (weak, nonatomic) IBOutlet UIImageView *captchaImage;
@property (weak, nonatomic) IBOutlet UIButton *soundButton;
@property (weak, nonatomic) IBOutlet UIButton *refreshCaptcha;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightConstraint;
@property (weak, nonatomic) IBOutlet UIView *headerView;
@property (weak, nonatomic) IBOutlet UIButton *rememberButton;

@property(nonatomic,assign) BOOL rememberMeCheckedByDefault;

@property (nonatomic, strong) TLAccountModel * account;
@property(nonatomic,assign) BOOL offerLightLoginRememberMe;
@property(nonatomic,assign) BOOL offerTouchID;
@property(nonatomic,assign) BOOL nonTurkcellForgotPass;
@property(nonatomic,assign) BOOL loginWithTouchID;
@property(nonatomic,weak) id<TLLoginVCDelegate> delegate;
@property (weak, nonatomic) IBOutlet UIButton *forgotPassButton;
@property (weak, nonatomic) IBOutlet UIButton *forgotMailButton;
@property (weak, nonatomic) IBOutlet UIButton *requestPassButton;
@property (weak, nonatomic) IBOutlet UILabel *rememberMeText;
@property (weak, nonatomic) IBOutlet UIButton *changePassButton;
@property (weak, nonatomic) IBOutlet UILabel *registerDescriptionText;
@property (nonatomic, assign) TLLoginScreenType screenType;
@property (weak, nonatomic) IBOutlet UIButton *registerGsmButton;
@property (weak, nonatomic) IBOutlet UIImageView *removeGsmImageView;

@end

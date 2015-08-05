//
//  ChangePasswordVC.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 25/02/15.
//  Copyright (c) 2015 Sonat Karakas. All rights reserved.
//

#import "TLBaseScrollVC.h"

@protocol TLPasswordChangeDelegate <NSObject>

-(void) passwordChanged;

@end

@interface TLChangePasswordVC : TLBaseScrollVC

@property(nonatomic,assign) BOOL expired;
@property (weak, nonatomic) IBOutlet UITextField *passwordLabel;
@property (weak, nonatomic) IBOutlet UITextField *confirmPasswordLabel;
@property (weak, nonatomic) IBOutlet UITextField *oldPasswordLabel;
@property (weak, nonatomic) IBOutlet UIButton *changeButton;
@property (weak, nonatomic) IBOutlet UIView *headerView;
@property (weak, nonatomic) IBOutlet UITextField *msisdnLabel;

@property(nonatomic,weak) id<TLPasswordChangeDelegate> delegate;
@property(nonatomic,assign) BOOL backToRootVC;

@property (nonatomic,strong) NSString * defaultMsisdn;
@property (nonatomic,strong) NSString * defaultEncryptedMsisdn;

@end

//
//  TestVC.m
//  TurkcellID
//
//  Created by Kerem Gunduz on 24/02/15.
//  Copyright (c) 2015 Turkcell All rights reserved.
//


#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define RGBA(red_, green_, blue_, alpha_)	[UIColor colorWithRed:red_/255.0 green:green_/255.0 blue:blue_/255.0 alpha:alpha_]
#define RGB(red, green, blue)				RGBA(red, green, blue, 1.0)

#import "TestVC.h"
#import <TurkcellID/TurkcellID.h>

@interface TestVC ()<TLLoginDelegate>
@property (weak, nonatomic) IBOutlet UILabel *descLabel;
@property (nonatomic,strong) TLManager *login;
@property (weak, nonatomic) IBOutlet UITextField *chainTextField;
@end

@implementation TestVC

- (void)viewDidLoad {
    [super viewDidLoad];
    
    TLTheme * theme = [[TLTheme alloc] init];
    theme.customButtonTitle = @"Test Button";
    
    _login = [[TLManager alloc] initWithAppID:@"201" useTestServer:YES theme:theme customAccessGroup:nil];
    _login.delegate = self;
    
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(IBAction) startLogin
{
    [self.login startLoginProcess:self skipLightLogin:NO showLoginPage:YES showLoader:YES dismissSession:NO];
}


-(IBAction) startLoginWithout3G
{
    [self.login startLoginProcess:self skipLightLogin:YES showLoginPage:YES showLoader:NO dismissSession:NO];
}

-(IBAction)logout
{
    [self.login logout];
}

-(IBAction) clearKeyChain {
    [_login reset:self.chainTextField.text];
}

-(void) loginProcessCompleted:(BOOL) success type:(TLLoginType) loginType token:(NSString *) token
{
    self.descLabel.text = [NSString stringWithFormat:@"Token = %@ LoginType %@", token, [self loginTypeEnumToString:loginType]];
}

-(NSString*) loginTypeEnumToString:(TLLoginType)enumVal
{
    NSArray *imageTypeArray = [[NSArray alloc] initWithObjects:kTLLoginTypeArray];
    return [imageTypeArray objectAtIndex:enumVal];
}
-(void)customButtonClicked
{
    NSLog(@"yes clicked !");
}


@end

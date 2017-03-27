//
//  BaseVC.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 10/02/15.
//  Copyright (c) 2015 . All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TLTheme.h"
#import "TLEnums.h"

@interface TLBaseVC : UIViewController

-(void) addDismissButton;
-(void) addRightDismissButton;
-(void) addLogoAndSetTitle:(NSString *)title;
-(void) hide;
-(void) addBackButton;
-(void) clearTextFields;
- (void)clearTextFieldsOfView:(UIView *)view;
-(NSDictionary *)getAnalyticName;
-(void)sendAnalyticData:(NSDictionary *)userInfo;
@property(strong, nonatomic)UIView *titleView;
@end

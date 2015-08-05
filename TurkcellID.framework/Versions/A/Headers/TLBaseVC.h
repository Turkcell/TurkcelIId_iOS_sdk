//
//  BaseVC.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 10/02/15.
//  Copyright (c) 2015 . All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TLTheme.h"

@interface TLBaseVC : UIViewController

-(void) addDismissButton;
-(void) addLogo;
-(void) hide;
-(void) addBackButton;
-(void) clearTextFields;
- (void)clearTextFieldsOfView:(UIView *)view;

@property (weak, nonatomic) IBOutlet UILabel *headerLabel;

@end

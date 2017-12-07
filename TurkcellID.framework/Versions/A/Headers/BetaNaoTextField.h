//
//  BetaNaoTextField.h
//  BWWalkthroughExample
//
//  Created by mukesh mandora on 24/07/15.
//  Copyright (c) 2015 Yari D'areglia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BetaNaoTextField : UITextField<UITextFieldDelegate>
@property (strong ,nonatomic) NSString *placeholderText;
@property (strong ,nonatomic) UILabel *placeholderLabel;

-(void)reloadUI:(BOOL)isUp;
-(void) initialize;
@end

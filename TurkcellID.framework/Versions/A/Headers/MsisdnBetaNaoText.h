//
//  MsisdnBetaNaoText.h
//  TurkcellID
//
//  Created by murat hacioglu on 26/01/2017.
//  Copyright © 2017 Turkcell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BetaNaoTextField.h"

@protocol MsisdnBetaNaoTextDelegate <UITextFieldDelegate>

-(void)didSelectCountryCodeButton;

@end

@interface MsisdnBetaNaoText : BetaNaoTextField
@property (assign ,nonatomic) BOOL isRegionShow;
@property (nonatomic, weak) id<MsisdnBetaNaoTextDelegate> delegate;
@property (strong, nonatomic) UIButton * countryButton;
-(void)userObserverRegionSelect;

@end

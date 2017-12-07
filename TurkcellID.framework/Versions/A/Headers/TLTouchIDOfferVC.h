//
//  TouchIDOfferVC.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 18/02/15.
//  Copyright (c) 2015 . All rights reserved.
//

#import "TLBaseVC.h"

@protocol TLTouchIDOfferDelegate <NSObject>

-(void) touchIDOfferClickedButton:(BOOL) rememberMe;

@end
@interface TLTouchIDOfferVC : TLBaseVC
@property (weak, nonatomic) IBOutlet UILabel *descLabel;
@property (weak, nonatomic) IBOutlet UIButton *yesButton;
@property (weak, nonatomic) IBOutlet UIButton *noButton;

@property(nonatomic,weak) id<TLTouchIDOfferDelegate> delegate;
@end

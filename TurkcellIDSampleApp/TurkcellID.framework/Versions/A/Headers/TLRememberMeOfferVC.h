//
//  RememberMeOfferVC.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 20/02/15.
//  Copyright (c) 2015 Sonat Karakas. All rights reserved.
//

#import "TLBaseVC.h"

@protocol RememberMeOfferDelegate <NSObject>

-(void) rmOfferClickedButton:(BOOL) rememberMe;

@end

@interface TLRememberMeOfferVC : TLBaseVC
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *detailLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *yesButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *noButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *chainImage;

@property(nonatomic,weak) id<RememberMeOfferDelegate> delegate;
@property(nonatomic,strong) NSString * maskedMsisdn;
@end

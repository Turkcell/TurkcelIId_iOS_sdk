//
//  ChangePasswordVC.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 25/02/15.
//  Copyright (c) 2015 Sonat Karakas. All rights reserved.
//

#import "TLBaseScrollVC.h"
#import "BetaNaoTextField.h"
#import "MsisdnBetaNaoText.h"

@protocol TLPasswordChangeDelegate <NSObject>

-(void) passwordChanged;
@end

@interface TLChangePasswordVC : TLBaseScrollVC

- (id)initWithRegionList:(NSMutableArray*)countryList defaultCode:(NSString*)defaultCode showRegion:(BOOL)isShowRegion;

@property(nonatomic,assign) BOOL expired;

@property (weak, nonatomic) IBOutlet MsisdnBetaNaoText *msisdnLabel;

@property(nonatomic,weak) id<TLPasswordChangeDelegate> delegate;
@property(nonatomic,assign) BOOL backToRootVC;

@property (nonatomic,strong) NSString * defaultMsisdn;
@property (nonatomic,strong) NSString * defaultEncryptedMsisdn;

@end

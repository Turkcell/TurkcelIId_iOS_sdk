//
//  TLEmailCheckVC.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 21/10/15.
//  Copyright © 2015 Turkcell. All rights reserved.
//

#import "TLBaseScrollVC.h"
#import "TLEnums.h"
#import "MsisdnBetaNaoText.h"

@interface TLForgotEmailPasswordVC : TLBaseScrollVC

-(instancetype)initWithScreenType:(TLLoginScreenType) screenType countryList:(NSMutableArray*)countryList defaultCode:(NSString*)defaultCode isShowRegion:(BOOL)showRegion;

@end

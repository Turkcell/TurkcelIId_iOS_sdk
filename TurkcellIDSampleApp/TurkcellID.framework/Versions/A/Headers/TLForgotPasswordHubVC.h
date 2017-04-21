//
//  TLForgotPasswordHubVC.h
//  TurkcellID
//
//  Created by ahmet on 18/04/2017.
//  Copyright © 2017 Turkcell. All rights reserved.
//

#import "TLBaseScrollVC.h"

@interface TLForgotPasswordHubVC : TLBaseScrollVC
-(instancetype)initWithScreenType:(TLLoginScreenType) screenType countryList:(NSMutableArray*)countryList defaultCode:(NSString*)defaultCode isShowRegion:(BOOL)showRegion;

@end

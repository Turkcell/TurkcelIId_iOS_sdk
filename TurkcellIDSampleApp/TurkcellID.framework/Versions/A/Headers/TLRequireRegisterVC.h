//
//  TLEmailCheckVC.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 21/10/15.
//  Copyright © 2015 Turkcell. All rights reserved.
//

#import "TLBaseScrollVC.h"
#import "TLEnums.h"

@protocol TLRequireRegisterDelegate <NSObject>

@optional
-(void) loginAfterRegisterRequire: (id) response;

@end
@interface TLRequireRegisterVC : TLBaseScrollVC

 @property(nonatomic,weak) id<TLRequireRegisterDelegate> delegate;
-(instancetype)initWithScreenType:(TLLoginScreenType) screenType;

@end

//
//  TLSingleton.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 27/03/15.
//  Copyright (c) 2015 Turkcell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TLTheme.h"

@interface TLSingleton : NSObject

+(instancetype) sharedObject;

@property(nonatomic,strong) TLTheme * theme;

@end

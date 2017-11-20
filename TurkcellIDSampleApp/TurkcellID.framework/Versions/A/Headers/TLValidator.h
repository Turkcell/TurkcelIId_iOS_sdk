//
//  TLValidator.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 21/10/15.
//  Copyright © 2015 Turkcell. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TLValidator : NSObject

+(NSString *) validateEmail:(NSString *) email;

+(NSString *) validateMsisdn:(NSString *) msisdn withCountryCode: (NSString *) countryCode;

@end

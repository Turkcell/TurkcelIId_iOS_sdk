//
//  TLDateHelper.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 26/03/15.
//  Copyright (c) 2015 Turkcell. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TLDateHelper : NSObject

+(NSInteger) getDateDifference:(NSDate *) date1 date:(NSDate *) date2;

+(NSString *) formatDateToString:(NSDate *) date;

+(NSDate *) formatDate:(NSString *) date;


@end

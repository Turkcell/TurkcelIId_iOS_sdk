//
//  TextHelper.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 03/08/15.
//  Copyright (c) 2015 Turkcell. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface TLTextHelper : NSObject

@property(nonatomic,strong) NSDictionary* dataSource;

+ (TLTextHelper *)instance;

- (NSString *) getTextForKey:(NSString *) key;

@end

//
//  TAlertAction.h
//  TurkcellID
//
//  Created by ahmet on 26/12/2016.
//  Copyright © 2016 Turkcell. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^CompletionBlock)();

extern NSString* const TAlertActionEnabledDidChangeNotification;

typedef NS_ENUM(NSUInteger, TAlertActionStyle) {
    TLAlertActionStyleDefault,
    TLAlertActionStyleCancel

};

@interface TAlertAction : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) TAlertActionStyle style;
@property (nonatomic, copy) CompletionBlock handler;
@property (nonatomic, assign) BOOL enabled;

-(instancetype)initWithTitle:(NSString *)title style:(TAlertActionStyle)style handler:(void (^)())handler;

@end

//
//  TIconicAlertController.h
//  TurkcellID
//
//  Created by ahmet on 24/12/2016.
//  Copyright © 2016 Turkcell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TIconicAlertController.h"
#import "TIconicAlertView.h"
#import "TAlertAction.h"

@class TIconicAlertController;

@protocol TAlertIconicProtocol <NSObject>

-(void) alertIconicDismissed:(TIconicAlertController *) alert;

@end

@interface TIconicAlertController : UIViewController
@property(nonatomic,weak) id<TAlertIconicProtocol> delegate;
@property(nonatomic, strong) UIView *overlayView;
@property(nonatomic, strong) TIconicAlertView *alertView;

-(instancetype)initWithIcon:(UIImage *)icon title:(NSString *)title message:(NSString *)message detailImage:(UIImage *)detailImage;

- (void) addAction:(TAlertAction *)action;

@end

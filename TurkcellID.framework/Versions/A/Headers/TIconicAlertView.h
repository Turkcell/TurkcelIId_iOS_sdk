//
//  TIconicAlertView.h
//  TurkcellID
//
//  Created by ahmet on 23/12/2016.
//  Copyright © 2016 Turkcell. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TIconicAlertDelegate <NSObject>

@optional
-(void) buttonTapped: (UIButton *) sender;

@end

@interface TIconicAlertView : UIView

@property(nonatomic,weak) id<TIconicAlertDelegate> delegate;
@property (nonatomic, strong) UIColor *colorTopBackground;
@property (nonatomic, strong) UIColor *colorBottomBackground;
@property (strong, nonatomic) NSString *titleText;
@property (strong, nonatomic) NSString *descriptionText;
@property (nonatomic, assign) UIImage *imageIcon;
@property (nonatomic, assign) UIImage *detailImage;
@property (nonatomic, assign) UIFont *fontTitle;
@property (nonatomic, assign) UIFont *fontDescription;
@property (nonatomic, assign) UIFont *fontButton;
@property (nonatomic, strong) UIColor *colorBackgroundConfirmButton;
@property (nonatomic, strong) UIColor *colorBackgroundDismissButton;
@property (nonatomic, strong) UIColor *colorTitleDismissButton;
@property (nonatomic, strong) UIColor *colorTitleConfirmButton;
@property (nonatomic, assign) CGFloat corderRadius;
@property (strong, nonatomic) NSMutableArray *buttons;

-(CGFloat)getHeightAlertView:(CGFloat)width;

@end

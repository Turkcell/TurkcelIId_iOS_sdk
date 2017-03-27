//
//  FontHelper.h
//  
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark - Interface

@interface TLFontHelper : NSObject

+ (UIFont *) turkcellSaturaDemiFontWithSize:(NSInteger) fontSize;
+ (UIFont *) turkcellSaturaMediumFontWithSize:(NSInteger) fontSize;
+ (UIFont *) turkcellSaturaFontWithSize:(NSInteger) fontSize;
+ (UIFont *) turkcellSaturaBoldFontWithSize:(NSInteger) fontSize;

@end

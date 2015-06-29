//
//  Colors.h
//
//
//  Copyright (c) 2014 Turkcell. All rights reserved.
//

#pragma mark - Colors

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define RGBA(red_, green_, blue_, alpha_)	[UIColor colorWithRed:red_/255.0 green:green_/255.0 blue:blue_/255.0 alpha:alpha_]
#define RGB(red, green, blue)				RGBA(red, green, blue, 1.0)


#pragma mark - GLOBAL COLORS

#define TRANSPARENT_COLOR					[UIColor clearColor]
#define WHITE_COLOR							[UIColor whiteColor]
#define BLACK_COLOR						    [UIColor blackColor]
#define G_BLUE                              UIColorFromRGB(0x3fb0e8)
#define G_LIGHT_BLUE                        UIColorFromRGB(0x6accf9)
#define G_LIGHT_BLUE_2                      UIColorFromRGB(0x72c2ea)
#define G_BLACK                             UIColorFromRGB(0x363e4f)
#define G_DARK_BLUE                         UIColorFromRGB(0x319fe2)
#define G_DARK_BLUE_2                       UIColorFromRGB(0x2282d9)
#define G_DARK_YELLOW                       UIColorFromRGB(0xffcc00)
#define G_YELLOW                            UIColorFromRGB(0xffe000)
#define G_RED                               UIColorFromRGB(0xff4d00)
#define G_ORANGE                            UIColorFromRGB(0xff7e00)
#define G_GREEN                             UIColorFromRGB(0x67d74b)
#define G_GRAY                              UIColorFromRGB(0xcfd3dc)
#define G_LIGHT_GRAY                        UIColorFromRGB(0xe9ebef)
#define TEXTFIELD_BORDER                    UIColorFromRGB(0xd5d9e4)
#pragma mark - CUSTOM COLORS

#define C_BLUE                              UIColorFromRGB(0x019bd7)
#define C_LIGHT_BLUE                        UIColorFromRGB(0xb7ddef)
#define C_LIGHT_BLUE_2                      UIColorFromRGB(0x95d3e8)
#define C_DARK_BLUE                         UIColorFromRGB(0x0a83bf)
#define C_DARK_BLUE_2                       UIColorFromRGB(0x707a8f)
#define C_GREEN                             UIColorFromRGB(0x84c9b7)
#define C_DARK_GREEN                        UIColorFromRGB(0x579fb2)
#define C_RED                               UIColorFromRGB(0xec6453)
#define C_YELLOW                            UIColorFromRGB(0xfcd02b)
#define C_PURPLE                            UIColorFromRGB(0xb69dd1)
#define C_LIGHT_BLACK                       UIColorFromRGB(0x729db2)
#define C_DARK_WHITE                        UIColorFromRGB(0xf4f5f8)
#define C_GRAY                              UIColorFromRGB(0x999999)
#define C_LIGHT_GRAY                        UIColorFromRGB(0xb5bccb)
#define C_BLACK                             UIColorFromRGB(0x191e24)
#define C_GRAY_2                            UIColorFromRGB(0x7b8497)
#define C_GRAY_3                            UIColorFromRGB(0x4a4a4a)
#


#pragma mark - button







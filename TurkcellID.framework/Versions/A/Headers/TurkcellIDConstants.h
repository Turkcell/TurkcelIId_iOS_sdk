
#import <Foundation/Foundation.h>


#define BasePRODURL             @"https://tsdk.turkcell.com.tr/SERVICE/AuthAPI/"
#define BasePRODURLHTTP         @"http://tsdk.turkcell.com.tr/SERVICE/AuthAPI/"

#define BaseTestURL         @"https://sdk-tst.turkcell.com.tr/SERVICE/AuthAPI/"
#define BaseTestURLHTTP     @"http://sdk-tst.turkcell.com.tr/SERVICE/AuthAPI/"


#define _SYSTEM_VERSION_COMPARE_TO_(v)				[[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch]
#define SYSTEM_VERSION_EQUAL_TO(v)                  (_SYSTEM_VERSION_COMPARE_TO_(v) == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              (_SYSTEM_VERSION_COMPARE_TO_(v) == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  (_SYSTEM_VERSION_COMPARE_TO_(v) != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 (_SYSTEM_VERSION_COMPARE_TO_(v) == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     (_SYSTEM_VERSION_COMPARE_TO_(v) != NSOrderedDescending)
#define IS_MIN_IOS_8                                SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"8.0")
#define IS_MIN_IOS_7                                SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"7.0")
#define IS_MIN_IOS_6                                SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"6.0")
#define IS_IOS_5                                    [[[UIDevice currentDevice] systemVersion] hasPrefix:@"5"]
#define IS_IOS_6                                    [[[UIDevice currentDevice] systemVersion] hasPrefix:@"6"]
#define IPHONE4                                     [[UIScreen mainScreen] bounds].size.height <= 480.0

#define DEFAULT_CORNER_RADIUS 5.0f
#define STUB_SERVICE                  0
#define THEME                                       [[TLSingleton sharedObject] theme]
#define EXACT_LEN_MSISDN_TEXTFIELD      10
#define MINIMUM_LEN_PASSWORD_TEXTFIELD  6
#define MAXIMUM_LEN_PASSWORD_TEXTFIELD  15
#define EXACT_LEN_CAPTCHA_TEXTFIELD     6
#define EXACT_LEN_TWODIGIT_TEXTFIELD    2
#define EXACT_LEN_TCID_TEXTFIELD        2

#define PROMOTE_TOUCHID_INTERVAL             7
#define PROMOTE_LLREMEMBERME_INTERVAL        7

#define RESPONSE_CODE_SUCCESS            @"0"
#define RESPONSE_CODE_PASSWORD_EXPIRE    @"1"
#define RESPONSE_CODE_CAPTCHA_REQUIRED   @"4"

#define ACCESS_GROUP_TEST            @"F49E5GW326.com.shiftmobi.suite"
#define ACCESS_GROUP_PROD            @"7YZS5NTGYH.com.turkcell.suite"



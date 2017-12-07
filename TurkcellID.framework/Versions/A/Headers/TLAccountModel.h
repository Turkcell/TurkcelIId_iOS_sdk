//
//  AccuntModel.h
//  TurkcellID
//
//  Created by Kerem Gunduz on 09/02/15.
//

#import <Foundation/Foundation.h>

@interface TLAccountModel : NSObject<NSCoding>

@property(nonatomic,strong) NSString * clientSecret;
@property(nonatomic,strong) NSString * authToken;
@property(nonatomic,strong) NSString * chainID;

@end

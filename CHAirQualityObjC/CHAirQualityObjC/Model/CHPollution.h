//
//  CHPollution.h
//  CHAirQualityObjC
//
//  Created by Colby Harris on 3/25/20.
//  Copyright © 2020 Colby_Harris. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CHPollution : NSObject

@property (nonatomic, readonly) NSInteger airQualityIndexUS;

-(instancetype)initWithAirQualityIndexUS:(NSInteger)airQualityIndexUS;

-(instancetype)initWithDictionary:(NSDictionary<NSString *, id> *)dictionary;

@end

NS_ASSUME_NONNULL_END

//
//  CHCityAirQuality.h
//  CHAirQualityObjC
//
//  Created by Colby Harris on 3/25/20.
//  Copyright © 2020 Colby_Harris. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CHWeather;
@class CHPollution;

NS_ASSUME_NONNULL_BEGIN

@interface CHCityAirQuality : NSObject

@property (nonatomic, copy, readonly) NSString *city;
@property (nonatomic, copy, readonly) NSString *state;
@property (nonatomic, copy, readonly) NSString *country;
@property (nonatomic, copy, readonly) CHWeather *weather;
@property (nonatomic, copy, readonly) CHPollution *pollution;

-(instancetype)initWithCity:(NSString *)city
                      state:(NSString *)state
                    country:(NSString *)country
                    weather:(CHWeather *)weather
                  pollution:(CHPollution *)pollution;

@end

@interface CHCityAirQuality (JSONConvertable)

-(instancetype)initWithDictionary:(NSDictionary<NSString *, id> *)dictionary;

@end

NS_ASSUME_NONNULL_END

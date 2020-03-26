//
//  CHCityAirQuality.m
//  CHAirQualityObjC
//
//  Created by Colby Harris on 3/25/20.
//  Copyright © 2020 Colby_Harris. All rights reserved.
//

#import "CHCityAirQuality.h"
#import "CHWeather.h"
#import "CHPollution.h"

@implementation CHCityAirQuality

- (instancetype)initWithCity:(NSString *)city state:(NSString *)state country:(NSString *)country weather:(CHWeather *)weather pollution:(CHPollution *)pollution
{
    self = [super init];
    
    if (self) {
        _city = city;
        _state = state;
        _country = country;
        _weather = weather;
        _pollution = pollution;
    }
    return self;
}

@end

@implementation CHCityAirQuality (JSONConvertable)

- (instancetype)initWithDictionary:(NSDictionary<NSString *,id> *)dictionary
{
    NSString *city = dictionary[@"city"];
    NSString *state = dictionary[@"state"];
    NSString *country = dictionary[@"country"];
    NSDictionary *currentInfo = dictionary[@"current"];
    
    CHWeather *weather = [[CHWeather alloc] initWithDictionary:currentInfo[@"weather"]];
    CHPollution *pollution = [[CHPollution alloc] initWithDictionary:currentInfo[@"pollution"]];
    
    return [self initWithCity:city state:state country:country weather:weather pollution:pollution];
}
@end

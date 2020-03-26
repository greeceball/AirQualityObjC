//
//  CHWeather.m
//  CHAirQualityObjC
//
//  Created by Colby Harris on 3/25/20.
//  Copyright © 2020 Colby_Harris. All rights reserved.
//

#import "CHWeather.h"

@implementation CHWeather

- (instancetype)initWithTemp:(NSInteger)temp windSpeed:(NSInteger)windSpeed windDirection:(NSInteger)windDirection humidity:(NSInteger)humidity iconCode:(NSString *)iconCode
{
    self = [super init];
    if (self)
    {
        _temp = temp;
        _windSpeed = windSpeed;
        _windDirection = windDirection;
        _humidity = humidity;
        _iconCode = iconCode;
    }
    
    return self;
}

@end

@implementation CHWeather (JSONConvertable)

- (instancetype)initWithDictionary:(NSDictionary<NSString *,id> *)dictionary
{
    NSInteger temp = [dictionary[@"tp"] intValue];
    NSInteger windSpeed = [dictionary[@"ws"] intValue];
    NSInteger windDirection = [dictionary[@"wd"] intValue];
    NSInteger humidity = [dictionary[@"hu"] intValue];
    NSString *iconCode = [dictionary[@"ic"] stringValue];
    
    return [self initWithTemp:temp windSpeed:windSpeed windDirection:windDirection humidity:humidity iconCode:iconCode];
    }

@end

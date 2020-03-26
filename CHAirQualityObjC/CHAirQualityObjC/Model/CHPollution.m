//
//  CHPollution.m
//  CHAirQualityObjC
//
//  Created by Colby Harris on 3/25/20.
//  Copyright © 2020 Colby_Harris. All rights reserved.
//

#import "CHPollution.h"

@implementation CHPollution

- (instancetype)initWithAirQualityIndexUS:(NSInteger)airQualityIndexUS
{
    self = [super init];
    if (self)
    {
        _airQualityIndexUS = airQualityIndexUS;
    }
    return self;
}

@end

@implementation CHPollution (JSONConvertable)

- (instancetype)initWithDictionary:(NSDictionary<NSString *, id> *)dictionary
{
    NSInteger airQualityIndexUS = [dictionary [@"auius"] intValue];
    
    return [self initWithAirQualityIndexUS:airQualityIndexUS];
    
}

@end

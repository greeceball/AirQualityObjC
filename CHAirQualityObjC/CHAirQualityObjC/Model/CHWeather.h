//
//  CHWeather.h
//  CHAirQualityObjC
//
//  Created by Colby Harris on 3/25/20.
//  Copyright © 2020 Colby_Harris. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CHWeather : NSObject

@property (nonatomic, readonly) NSInteger temp;
@property (nonatomic, readonly) NSInteger windSpeed;
@property (nonatomic, readonly) NSInteger windDirection;
@property (nonatomic, readonly) NSInteger humidity;
@property (nonatomic, readonly) NSString *iconCode;

-(instancetype)initWithTemp:(NSInteger)temp windSpeed:(NSInteger)windSpeed windDirection:(NSInteger)windDirection humidity:(NSInteger)humidity iconCode:(NSString *)iconCode;

-(instancetype)initWithDictionary:(NSDictionary<NSString *, id> *)dictionary;

@end

NS_ASSUME_NONNULL_END

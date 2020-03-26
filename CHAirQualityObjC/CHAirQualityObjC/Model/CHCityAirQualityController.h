//
//  CHCityAirQualityController.h
//  CHAirQualityObjC
//
//  Created by Colby Harris on 3/25/20.
//  Copyright © 2020 Colby_Harris. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CHCityAirQuality;

NS_ASSUME_NONNULL_BEGIN

@interface CHCityAirQualityController : NSObject

+ (void)fetchSupportedCountries:(void(^) (NSArray<NSString *> *_Nullable))conmpletion;

+(void)fetchSupportedStatesInCountry:(NSString *)country completion:(void (^) (NSArray<NSString *> *_Nullable))completion;

+(void)fetchSupportedCitiesInState:(NSString *)state country:(NSString *)country completion:(void (^) (NSArray<NSString *> *_Nullable))completion;

+(void)fetchDataForCity:(NSString *)city
                  state:(NSString *)state
                country:(NSString *)country
             completion:(void (^) (CHCityAirQuality *_Nullable))completion;

@end

NS_ASSUME_NONNULL_END

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray, STCity, STWeatherAttributes;

@interface STShowHourlyWeatherForecastRequest : AFSiriRequest
{
    STWeatherAttributes *_currentAttributes;
    NSArray *_hourlyAttributes;
    STCity *_city;
    long long _startHour;
    long long _forecastType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)forecastType;
- (long long)startHour;
- (id)city;
- (id)hourlyAttributes;
- (id)currentAttributes;
- (id)createResponse;
- (id)_initWithCurrentAttributes:(id)arg1 hourlyAttributes:(id)arg2 city:(id)arg3 startHour:(long long)arg4 forecastType:(long long)arg5;

@end


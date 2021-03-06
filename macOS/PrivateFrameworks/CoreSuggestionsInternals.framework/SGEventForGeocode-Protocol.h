//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone;

@protocol SGEventForGeocode <NSObject>
- (id)geocodedEventWithStartDate:(NSDate *)arg1 startTimeZone:(NSTimeZone *)arg2 endDate:(NSDate *)arg3 endTimeZone:(NSTimeZone *)arg4 locations:(NSArray *)arg5;
- (NSArray *)geocodeLocations;
- (NSTimeZone *)geocodeEndTimeZone;
- (NSDate *)geocodeEndDate;
- (NSTimeZone *)geocodeStartTimeZone;
- (NSDate *)geocodeStartDate;
- (NSString *)poiFilters;
- (unsigned long long)geocodingMode;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet;

@interface PIECalendarSlicerParams : NSObject
{
    NSMutableArray *_calendarSliceParams;
    NSDate *_startDate;
    long long _duration;
    NSSet *_validHoleCounts;
    NSArray *_validHoleCountsSorted;
    id _defaultSliceUserInfo;
    NSMutableDictionary *_holeCountFavorability;
    NSDictionary *_comparativeHoleCountFavorabilityMap;
}

@property(retain, nonatomic) NSSet *validHoleCounts; // @synthesize validHoleCounts=_validHoleCounts;
@property(retain, nonatomic) id defaultSliceUserInfo; // @synthesize defaultSliceUserInfo=_defaultSliceUserInfo;
@property(readonly, nonatomic) long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSArray *calendarSliceParams; // @synthesize calendarSliceParams=_calendarSliceParams;
- (BOOL)isValid;
- (id)comparativeHoleCountFavorabilityMap;
- (void)setFavorability:(double)arg1 forHoleCount:(long long)arg2;
@property(readonly, nonatomic) NSArray *validHoleCountsSorted; // @synthesize validHoleCountsSorted=_validHoleCountsSorted;
- (id)initWithStartDate:(id)arg1 duration:(long long)arg2;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateInterval, NSMutableSet, NSSet, PLLocationOfInterestCache;

@interface PLRoutineService : NSObject
{
    BOOL _routineIsAvailable;
    NSDateInterval *_fetchDateInterval;
    PLLocationOfInterestCache *_visitsCache;
    NSMutableSet *_pendingPinningVisitIdentifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL routineIsAvailable; // @synthesize routineIsAvailable=_routineIsAvailable;
@property(retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers; // @synthesize pendingPinningVisitIdentifiers=_pendingPinningVisitIdentifiers;
@property(retain, nonatomic) PLLocationOfInterestCache *visitsCache; // @synthesize visitsCache=_visitsCache;
@property(retain, nonatomic) NSDateInterval *fetchDateInterval; // @synthesize fetchDateInterval=_fetchDateInterval;
- (void)_pinPendingVisits;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2;
- (void)_buildLocationsOfInterestCache;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1;
- (BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationsOfInterestOfType:(long long)arg1;
@property(readonly, nonatomic) NSSet *allLocationsOfInterest;
@property(readonly, nonatomic) NSSet *workLocations;
@property(readonly, nonatomic) NSSet *homeLocations;
- (void)fetchLocationsOfInterestIfNeeded;
- (BOOL)hasLocationsOfInterestInformation;
- (void)postProcessLocationsOfInterest;
- (void)invalidateLocationsOfInterest;
- (id)initWithFetchDateInterval:(id)arg1;

@end


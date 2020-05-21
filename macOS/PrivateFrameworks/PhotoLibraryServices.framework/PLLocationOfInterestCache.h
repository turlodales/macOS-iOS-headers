//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSMutableSet, PLLocationOfInterestVisit;

@interface PLLocationOfInterestCache : NSObject
{
    NSMutableDictionary *_visitsCache;
    NSMutableSet *_allLocationsOfInterest;
    NSMutableSet *_homeLocations;
    NSMutableSet *_workLocations;
    unsigned long long _numberOfLocationsOfInterestVisits;
    NSDate *_earliestVisitStartDate;
    PLLocationOfInterestVisit *_lastLocationOfInterestVisit;
    unsigned long long _numberOfLocationsOfInterestTransitions;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long numberOfLocationsOfInterestTransitions; // @synthesize numberOfLocationsOfInterestTransitions=_numberOfLocationsOfInterestTransitions;
@property(readonly) PLLocationOfInterestVisit *lastLocationOfInterestVisit; // @synthesize lastLocationOfInterestVisit=_lastLocationOfInterestVisit;
@property(readonly) NSDate *earliestVisitStartDate; // @synthesize earliestVisitStartDate=_earliestVisitStartDate;
@property(readonly) unsigned long long numberOfLocationsOfInterestVisits; // @synthesize numberOfLocationsOfInterestVisits=_numberOfLocationsOfInterestVisits;
@property(retain, nonatomic) NSMutableSet *workLocations; // @synthesize workLocations=_workLocations;
@property(retain, nonatomic) NSMutableSet *homeLocations; // @synthesize homeLocations=_homeLocations;
@property(retain, nonatomic) NSMutableSet *allLocationsOfInterest; // @synthesize allLocationsOfInterest=_allLocationsOfInterest;
@property(retain, nonatomic) NSMutableDictionary *visitsCache; // @synthesize visitsCache=_visitsCache;
@property(readonly) unsigned long long numberOfLocationsOfInterest;
- (id)locationsOfInterestVisitsInDateInterval:(id)arg1;
- (id)locationsOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)closestLocationOfInterestVisitToLocation:(id)arg1 withinDistance:(double)arg2 inDateInterval:(id)arg3;
- (id)locationsOfInterestOfType:(long long)arg1;
- (void)addLocationOfInterest:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEORouteMatcher.h>

@class GEOMotionContext, NSArray;

@interface GEOTransitRouteMatcher : GEORouteMatcher
{
    GEOMotionContext *_motionContext;
    NSArray *_stationsOnRoute;
    NSArray *_routeMatchUpdaters;
    NSArray *_stepRanges;
    double _distanceToClosestWalkingSegment;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double distanceToClosestWalkingSegment; // @synthesize distanceToClosestWalkingSegment=_distanceToClosestWalkingSegment;
- (void)_insertUpdater:(id)arg1 into:(id)arg2;
- (BOOL)_shouldConsiderCourseForLocation:(id)arg1;
- (double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)_considerCandidateMatch:(id)arg1;
- (id)_stepForPointIndex:(unsigned int)arg1 previousStep:(id)arg2;
- (void)_startRouteMatch;
- (BOOL)_stepsInSameRange:(id)arg1 nextStep:(id)arg2;
- (id)motionContext;
- (id)route;
- (BOOL)isStationCoordinateOnRoute:(CDStruct_c3b9c2ee)arg1;
- (id)initWithRoute:(id)arg1 motionContext:(id)arg2;

@end


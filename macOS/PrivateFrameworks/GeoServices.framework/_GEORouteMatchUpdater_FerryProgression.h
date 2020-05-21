//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_FerryProgression : _GEORouteMatchUpdater
{
    GEOComposedRouteStep *_boardStep;
    GEOComposedRouteStep *_alightStep;
    CDStruct_2c43369c _alightLocationCoordinate;
    double _startProgressionDistanceToDestination;
    unsigned long long _progressionCount;
}

- (void).cxx_destruct;
- (unsigned long long)priority;
- (BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)initWithRoute:(id)arg1 tripLeg:(id)arg2;

@end


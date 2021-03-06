//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOComposedWalkingRouteStep.h>

@class NSArray;

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep
{
    NSArray *_aggregatedGEOSteps;
    unsigned int _aggregatedStepsDistance;
    unsigned int _aggregatedStepsDuration;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)_calculateAggregatedStepsDistance;
- (unsigned int)distance;
- (unsigned int)_calculateAggregatedStepsDuration;
- (unsigned int)duration;
- (BOOL)isUncertainArrival;
- (id)initWithComposedRoute:(id)arg1 aggregatedGEOSteps:(id)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange)arg4 maneuverPointRange:(struct _NSRange)arg5;

@end


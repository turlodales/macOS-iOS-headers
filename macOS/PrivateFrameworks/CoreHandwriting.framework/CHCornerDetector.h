//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHDrawing, NSMutableIndexSet;

@interface CHCornerDetector : NSObject
{
    BOOL _shouldUseDynamicSampling;
    double _minimumSignificantSegmentLength;
    CHDrawing *_drawing;
    CHDrawing *_resampledDrawing;
    unsigned long long _directionChangeCount;
    unsigned long long _highestDirectionChangeCount;
    unsigned long long __strawSize;
    NSMutableIndexSet *__cornerIndexSet;
    NSMutableIndexSet *__directionChangeCornerIndexes;
    vector_1dba4e4e __resampledDrawingPointMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) vector_1dba4e4e _resampledDrawingPointMap; // @synthesize _resampledDrawingPointMap=__resampledDrawingPointMap;
@property(readonly, copy, nonatomic) NSMutableIndexSet *_directionChangeCornerIndexes; // @synthesize _directionChangeCornerIndexes=__directionChangeCornerIndexes;
@property(readonly, copy, nonatomic) NSMutableIndexSet *_cornerIndexSet; // @synthesize _cornerIndexSet=__cornerIndexSet;
@property(readonly, nonatomic) unsigned long long _strawSize; // @synthesize _strawSize=__strawSize;
@property(readonly, nonatomic) unsigned long long highestDirectionChangeCount; // @synthesize highestDirectionChangeCount=_highestDirectionChangeCount;
@property(readonly, nonatomic) unsigned long long directionChangeCount; // @synthesize directionChangeCount=_directionChangeCount;
@property(readonly, copy, nonatomic) CHDrawing *resampledDrawing; // @synthesize resampledDrawing=_resampledDrawing;
@property(copy, nonatomic) CHDrawing *drawing; // @synthesize drawing=_drawing;
@property(nonatomic) double minimumSignificantSegmentLength; // @synthesize minimumSignificantSegmentLength=_minimumSignificantSegmentLength;
@property(nonatomic) BOOL shouldUseDynamicSampling; // @synthesize shouldUseDynamicSampling=_shouldUseDynamicSampling;
- (id)_resolveResampledDirectionChangePointIndexes:(id)arg1;
- (BOOL)_isLine:(id)arg1 usingThreshold:(double)arg2 p1:(long long)arg3 p2:(long long)arg4;
- (long long)_strokeHalfwayCorner:(id)arg1 p1:(long long)arg2 p2:(long long)arg3;
- (id)_postProcessCorners:(id)arg1 corners:(id)arg2 straws:(id)arg3;
- (void)_removeAdjacentCorners:(id)arg1 corners:(id)arg2 straws:(id)arg3;
- (void)_removeColinearCorners:(id)arg1 usingDistanceThreshold:(double)arg2 usingLowerThreshold:(double)arg3 usingUpperThreshold:(double)arg4 corners:(id)arg5;
- (void)_removeColinearCorners:(id)arg1 usingThreshold:(double)arg2 corners:(id)arg3;
- (double)_pathDistance:(id)arg1 p1:(long long)arg2 p2:(long long)arg3;
- (double)_distance:(id)arg1 p1:(long long)arg2 p2:(long long)arg3;
- (double)_resamplingDistance:(id)arg1;
- (id)_resampleDrawing:(id)arg1 outputPointMap:(vector_1dba4e4e *)arg2;
- (void)_detectCorners;
- (unsigned long long)_detectDirectionalChanges;
- (id)directionChangeCornerIndexes;
- (id)cornerIndexes;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, PVContext;

@interface PVVisionAnalyzer : NSObject
{
    id <PVVisionIntegrating> _visionIntegration;
    PVContext *_context;
    NSDictionary *_detectionOptions;
    NSDictionary *_detailsExtractionOptions;
}

- (void).cxx_destruct;
- (id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (float)angleInDegreesBetweenFaceDirectionAndImageXAxisForFace:(id)arg1;
- (long long)_expressionTypeFromExpressionString:(id)arg1;
- (struct CGPoint)centroidForLandmarkRegion:(id)arg1;
- (void)configureRequest:(id)arg1;
- (id)initWithContext:(id)arg1 visionIntegration:(id)arg2;

@end


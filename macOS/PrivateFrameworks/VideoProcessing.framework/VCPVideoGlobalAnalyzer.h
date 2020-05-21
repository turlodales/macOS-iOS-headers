//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VCPVideoGlobalAnalyzer : NSObject
{
}

- (int)setActivityLevel:(id)arg1;
- (float)assetActivityLevelFromAnalysisResults:(id)arg1;
- (BOOL)isJunkTimeRange:(CDStruct_e83c9415)arg1 basedOnResults:(id)arg2;
- (float)cameraActivityfromQuality:(float)arg1;
- (float)subjectActivityInTimeRange:(CDStruct_e83c9415)arg1 fromResults:(id)arg2;
- (float)scaleForTimeRange:(CDStruct_e83c9415)arg1 basedOnFace:(id)arg2;
- (float)assetJunkScoreFromAnalysis:(id)arg1;
- (BOOL)hasMeaningfulSceneSegment:(id)arg1 withFpsRate:(float)arg2;
- (float)assetCameraMotionScoreFromAnalysis:(id)arg1;
- (float)assetVoiceScoreFromAnalysis:(id)arg1;
- (float)assetExpressionScoreFromAnalysis:(id)arg1;
- (float)assetActionScoreFromAnalysis:(id)arg1;
- (float)assetQualityScoreFromAnalysis:(id)arg1 withFpsRate:(float)arg2;
- (int)generateLivePhotoRecommendationForResults:(id)arg1 andPrivateResults:(id)arg2 usingFaceAction:(BOOL)arg3;
- (float)analyzeOverallQuality:(id)arg1 withFpsRate:(float)arg2;

@end


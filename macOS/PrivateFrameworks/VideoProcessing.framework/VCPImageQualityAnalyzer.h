//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPImageQualityAnalyzer : NSObject
{
    float _qualityScore;
}

@property(readonly) float qualityScore; // @synthesize qualityScore=_qualityScore;
- (int)analyzeImageQuality:(id)arg1 irisPhotoOffsetSec:(float)arg2 cancel:(CDUnknownBlockType)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface VCPCNNFaceLandmarkDetector : NSObject
{
    NSMutableArray *_landmarks;
}

+ (id)detector;
- (void).cxx_destruct;
- (id)landmarks;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withFaceBounds:(struct CGRect)arg2;
- (int)computeLandmarks:(float *)arg1;
- (float *)getInputBuffer;

@end


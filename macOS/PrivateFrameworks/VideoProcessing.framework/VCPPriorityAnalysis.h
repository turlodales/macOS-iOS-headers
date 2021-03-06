//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPCNNFastGestureRecognition;

@interface VCPPriorityAnalysis : NSObject
{
    BOOL _buttonPressed;
    BOOL _light;
    float _accumulateScore;
    int _frameInd;
    int _rotationAngle;
    int _sendStopSignalKTimes;
    struct Rotator *_rotator;
    struct EncodeStats *_stats;
    VCPCNNFastGestureRecognition *_fastGestureDetector;
}

+ (id)priorityAnalysis;
- (void).cxx_destruct;
- (void)dealloc;
- (int)calculatePriorityScore:(float *)arg1 ofPixelBuffer:(struct __CVBuffer *)arg2 withMetadata:(id)arg3;
- (int)fastSignLanguageDetection:(float *)arg1 ofPixelBuffer:(struct __CVBuffer *)arg2 withMetadata:(id)arg3;
- (id)init;

@end


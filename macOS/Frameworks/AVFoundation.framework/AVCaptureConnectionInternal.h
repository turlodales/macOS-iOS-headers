//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVCaptureConnectionInternal : NSObject
{
    NSMutableArray *inputPorts;
    AVWeakReference *outputWeakReference;
    AVWeakReference *videoPreviewLayerWeakReference;
    BOOL active;
    BOOL enabled;
    NSMutableArray *audioChannels;
    NSMutableArray *enabledAudioChannels;
    NSArray *audioChannelPeakLevels;
    long long lastGetAudioPeakLevelsTime;
    NSArray *audioChannelAvgLevels;
    long long lastGetAudioAvgLevelsTime;
    BOOL automaticallyAdjustsVideoMirroring;
    BOOL videoMirrored;
    long long videoOrientation;
    double maxVideoScaleAndCropFactor;
    double videoScaleAndCropFactor;
    long long videoFieldMode;
    CDStruct_1b6d18a9 videoMinFrameDuration;
    CDStruct_1b6d18a9 videoMaxFrameDuration;
    struct OpaqueCMIOGraph *graph;
    int node;
    unsigned int element;
    unsigned int scope;
    struct {
        int _field1;
        int _field2;
        void *_field3;
    } *extendedNodeInfo;
    unsigned int writerElement;
    long long clientSequenceID;
    struct __CFString *clientSequenceIDCF;
    void *mostRecentlySeenClientSequenceID;
    long long preferredVideoStabilizationMode;
}

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface VCPVoiceDetector : NSObject
{
    NSDictionary *_model;
    struct AudioStreamBasicDescription _audioStream;
    int _sampleBatchSize;
    CDStruct_1b6d18a9 _trackStart;
    BOOL _voiceActivity;
    CDStruct_1b6d18a9 _voiceStart;
    NSMutableArray *_voiceDetections;
    NSMutableArray *_utteranceDetections;
    NSMutableArray *_musicDetections;
}

+ (id)detector;
- (void).cxx_destruct;
@property(retain) NSMutableArray *voiceDetections; // @synthesize voiceDetections=_voiceDetections;
- (id)results;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (int)setupWithAudioStream:(const struct AudioStreamBasicDescription *)arg1;
- (int)loadModel;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andSampleBatchSize:(int)arg2;
- (void)addDetectionFromTime:(const CDStruct_1b6d18a9 *)arg1 toTime:(const CDStruct_1b6d18a9 *)arg2 result:(id)arg3;
- (id)audioFormatRequirements;
- (id)init;

@end


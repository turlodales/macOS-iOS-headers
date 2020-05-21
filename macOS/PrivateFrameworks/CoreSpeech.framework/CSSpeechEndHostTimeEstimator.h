//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSSpeechEndHostTimeEstimator : NSObject
{
    BOOL _endPointNotified;
    unsigned long long _numAudioSampleForwarded;
    unsigned long long _lastAudioChunkHostTime;
    double _trailingSilenceDurationAtEndpoint;
}

@property(nonatomic) double trailingSilenceDurationAtEndpoint; // @synthesize trailingSilenceDurationAtEndpoint=_trailingSilenceDurationAtEndpoint;
@property(nonatomic) BOOL endPointNotified; // @synthesize endPointNotified=_endPointNotified;
@property(nonatomic) unsigned long long lastAudioChunkHostTime; // @synthesize lastAudioChunkHostTime=_lastAudioChunkHostTime;
@property(nonatomic) unsigned long long numAudioSampleForwarded; // @synthesize numAudioSampleForwarded=_numAudioSampleForwarded;
- (unsigned long long)estimatedSpeechEndHostTime;
- (void)notifyTrailingSilenceDurationAtEndpoint:(double)arg1;
- (void)addNumSamples:(unsigned long long)arg1 hostTime:(unsigned long long)arg2;
- (void)reset;
- (id)init;

@end


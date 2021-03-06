//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@protocol CSEndpointAnalyzer <NSObject>
@property(readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property(readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property(nonatomic) double minimumDurationForEndpointer;
@property(nonatomic) double automaticEndpointingSuspensionEndTime;
@property(nonatomic) double startWaitTime;
@property(nonatomic) double delay;
@property(nonatomic) long long endpointStyle;
- (void)preheat;
- (void)reset;

@optional
@property(nonatomic) BOOL saveSamplesSeenInReset;
@property(nonatomic) double endWaitTime;
@property(nonatomic) double interspeechWaitTime;
@property(nonatomic) long long endpointMode;
@property(nonatomic) double bypassSamples;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSKeywordAnalyzerNDAPIScoreDelegate.h"

@class CSAsset, CSAudioTimeConverter, CSKeywordAnalyzerNDAPI, NSObject<OS_dispatch_queue>, NSString;

@interface CSContinuousVoiceTrigger : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate>
{
    float _keywordThreshold;
    float _twoShotThreshold;
    float _lastScore;
    id <CSContinuousVoiceTriggerDelegate> _delegate;
    CSAudioTimeConverter *_audioTimeConverter;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    long long _mode;
    unsigned long long _analyzedSampleCount;
    unsigned long long _triggerEndSampleCount;
    unsigned long long _twoShotDecisionWaitSamples;
    unsigned long long _activeChannel;
}

- (void).cxx_destruct;
@property(nonatomic) float lastScore; // @synthesize lastScore=_lastScore;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) float twoShotThreshold; // @synthesize twoShotThreshold=_twoShotThreshold;
@property(nonatomic) unsigned long long twoShotDecisionWaitSamples; // @synthesize twoShotDecisionWaitSamples=_twoShotDecisionWaitSamples;
@property(nonatomic) unsigned long long triggerEndSampleCount; // @synthesize triggerEndSampleCount=_triggerEndSampleCount;
@property(nonatomic) unsigned long long analyzedSampleCount; // @synthesize analyzedSampleCount=_analyzedSampleCount;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) float keywordThreshold; // @synthesize keywordThreshold=_keywordThreshold;
@property(retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer; // @synthesize keywordAnalyzer=_keywordAnalyzer;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAudioTimeConverter *audioTimeConverter; // @synthesize audioTimeConverter=_audioTimeConverter;
@property(nonatomic) __weak id <CSContinuousVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_shotAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)processAudioSamples:(id)arg1;
- (void)startDetectTwoShot:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)_reset;
- (void)reset;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


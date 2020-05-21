//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSAudioStreamProvidingDelegate.h"
#import "CSKeywordAnalyzerNDAPIScoreDelegate.h"
#import "CSOpportuneSpeakEventMonitorDelegate.h"
#import "CSSiriClientBehaviorMonitorDelegate.h"
#import "CSVoiceTriggerEnabledMonitorDelegate.h"

@class CSAsset, CSAudioProvider, CSAudioStream, CSKeywordAnalyzerNDAPI, CSOSTransaction, CSVoiceTriggerSecondPass, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface CSVoiceTriggerFirstPassHearstAP : NSObject <CSAudioStreamProvidingDelegate, CSKeywordAnalyzerNDAPIScoreDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSOpportuneSpeakEventMonitorDelegate>
{
    BOOL _isAPHearstFirstPassEnabled;
    BOOL _isSiriClientListening;
    BOOL _isSecondPassRunning;
    BOOL _isVoiceTriggerEnabled;
    float _keywordThreshold;
    id <CSVoiceTriggerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzerNDAPI;
    CSAudioStream *_audioStream;
    NSObject<OS_dispatch_group> *_recordingWillStartGroup;
    CSVoiceTriggerSecondPass *_voiceTriggerSecondPass;
    CSOSTransaction *_secondPassTransaction;
    unsigned long long _secondChanceHotTillMachTime;
    NSString *_deviceId;
    CSAudioProvider *_audioProvider;
    NSString *_opportuneSpeakAudioProviderUUID;
    NSMutableArray *_audioStreamHoldings;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isVoiceTriggerEnabled; // @synthesize isVoiceTriggerEnabled=_isVoiceTriggerEnabled;
@property(retain, nonatomic) NSMutableArray *audioStreamHoldings; // @synthesize audioStreamHoldings=_audioStreamHoldings;
@property(retain, nonatomic) NSString *opportuneSpeakAudioProviderUUID; // @synthesize opportuneSpeakAudioProviderUUID=_opportuneSpeakAudioProviderUUID;
@property(retain, nonatomic) CSAudioProvider *audioProvider; // @synthesize audioProvider=_audioProvider;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) unsigned long long secondChanceHotTillMachTime; // @synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime;
@property(nonatomic) BOOL isSecondPassRunning; // @synthesize isSecondPassRunning=_isSecondPassRunning;
@property(nonatomic) BOOL isSiriClientListening; // @synthesize isSiriClientListening=_isSiriClientListening;
@property(retain, nonatomic) CSOSTransaction *secondPassTransaction; // @synthesize secondPassTransaction=_secondPassTransaction;
@property(retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass; // @synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass;
@property(nonatomic) float keywordThreshold; // @synthesize keywordThreshold=_keywordThreshold;
@property(nonatomic) BOOL isAPHearstFirstPassEnabled; // @synthesize isAPHearstFirstPassEnabled=_isAPHearstFirstPassEnabled;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *recordingWillStartGroup; // @synthesize recordingWillStartGroup=_recordingWillStartGroup;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzerNDAPI; // @synthesize keywordAnalyzerNDAPI=_keywordAnalyzerNDAPI;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4;
- (void)opportuneSpeakEventMonitor:(id)arg1 didStreamStateChanged:(BOOL)arg2;
- (void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2;
- (void)_transitHearstAPEnable:(BOOL)arg1;
- (BOOL)_shouldHearstAPModeEnabled;
- (void)_teardownSecondPass;
- (void)_createSecondPass;
- (void)_cancelLastAudioStreamHold;
- (void)_addAudioStreamHold:(id)arg1;
- (void)_handleSecondPassResult:(unsigned long long)arg1 voiceTriggerInfo:(id)arg2 deviceId:(id)arg3 secondChanceCandidate:(BOOL)arg4 error:(id)arg5;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)_stopListening;
- (void)_startListenWithAudioProviderUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


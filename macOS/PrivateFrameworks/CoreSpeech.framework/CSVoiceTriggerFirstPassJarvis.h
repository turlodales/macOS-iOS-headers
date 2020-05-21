//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSActivationEventNotifierDelegate.h"
#import "CSAudioStreamProvidingDelegate.h"
#import "CSKeywordAnalyzerNDEAPIScoreDelegate.h"
#import "CSSPGEndpointAnalyzerDelegate.h"
#import "CSSiriClientBehaviorMonitorDelegate.h"

@class CSAsset, CSAudioProvider, CSAudioStream, CSAudioStreamHolding, CSKeywordAnalyzerNDEAPI, CSPlainAudioFileWriter, CSSPGEndpointAnalyzer, CSVoiceTriggerRTModel, CSVoiceTriggerSecondPass, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CSVoiceTriggerFirstPassJarvis : NSObject <CSKeywordAnalyzerNDEAPIScoreDelegate, CSActivationEventNotifierDelegate, CSSPGEndpointAnalyzerDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate>
{
    BOOL _hasReceivedNDEAPIResult;
    BOOL _hasTriggerCandidate;
    BOOL _isSecondPassRunning;
    BOOL _isSiriClientListening;
    id <CSVoiceTriggerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CSAudioStream *_audioStream;
    CSAudioProvider *_audioProvider;
    CSAudioStreamHolding *_audioStreamHolding;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDEAPI *_keywordAnalyzerNDEAPI;
    unsigned long long _numProcessedSamples;
    unsigned long long _jarvisVoiceTriggerTimeout;
    unsigned long long _activeChannel;
    NSDictionary *_jarvisTriggerResult;
    unsigned long long _earlyDetectFiredMachTime;
    CSSPGEndpointAnalyzer *_endpointAnalyzer;
    NSString *_deviceId;
    CSVoiceTriggerRTModel *_rtModel;
    CSPlainAudioFileWriter *_audioFileWriter;
    CSVoiceTriggerSecondPass *_voiceTriggerSecondPass;
    unsigned long long _secondChanceHotTillMachTime;
}

+ (id)timeStampString;
+ (id)jarvisAudioLogDirectory;
+ (id)jarvisAudioLoggingFilePath;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long secondChanceHotTillMachTime; // @synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime;
@property(nonatomic) BOOL isSiriClientListening; // @synthesize isSiriClientListening=_isSiriClientListening;
@property(nonatomic) BOOL isSecondPassRunning; // @synthesize isSecondPassRunning=_isSecondPassRunning;
@property(retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass; // @synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass;
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(retain, nonatomic) CSVoiceTriggerRTModel *rtModel; // @synthesize rtModel=_rtModel;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) CSSPGEndpointAnalyzer *endpointAnalyzer; // @synthesize endpointAnalyzer=_endpointAnalyzer;
@property(nonatomic) unsigned long long earlyDetectFiredMachTime; // @synthesize earlyDetectFiredMachTime=_earlyDetectFiredMachTime;
@property(retain, nonatomic) NSDictionary *jarvisTriggerResult; // @synthesize jarvisTriggerResult=_jarvisTriggerResult;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) unsigned long long jarvisVoiceTriggerTimeout; // @synthesize jarvisVoiceTriggerTimeout=_jarvisVoiceTriggerTimeout;
@property(nonatomic) unsigned long long numProcessedSamples; // @synthesize numProcessedSamples=_numProcessedSamples;
@property(nonatomic) BOOL hasTriggerCandidate; // @synthesize hasTriggerCandidate=_hasTriggerCandidate;
@property(nonatomic) BOOL hasReceivedNDEAPIResult; // @synthesize hasReceivedNDEAPIResult=_hasReceivedNDEAPIResult;
@property(retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI; // @synthesize keywordAnalyzerNDEAPI=_keywordAnalyzerNDEAPI;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) CSAudioStreamHolding *audioStreamHolding; // @synthesize audioStreamHolding=_audioStreamHolding;
@property(retain, nonatomic) CSAudioProvider *audioProvider; // @synthesize audioProvider=_audioProvider;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4;
- (void)_cancelAudioStreamHold;
- (void)_holdAudioStreamWithTimeout:(double)arg1;
- (void)_teardownSecondPass;
- (void)_createSecondPassIfNeeded;
- (void)_handleSecondPassResult:(unsigned long long)arg1 deviceId:(id)arg2 voiceTriggerInfo:(id)arg3 secondChanceCandidate:(BOOL)arg4 error:(id)arg5;
- (void)_reportJarvisVoiceTriggerFire;
- (void)_notifyJarvisVoiceTriggerReject;
- (void)_didDetectKeywordFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_requestStartAudioStreamWitContext:(id)arg1 startStreamOption:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleJarvisVoiceTriggerFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)spgEndpointAnalyzerDidDetectEndpoint:(id)arg1;
- (void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)keywordAnalyzerNDEAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)_didStopAudioStream;
- (void)_didStartAudioStream;
- (void)_clearTriggerCandidate;
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


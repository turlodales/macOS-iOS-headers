//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSAudioServerCrashMonitorDelegate.h"
#import "CSAudioStreamProvidingDelegate.h"
#import "CSKeywordAnalyzerNDAPIScoreDelegate.h"
#import "CSKeywordAnalyzerNDEAPIScoreDelegate.h"
#import "CSKeywordAnalyzerQuasarScoreDelegate.h"
#import "CSMediaPlayingMonitorDelegate.h"
#import "CSSelfTriggerDetectorDelegate.h"
#import "CSSpIdVTTextDependentSpeakerRecognizerDelegate.h"
#import "CSVoiceTriggerEnabledMonitorDelegate.h"
#import "CSVolumeMonitorDelegate.h"

@class CSAsset, CSAudioCircularBuffer, CSAudioStream, CSKeywordAnalyzerNDAPI, CSKeywordAnalyzerNDEAPI, CSKeywordAnalyzerQuasar, CSPlainAudioFileWriter, CSShadowMicScoreCreator, CSSpIdVTTextDependentSpeakerRecognizer, CSSpeakerDetectorNDAPI, CSSpeakerModel, CSVTSecondPassScorer, NSData, NSDate, NSDictionary, NSMutableData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface CSVoiceTriggerSecondPass : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSKeywordAnalyzerNDEAPIScoreDelegate, CSKeywordAnalyzerQuasarScoreDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSAudioStreamProvidingDelegate, CSMediaPlayingMonitorDelegate, CSVolumeMonitorDelegate, CSSpIdVTTextDependentSpeakerRecognizerDelegate, CSSelfTriggerDetectorDelegate>
{
    BOOL _hasReceivedNDEAPIResult;
    BOOL _isSecondChanceHot;
    BOOL _isSATDetectionRunning;
    BOOL _shouldUsePHS;
    BOOL _hasPendingNearMiss;
    BOOL _isRunningRecognizer;
    BOOL _recognizerResultPending;
    BOOL _didWakeAP;
    BOOL _hasTriggerCandidate;
    BOOL _isStartSampleCountMarked;
    BOOL _secondPassHasMadeDecision;
    BOOL _skipTdsrProc;
    BOOL _tdsrResultPending;
    BOOL _kwdRejectCleanupPending;
    unsigned char _hasReceivedEarlyDetectNDEAPIResult;
    float _referenceKeywordThreshold;
    float _keywordThreshold;
    float _keywordThresholdSecondChance;
    float _effectiveKeywordThreshold;
    float _keywordLoggingThreshold;
    float _keywordRejectLoggingThreshold;
    float _lastScore;
    float _recognizerScore;
    float _recognizerScoreScaleFactor;
    float _recognizerThresholdOffset;
    float _firstPassChannelSelectionDelaySeconds;
    float _firstPassMasterChannelScoreBoost;
    float _firstPassOnsetScore;
    float _twoShotFeedbackDelay;
    float _mediaVolume;
    float _shadowMicScoreThresholdForVAD;
    NSString *_UUID;
    id <CSVoiceTriggerDelegate> _delegate;
    unsigned long long _secondChanceHotTillMachTime;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    CSAudioStream *_audioStream;
    NSString *_audioProviderUUID;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzerNDAPI;
    CSKeywordAnalyzerNDEAPI *_keywordAnalyzerNDEAPI;
    CSKeywordAnalyzerQuasar *_keywordAnalyzerQuasar;
    CSSpeakerDetectorNDAPI *_speakerDetector;
    CSSpeakerModel *_speakerModel;
    CDUnknownBlockType _resultCompletion;
    CSSpIdVTTextDependentSpeakerRecognizer *_tdsrAnalyzer;
    double _tdSpeakerRecognizerCombinationWeight;
    double _tdSpeakerRecognizerSATThreshold;
    unsigned long long _secondPassTimeout;
    unsigned long long _numProcessedSamples;
    unsigned long long _numAnalyzedSamples;
    unsigned long long _extraSamplesAtStart;
    unsigned long long _analyzerPrependingSamples;
    unsigned long long _analyzerTrailingSamples;
    unsigned long long _nearMissDelayTimeout;
    unsigned long long _nearMissCandidateDetectedSamples;
    NSDictionary *_lastAnalyzerResult;
    unsigned long long _recognizerWaitSamples;
    unsigned long long _earlyDetectFiredMachTime;
    unsigned long long _activeChannel;
    NSDictionary *_lastResult;
    unsigned long long _processedSampleCountsInPending;
    unsigned long long _firstPassTriggerStartSampleCount;
    unsigned long long _firstPassTriggerFireSampleCount;
    NSDictionary *_firstPassChannelSelectionScores;
    unsigned long long _firstPassOnsetChannel;
    unsigned long long _secondPassAnalyzerStartSampleCount;
    unsigned long long _secondPassTriggerMachAbsTime;
    NSObject<OS_dispatch_queue> *_stateSerialQueue;
    double _lastAggTime;
    double _cumulativeUptime;
    double _cumulativeDowntime;
    NSData *_superVector;
    CSAudioCircularBuffer *_audioBuffer;
    unsigned long long _firstPassSource;
    NSString *_firstPassDeviceID;
    CSPlainAudioFileWriter *_audioFileWriter;
    long long _mediaPlayingState;
    NSMutableDictionary *_lastVoiceTriggerEventInfo;
    NSDate *_tdsrStartTime;
    unsigned long long _kwdRejectCleanupSecondPassResult;
    NSUUID *_kwdRejectCleanupToken;
    NSUUID *_tdsrTimeoutToken;
    CSShadowMicScoreCreator *_shadowMicScoreCreator;
    NSMutableData *_dataBufferNDEAPI;
    unsigned long long _dataBufferPositionNDEAPI;
    CSVTSecondPassScorer *_secondPassScorer;
}

+ (id)timeStampString;
+ (id)secondPassAudioLogDirectory;
+ (id)secondPassAudioLoggingFilePath;
- (void).cxx_destruct;
@property(retain, nonatomic) CSVTSecondPassScorer *secondPassScorer; // @synthesize secondPassScorer=_secondPassScorer;
@property(nonatomic) float shadowMicScoreThresholdForVAD; // @synthesize shadowMicScoreThresholdForVAD=_shadowMicScoreThresholdForVAD;
@property(nonatomic) unsigned char hasReceivedEarlyDetectNDEAPIResult; // @synthesize hasReceivedEarlyDetectNDEAPIResult=_hasReceivedEarlyDetectNDEAPIResult;
@property(nonatomic) unsigned long long dataBufferPositionNDEAPI; // @synthesize dataBufferPositionNDEAPI=_dataBufferPositionNDEAPI;
@property(retain, nonatomic) NSMutableData *dataBufferNDEAPI; // @synthesize dataBufferNDEAPI=_dataBufferNDEAPI;
@property(retain, nonatomic) CSShadowMicScoreCreator *shadowMicScoreCreator; // @synthesize shadowMicScoreCreator=_shadowMicScoreCreator;
@property(retain, nonatomic) NSUUID *tdsrTimeoutToken; // @synthesize tdsrTimeoutToken=_tdsrTimeoutToken;
@property(retain, nonatomic) NSUUID *kwdRejectCleanupToken; // @synthesize kwdRejectCleanupToken=_kwdRejectCleanupToken;
@property(nonatomic) unsigned long long kwdRejectCleanupSecondPassResult; // @synthesize kwdRejectCleanupSecondPassResult=_kwdRejectCleanupSecondPassResult;
@property(nonatomic) BOOL kwdRejectCleanupPending; // @synthesize kwdRejectCleanupPending=_kwdRejectCleanupPending;
@property(nonatomic) BOOL tdsrResultPending; // @synthesize tdsrResultPending=_tdsrResultPending;
@property(retain, nonatomic) NSDate *tdsrStartTime; // @synthesize tdsrStartTime=_tdsrStartTime;
@property(nonatomic) BOOL skipTdsrProc; // @synthesize skipTdsrProc=_skipTdsrProc;
@property(retain, nonatomic) NSMutableDictionary *lastVoiceTriggerEventInfo; // @synthesize lastVoiceTriggerEventInfo=_lastVoiceTriggerEventInfo;
@property(nonatomic) float mediaVolume; // @synthesize mediaVolume=_mediaVolume;
@property(nonatomic) long long mediaPlayingState; // @synthesize mediaPlayingState=_mediaPlayingState;
@property(nonatomic) BOOL secondPassHasMadeDecision; // @synthesize secondPassHasMadeDecision=_secondPassHasMadeDecision;
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(nonatomic) float twoShotFeedbackDelay; // @synthesize twoShotFeedbackDelay=_twoShotFeedbackDelay;
@property(retain, nonatomic) NSString *firstPassDeviceID; // @synthesize firstPassDeviceID=_firstPassDeviceID;
@property(nonatomic) unsigned long long firstPassSource; // @synthesize firstPassSource=_firstPassSource;
@property(nonatomic) __weak CSAudioCircularBuffer *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(retain, nonatomic) NSData *superVector; // @synthesize superVector=_superVector;
@property(nonatomic) double cumulativeDowntime; // @synthesize cumulativeDowntime=_cumulativeDowntime;
@property(nonatomic) double cumulativeUptime; // @synthesize cumulativeUptime=_cumulativeUptime;
@property(nonatomic) double lastAggTime; // @synthesize lastAggTime=_lastAggTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue; // @synthesize stateSerialQueue=_stateSerialQueue;
@property(nonatomic) unsigned long long secondPassTriggerMachAbsTime; // @synthesize secondPassTriggerMachAbsTime=_secondPassTriggerMachAbsTime;
@property(nonatomic) unsigned long long secondPassAnalyzerStartSampleCount; // @synthesize secondPassAnalyzerStartSampleCount=_secondPassAnalyzerStartSampleCount;
@property(nonatomic) BOOL isStartSampleCountMarked; // @synthesize isStartSampleCountMarked=_isStartSampleCountMarked;
@property(nonatomic) BOOL hasTriggerCandidate; // @synthesize hasTriggerCandidate=_hasTriggerCandidate;
@property(nonatomic) BOOL didWakeAP; // @synthesize didWakeAP=_didWakeAP;
@property(nonatomic) unsigned long long firstPassOnsetChannel; // @synthesize firstPassOnsetChannel=_firstPassOnsetChannel;
@property(nonatomic) float firstPassOnsetScore; // @synthesize firstPassOnsetScore=_firstPassOnsetScore;
@property(nonatomic) float firstPassMasterChannelScoreBoost; // @synthesize firstPassMasterChannelScoreBoost=_firstPassMasterChannelScoreBoost;
@property(nonatomic) float firstPassChannelSelectionDelaySeconds; // @synthesize firstPassChannelSelectionDelaySeconds=_firstPassChannelSelectionDelaySeconds;
@property(retain, nonatomic) NSDictionary *firstPassChannelSelectionScores; // @synthesize firstPassChannelSelectionScores=_firstPassChannelSelectionScores;
@property(nonatomic) unsigned long long firstPassTriggerFireSampleCount; // @synthesize firstPassTriggerFireSampleCount=_firstPassTriggerFireSampleCount;
@property(nonatomic) unsigned long long firstPassTriggerStartSampleCount; // @synthesize firstPassTriggerStartSampleCount=_firstPassTriggerStartSampleCount;
@property(nonatomic) unsigned long long processedSampleCountsInPending; // @synthesize processedSampleCountsInPending=_processedSampleCountsInPending;
@property(retain, nonatomic) NSDictionary *lastResult; // @synthesize lastResult=_lastResult;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) unsigned long long earlyDetectFiredMachTime; // @synthesize earlyDetectFiredMachTime=_earlyDetectFiredMachTime;
@property(nonatomic) unsigned long long recognizerWaitSamples; // @synthesize recognizerWaitSamples=_recognizerWaitSamples;
@property(nonatomic) float recognizerThresholdOffset; // @synthesize recognizerThresholdOffset=_recognizerThresholdOffset;
@property(nonatomic) float recognizerScoreScaleFactor; // @synthesize recognizerScoreScaleFactor=_recognizerScoreScaleFactor;
@property(nonatomic) BOOL recognizerResultPending; // @synthesize recognizerResultPending=_recognizerResultPending;
@property(nonatomic) BOOL isRunningRecognizer; // @synthesize isRunningRecognizer=_isRunningRecognizer;
@property(nonatomic) float recognizerScore; // @synthesize recognizerScore=_recognizerScore;
@property(retain, nonatomic) NSDictionary *lastAnalyzerResult; // @synthesize lastAnalyzerResult=_lastAnalyzerResult;
@property(nonatomic) BOOL hasPendingNearMiss; // @synthesize hasPendingNearMiss=_hasPendingNearMiss;
@property(nonatomic) unsigned long long nearMissCandidateDetectedSamples; // @synthesize nearMissCandidateDetectedSamples=_nearMissCandidateDetectedSamples;
@property(nonatomic) unsigned long long nearMissDelayTimeout; // @synthesize nearMissDelayTimeout=_nearMissDelayTimeout;
@property(nonatomic) BOOL shouldUsePHS; // @synthesize shouldUsePHS=_shouldUsePHS;
@property(nonatomic) BOOL isSATDetectionRunning; // @synthesize isSATDetectionRunning=_isSATDetectionRunning;
@property(nonatomic) unsigned long long analyzerTrailingSamples; // @synthesize analyzerTrailingSamples=_analyzerTrailingSamples;
@property(nonatomic) unsigned long long analyzerPrependingSamples; // @synthesize analyzerPrependingSamples=_analyzerPrependingSamples;
@property(nonatomic) unsigned long long extraSamplesAtStart; // @synthesize extraSamplesAtStart=_extraSamplesAtStart;
@property(nonatomic) BOOL isSecondChanceHot; // @synthesize isSecondChanceHot=_isSecondChanceHot;
@property(nonatomic) float lastScore; // @synthesize lastScore=_lastScore;
@property(nonatomic) float keywordRejectLoggingThreshold; // @synthesize keywordRejectLoggingThreshold=_keywordRejectLoggingThreshold;
@property(nonatomic) float keywordLoggingThreshold; // @synthesize keywordLoggingThreshold=_keywordLoggingThreshold;
@property(nonatomic) float effectiveKeywordThreshold; // @synthesize effectiveKeywordThreshold=_effectiveKeywordThreshold;
@property(nonatomic) float keywordThresholdSecondChance; // @synthesize keywordThresholdSecondChance=_keywordThresholdSecondChance;
@property(nonatomic) float keywordThreshold; // @synthesize keywordThreshold=_keywordThreshold;
@property(nonatomic) float referenceKeywordThreshold; // @synthesize referenceKeywordThreshold=_referenceKeywordThreshold;
@property(nonatomic) unsigned long long numAnalyzedSamples; // @synthesize numAnalyzedSamples=_numAnalyzedSamples;
@property(nonatomic) unsigned long long numProcessedSamples; // @synthesize numProcessedSamples=_numProcessedSamples;
@property(nonatomic) unsigned long long secondPassTimeout; // @synthesize secondPassTimeout=_secondPassTimeout;
@property(nonatomic) BOOL hasReceivedNDEAPIResult; // @synthesize hasReceivedNDEAPIResult=_hasReceivedNDEAPIResult;
@property(nonatomic) double tdSpeakerRecognizerSATThreshold; // @synthesize tdSpeakerRecognizerSATThreshold=_tdSpeakerRecognizerSATThreshold;
@property(nonatomic) double tdSpeakerRecognizerCombinationWeight; // @synthesize tdSpeakerRecognizerCombinationWeight=_tdSpeakerRecognizerCombinationWeight;
@property(retain, nonatomic) CSSpIdVTTextDependentSpeakerRecognizer *tdsrAnalyzer; // @synthesize tdsrAnalyzer=_tdsrAnalyzer;
@property(copy, nonatomic) CDUnknownBlockType resultCompletion; // @synthesize resultCompletion=_resultCompletion;
@property(retain, nonatomic) CSSpeakerModel *speakerModel; // @synthesize speakerModel=_speakerModel;
@property(retain, nonatomic) CSSpeakerDetectorNDAPI *speakerDetector; // @synthesize speakerDetector=_speakerDetector;
@property(retain, nonatomic) CSKeywordAnalyzerQuasar *keywordAnalyzerQuasar; // @synthesize keywordAnalyzerQuasar=_keywordAnalyzerQuasar;
@property(retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI; // @synthesize keywordAnalyzerNDEAPI=_keywordAnalyzerNDEAPI;
@property(retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzerNDAPI; // @synthesize keywordAnalyzerNDAPI=_keywordAnalyzerNDAPI;
@property(retain, nonatomic) NSString *audioProviderUUID; // @synthesize audioProviderUUID=_audioProviderUUID;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long secondChanceHotTillMachTime; // @synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime;
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (id)_mpGetVoiceTriggerEventInfoForPhrase:(id)arg1;
- (void)_mpHandleTDSRFailure;
- (void)_mpProcessTDSRScore:(float)arg1;
- (void)_mpVerifySATWithAnalyzer:(id)arg1 voiceTriggerEventInfo:(id)arg2;
- (void)_mpAnalyzeForTriggerDetection:(id)arg1 forceMaximized:(BOOL)arg2;
- (void)textDependentSpeakerRecognizer:(id)arg1 failedWithError:(id)arg2;
- (void)textDependentSpeakerRecognizer:(id)arg1 hasSatScore:(float)arg2;
- (void)_handleResultCompletion:(unsigned long long)arg1 voiceTriggerInfo:(id)arg2 error:(id)arg3;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (void)_resetStartAnalyzeTime;
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;
- (void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)handleSATOnlyScore;
- (void)handleTDSRCombinedScore;
- (void)_addToPHSRejectListIfNeeded:(id)arg1;
- (void)_getDidWakeAP:(id)arg1;
- (void)_addDeviceStatusInfoToDict:(id)arg1;
- (void)_addRejectStatsToDict:(id)arg1;
- (void)_addTdsrInfoToDict:(id)arg1 combinedScore:(float)arg2;
- (void)_addSatAnalyzerInfoToDict:(id)arg1 satScore:(float)arg2 satThreshold:(float)arg3;
- (void)_addPHSExplicitOnlyModelScoresToDict:(id)arg1;
- (void)_implicitTrainingIfNeeded:(id)arg1;
- (void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2;
- (void)_resetUpTime;
- (void)_logUptimeWithVTSwitchChanged:(BOOL)arg1 VTEnabled:(BOOL)arg2;
- (BOOL)_supportTwoShotFeedbackDelay;
- (void)_handleSecondPassSuccess:(id)arg1;
- (void)_markSecondPassTriggerMachAbsoluteTime:(unsigned long long)arg1;
- (void)keywordAnalyzerQuasar:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)keywordAnalyzerNDEAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_handleTDSRTimeout:(id)arg1;
- (void)_analyzeForKeywordDetection:(id)arg1 result:(id)arg2 forChannel:(unsigned long long)arg3 forceMaximized:(BOOL)arg4;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)_computeEffectiveThreshold;
- (BOOL)_isTDSRProcessingAllowed;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)_didStopAudioStream;
- (void)_didStartAudioStream:(BOOL)arg1;
- (void)_prepareStartAudioStream;
- (void)_cleanupKeywordRejectionWithToken:(id)arg1 result:(unsigned long long)arg2 voiceTriggerInfo:(id)arg3;
- (void)_notifySecondPassReject:(id)arg1 result:(unsigned long long)arg2;
- (void)_voiceTriggerFirstPassDidDetectKeywordFrom:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cancelCurrentRequest;
- (void)handleVoiceTriggerSecondPassFrom:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleVoiceTriggerFirstPassFromJarvis:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleVoiceTriggerFirstPassFromHearstAP:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleVoiceTriggerFirstPassFromHearst:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleVoiceTriggerFirstPassFromAP:(id)arg1 audioProviderUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestStartAudioStreamWitContext:(id)arg1 audioProviderUUID:(id)arg2 startStreamOption:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_clearTriggerCandidate;
- (void)_initializeMediaPlayingState;
- (void)_setAsset:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)_reset;
- (void)reset;
- (void)start;
- (void)dealloc;
- (id)initWithPHSEnabled:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


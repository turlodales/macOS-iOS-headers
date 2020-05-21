//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WPHeySiriProtocol.h"

@class AFMyriadEmergencyCallPunchout, AFMyriadRecord, AFPowerAssertionManager, AFWatchdogTimer, NSData, NSDate, NSDateFormatter, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSString, NSUUID, WPHeySiri, _DKKnowledgeStore;

@interface AFMyriadCoordinator : NSObject <WPHeySiriProtocol>
{
    unsigned long long _myriadState;
    unsigned long long _nextState;
    unsigned long long _previousState;
    NSData *_incomingAudioData;
    NSData *_previousAdvertisedData;
    NSMutableDictionary *_replies;
    NSMutableDictionary *_replyCounts;
    NSMutableDictionary *_repliesBeforeDecision;
    NSMutableDictionary *_previousTrumps;
    NSMutableDictionary *_incomingTrumps;
    NSMutableDictionary *_multipleContinuations;
    id _delegate;
    NSString *_deviceClassName;
    unsigned char _deviceClass;
    int _deviceAdjust;
    double _deviceDelay;
    double _deviceTrumpDelay;
    double _deviceInEarDelay;
    double _deviceInEarInterval;
    unsigned char _deviceGroup;
    NSObject<OS_dispatch_queue> *_myriadWorkQueue;
    NSObject<OS_dispatch_queue> *_myriadWaitWiProxQueue;
    NSObject<OS_dispatch_queue> *_myriadTimerManagementQueue;
    NSObject<OS_dispatch_queue> *_myriadReadinessQueue;
    NSString *_timerLabel;
    NSObject<OS_dispatch_source> *_timer;
    AFWatchdogTimer *_overallTimeout;
    NSObject<OS_dispatch_semaphore> *_wiproxReadinessSemaphore;
    AFPowerAssertionManager *_powerAssertionManager;
    struct __CFNotificationCenter *_center;
    AFMyriadRecord *_triggerRecord;
    unsigned long long _voiceTriggerTime;
    float _delayTarget;
    float _advertInterval;
    int _nTimesContinued;
    int _nTimesExtended;
    BOOL _incomingAdjustment;
    int _slowdownMsecs;
    int _testInducedSlowdownMsecs;
    AFMyriadRecord *_maxSlowdownRecord;
    BOOL _BTLEReady;
    BOOL _inTask;
    BOOL _ducking;
    BOOL _stateMachineEncounteredError;
    BOOL _supportsExtended;
    BOOL _listenTimerIsRunning;
    BOOL _coordinationEnabled;
    BOOL _clientIsDirectActivating;
    BOOL _clientIsInEarActivation;
    BOOL _clientRecentlyLostElection;
    BOOL _clientLostDueToTrumping;
    BOOL _clientIsListeningAfterRecentWin;
    BOOL _clientIsWatchActivation;
    BOOL _clientIsWatchTrumpPromote;
    BOOL _clientIsRespondingToSlowdown;
    BOOL _clientDoneRespondingToSlowdown;
    BOOL _clientRespondingToCarPlay;
    int _constantGoodness;
    NSObject<OS_dispatch_source> *_timerSource;
    NSDateFormatter *_dateFormat;
    WPHeySiri *_heySiriBTLE;
    _DKKnowledgeStore *_coreDuetStore;
    NSUUID *_designatedSelfID;
    double _lastSiriActivationTime;
    NSDate *_triggerTime;
    int _nDeltaTs;
    AFMyriadEmergencyCallPunchout *_callPunchout;
    unsigned long long _lastDecisionTime;
    BOOL _lastDecision;
    unsigned short _lastPHash;
    double _lastEmergencyAttempt;
    BOOL _wasEmergency;
    struct {
        char isBTLEScanning;
        char isBTLEAdvertising;
    } _heySiriBTLEState;
}

+ (void)clearCurrentCoordinator;
+ (void)didChangeDefaults;
+ (id)currentCoordinator;
- (void).cxx_destruct;
- (void)_signalEmergencyCallHandled;
- (unsigned short)recentEventBump;
- (void)logCoreDuetResults:(id)arg1;
- (id)activityEventStream;
- (void)heySiri:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)heySiriStoppedScanning:(id)arg1;
- (void)heySiriStartedScanning:(id)arg1;
- (void)heySiri:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)heySiriStoppedAdvertising:(id)arg1;
- (void)heySiriAdvertisingPending:(id)arg1;
- (void)heySiriStartedAdvertising:(id)arg1;
- (void)heySiri:(id)arg1 foundDevice:(id)arg2 withInfo:(id)arg3;
- (void)heySiriDidUpdateState:(id)arg1;
- (void)_leaveBLEDiagnosticMode;
- (void)_enterBLEDiagnosticMode;
- (void)_waitWiProxAndExecute:(CDUnknownBlockType)arg1;
- (void)_waitWiProx:(long long)arg1 andExecute:(CDUnknownBlockType)arg2;
- (void)_ageWedgeFilter;
- (BOOL)_testAndUpdateWedgeFilter:(id)arg1;
- (void)notifyCurrentDecisionResult;
- (void)_updateRepliesWith:(id)arg1 id:(id)arg2 data:(id)arg3;
- (BOOL)_inTaskTriggerWasTooSoon;
- (id)_sortedReplies:(id)arg1;
- (id)_sortedReplies;
- (BOOL)_isAPhone:(unsigned char)arg1;
- (BOOL)_shouldHandleEmergency;
- (BOOL)_shouldContinueFor:(id)arg1;
- (id)emptyRecord;
- (id)slowdownRecord:(unsigned short)arg1;
- (id)responseObject:(unsigned short)arg1;
- (id)emergencyHandledRecord;
- (id)emergencyRecord;
- (id)continuationRecord;
- (id)lateSuppressionRecord;
- (id)directTriggerRecord;
- (id)voiceTriggerRecord;
- (void)_advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 thenExecute:(CDUnknownBlockType)arg4;
- (void)advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (void)advertiseWith:(id)arg1;
- (void)startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (void)_advertiseIndefinite:(id)arg1;
- (void)_advertise:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 andMoveTo:(unsigned long long)arg4;
- (void)_advertise:(id)arg1 andMoveTo:(unsigned long long)arg2;
- (void)_advertiseSuppressTriggerInOutput;
- (BOOL)_okayToSuppressOnOutput;
- (void)_advertiseSlowdown;
- (void)_advertiseTrigger;
- (void)setupAdvIntervalsInDelay:(float *)arg1 interval:(float *)arg2 withSlowdown:(int)arg3;
- (void)_duringNextWindowEnterState:(unsigned long long)arg1;
- (void)_duringNextWindowExecute:(CDUnknownBlockType)arg1;
- (void)_adjustActionWindowsFromSlowdown:(int)arg1;
- (void)_resetActionWindows;
- (void)_setupActionWindows;
- (void)_handleStateMachineErrorIfNeeded;
- (void)_unduck;
- (void)_stopAdvertisingAndListening;
- (void)stopListening;
- (void)stopAdvertising;
- (void)startListening;
- (void)preheatWiProx;
- (void)resetReplies;
- (id)_stateAsString:(unsigned long long)arg1;
- (id)_stateAsString;
- (void)enterState:(unsigned long long)arg1;
- (void)_enterState:(unsigned long long)arg1;
- (void)_cancelOverallTimeout;
- (void)_setOverallTimeout;
- (void)_cancelTimer;
- (void)_startTimer:(id)arg1 for:(float)arg2 thenEnterState:(unsigned long long)arg3;
- (void)_startTimer:(id)arg1 for:(float)arg2 thenExecute:(CDUnknownBlockType)arg3;
- (void)_startListenTimer;
- (void)_CreateDispatchTimerForEvent:(id)arg1 toExecute:(CDUnknownBlockType)arg2;
- (void)_CreateDispatchTimerFor:(double)arg1 toExecute:(CDUnknownBlockType)arg2;
- (void)_initializeTimer;
- (void)setupEnabled:(BOOL)arg1;
- (void)setInTask:(BOOL)arg1;
- (BOOL)inTask;
- (void)endTask;
- (void)_loseElection;
- (void)endAdvertisingWithDeviceProhibitions:(id)arg1;
- (void)_endAdvertisingWithDeviceProhibitions:(id)arg1;
- (id)_endAdvertisingAnalyticsContext:(BOOL)arg1;
- (void)endAdvertising;
- (void)endAdvertisingAfterDelay:(float)arg1;
- (void)startAdvertisingSlowdown:(unsigned short)arg1;
- (void)startResponseAdvertising:(unsigned short)arg1;
- (void)startAdvertisingFromAlertFiringVoiceTriggerWithContext:(id)arg1;
- (void)startAdvertisingFromAlertFiringVoiceTrigger;
- (void)startAdvertisingFromInTaskVoiceTriggerWithContext:(id)arg1;
- (void)startAdvertisingFromInTaskTriggerWithContext:(id)arg1;
- (void)startAdvertisingFromInTaskVoiceTrigger;
- (void)startAdvertisingEmergency;
- (void)startAdvertisingEmergencyHandled;
- (void)startAdvertisingFromCarPlayTrigger;
- (void)startAdvertisingFromInEarTrigger;
- (void)startAdvertisingFromOutgoingTriggerWithContext:(id)arg1;
- (void)startAdvertisingFromOutgoingTrigger;
- (void)startAdvertisingFromDirectTriggerWithContext:(id)arg1;
- (void)startAdvertisingFromDirectTrigger;
- (void)startWatchAdvertisingFromDirectTriggerWithContext:(id)arg1;
- (void)startWatchAdvertisingFromDirectTrigger;
- (void)startWatchAdvertisingFromVoiceTriggerWithContext:(id)arg1;
- (void)startWatchAdvertisingFromVoiceTrigger;
- (double)_targetDelayAfterTrigger:(unsigned long long)arg1;
- (void)_startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1;
- (void)startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1 withContext:(id)arg2;
- (void)startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1;
- (void)resetStateMachine;
- (void)_startAdvertisingFromVoiceTrigger;
- (void)startAdvertisingFromVoiceTriggerWithContext:(id)arg1;
- (void)startAdvertisingFromVoiceTrigger;
- (void)_initDeviceClassAndAdjustments;
- (void)_readDefaults;
- (void)readDefaults;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


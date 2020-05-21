//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SASerializable.h"

@class NSString, SADispatchQueue, SAFrame, SATimestamp, SATurnstileInfo, SAWaitInfo;

@interface SAThreadState : NSObject <SASerializable, NSCopying>
{
    unsigned char _threadQos;
    unsigned char _threadRequestedQos;
    unsigned char _threadRequestedQosOverride;
    unsigned char _threadQosPromote;
    unsigned char _threadQosIpcOverride;
    unsigned char _threadQosSyncIpcOverride;
    unsigned char _ioTier;
    BOOL _isIOPassive;
    BOOL _isSuspended;
    BOOL _isDarwinBG;
    BOOL _isIdleWorkQueue;
    BOOL _isRunning;
    int _basePriority;
    int _scheduledPriority;
    unsigned int _schedulerFlags;
    unsigned int _state;
    SATimestamp *_startTimestamp;
    SATimestamp *_endTimestamp;
    unsigned long long _startSampleIndex;
    unsigned long long _endSampleIndex;
    SAFrame *_leafUserFrame;
    SAFrame *_leafKernelFrame;
    SAWaitInfo *_waitInfo;
    SATurnstileInfo *_turnstileInfo;
    NSString *_name;
    SADispatchQueue *_dispatchQueue;
    unsigned long long _voucherIdentifier;
    unsigned long long _userTimeInNs;
    unsigned long long _systemTimeInNs;
    unsigned long long _instructions;
    unsigned long long _cycles;
    SATimestamp *_timestampLastMadeRunnable;
}

+ (id)stateWithStackshotThreadV1:(const struct thread_snapshot *)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 leafUserFrame:(id)arg6 leafKernelFrame:(id)arg7 machTimebase:(struct mach_timebase_info)arg8;
+ (id)stateWithKCDataDeltaThreadV3:(const struct thread_delta_snapshot_v3 *)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned int)arg12;
+ (id)stateWithKCDataDeltaThreadV2:(const struct thread_delta_snapshot_v2 *)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11;
+ (id)stateWithKCDataThreadV2:(const struct thread_snapshot_v2 *)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11;
+ (id)stateWithKCDataThreadV4:(const struct thread_snapshot_v4 *)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned int)arg12 threadInstructionCycles:(const struct instrs_cycles_snapshot *)arg13;
+ (id)stateWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4;
+ (id)stateWithoutReferencesFromPAStyleSerializedThread:(const CDStruct_f92c3047 *)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_ace3f587 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property unsigned int state; // @synthesize state=_state;
@property BOOL isRunning; // @synthesize isRunning=_isRunning;
@property BOOL isIdleWorkQueue; // @synthesize isIdleWorkQueue=_isIdleWorkQueue;
@property BOOL isDarwinBG; // @synthesize isDarwinBG=_isDarwinBG;
@property BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property BOOL isIOPassive; // @synthesize isIOPassive=_isIOPassive;
@property unsigned char ioTier; // @synthesize ioTier=_ioTier;
@property unsigned char threadQosSyncIpcOverride; // @synthesize threadQosSyncIpcOverride=_threadQosSyncIpcOverride;
@property unsigned char threadQosIpcOverride; // @synthesize threadQosIpcOverride=_threadQosIpcOverride;
@property unsigned char threadQosPromote; // @synthesize threadQosPromote=_threadQosPromote;
@property unsigned char threadRequestedQosOverride; // @synthesize threadRequestedQosOverride=_threadRequestedQosOverride;
@property unsigned char threadRequestedQos; // @synthesize threadRequestedQos=_threadRequestedQos;
@property unsigned char threadQos; // @synthesize threadQos=_threadQos;
@property(retain) SATimestamp *timestampLastMadeRunnable; // @synthesize timestampLastMadeRunnable=_timestampLastMadeRunnable;
@property unsigned int schedulerFlags; // @synthesize schedulerFlags=_schedulerFlags;
@property int scheduledPriority; // @synthesize scheduledPriority=_scheduledPriority;
@property int basePriority; // @synthesize basePriority=_basePriority;
@property unsigned long long cycles; // @synthesize cycles=_cycles;
@property unsigned long long instructions; // @synthesize instructions=_instructions;
@property unsigned long long systemTimeInNs; // @synthesize systemTimeInNs=_systemTimeInNs;
@property unsigned long long userTimeInNs; // @synthesize userTimeInNs=_userTimeInNs;
@property unsigned long long voucherIdentifier; // @synthesize voucherIdentifier=_voucherIdentifier;
@property __weak SADispatchQueue *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) SATurnstileInfo *turnstileInfo; // @synthesize turnstileInfo=_turnstileInfo;
@property(retain) SAWaitInfo *waitInfo; // @synthesize waitInfo=_waitInfo;
@property(retain) SAFrame *leafKernelFrame; // @synthesize leafKernelFrame=_leafKernelFrame;
@property(retain) SAFrame *leafUserFrame; // @synthesize leafUserFrame=_leafUserFrame;
@property unsigned long long endSampleIndex; // @synthesize endSampleIndex=_endSampleIndex;
@property unsigned long long startSampleIndex; // @synthesize startSampleIndex=_startSampleIndex;
@property(retain) SATimestamp *endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(retain) SATimestamp *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
- (id)debugDescriptionWithThread:(id)arg1;
- (BOOL)hasSameStackAs:(id)arg1;
- (id)stack;
- (id)stackIgnoringKernelStackWithLeafFrame:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStackshotThreadV1:(const struct thread_snapshot *)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 leafUserFrame:(id)arg6 leafKernelFrame:(id)arg7 machTimebase:(struct mach_timebase_info)arg8;
- (id)initWithKCDataDeltaThreadV3:(const struct thread_delta_snapshot_v3 *)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned int)arg12;
- (id)initWithKCDataDeltaThreadV2:(const struct thread_delta_snapshot_v2 *)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11;
- (id)initWithKCDataThreadV2:(const struct thread_snapshot_v2 *)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11;
- (id)initWithKCDataThreadV4:(const struct thread_snapshot_v4 *)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned int)arg12 threadInstructionCycles:(const struct instrs_cycles_snapshot *)arg13;
- (id)initWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4;
- (unsigned long long)sampleCountInSampleIndexRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
@property(readonly) unsigned char microstackshotFlags;
@property(readonly) unsigned int cpuNum;
@property(readonly) unsigned int cpuSpeedMhz;
@property(readonly) BOOL isOnBattery;
@property(readonly) BOOL isUserActive;
@property(readonly) BOOL isBatteryAndUserActivityValid;
@property(readonly) BOOL isUserMode;
@property(readonly) BOOL isIORecord;
@property(readonly) BOOL isTimerArmingRecord;
@property(readonly) BOOL isInterruptRecord;
@property(readonly) BOOL isMicrostackshot;
@property(readonly) unsigned long long cpuTimeNs;
@property(readonly) BOOL hasDispatchQueue;
@property(readonly) BOOL isProcessorIdleThread;
@property(readonly) BOOL isAbortingInterruptibleWaitsAtSafePoints;
@property(readonly) BOOL isAbortingInterruptibleWaits;
@property(readonly) BOOL isHaltedAtTermination;
@property(readonly) BOOL isWaitingUninterruptibly;
@property(readonly) BOOL isRunnable;
@property(readonly) BOOL isStopped;
@property(readonly) BOOL isWaiting;
- (void)applyPAStyleSampleTimestamp:(id)arg1;
- (void)populateReferencesUsingPAStyleSerializedThread:(const CDStruct_f92c3047 *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_ace3f587 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_cb201eb0 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioServerDriver/ASDObject.h>

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface ASDClockDevice : ASDObject
{
    NSMutableArray *_controls;
    NSObject<OS_dispatch_queue> *_controlQueue;
    double _samplingRate;
    NSArray *_samplingRates;
    NSObject<OS_dispatch_queue> *_sampleRateQueue;
    long long _ioReferenceCount;
    NSObject<OS_dispatch_queue> *_ioReferenceQueue;
    NSString *_deviceName;
    unsigned int _timestampPeriod;
    unsigned int _transportType;
    unsigned int _clockDomain;
    unsigned int _clockAlgorithm;
    BOOL _clockIsStable;
    NSObject<OS_dispatch_semaphore> *_wakeSemaphore;
    BOOL _isAlive;
    BOOL _isRunning;
    unsigned int _inputLatency;
    unsigned int _outputLatency;
    CDUnknownBlockType _getZeroTimestampBlockUnretained;
    CDUnknownBlockType _beginIOOperationBlockUnretained;
    CDUnknownBlockType _endIOOperationBlockUnretained;
    BOOL _hidden;
    BOOL _canChangeDeviceName;
    NSString *_deviceUID;
    NSString *_modelUID;
    NSString *_manufacturerName;
    NSString *_modelName;
    CDUnknownBlockType _getZeroTimestampBlock;
    CDUnknownBlockType _beginIOOperationBlock;
    CDUnknownBlockType _endIOOperationBlock;
    id <ASDDeviceConfigurationChangeDelegate> _configurationChangeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ASDDeviceConfigurationChangeDelegate> configurationChangeDelegate; // @synthesize configurationChangeDelegate=_configurationChangeDelegate;
@property(copy, nonatomic) CDUnknownBlockType endIOOperationBlock; // @synthesize endIOOperationBlock=_endIOOperationBlock;
@property(copy, nonatomic) CDUnknownBlockType beginIOOperationBlock; // @synthesize beginIOOperationBlock=_beginIOOperationBlock;
@property(copy, nonatomic) CDUnknownBlockType getZeroTimestampBlock; // @synthesize getZeroTimestampBlock=_getZeroTimestampBlock;
@property(nonatomic) BOOL canChangeDeviceName; // @synthesize canChangeDeviceName=_canChangeDeviceName;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property(copy, nonatomic) NSString *modelUID; // @synthesize modelUID=_modelUID;
@property(readonly, copy, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
- (id)driverClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
- (void)dealloc;
- (void)systemHasPoweredOn;
- (void)systemWillSleep;
@property(readonly, nonatomic) CDUnknownBlockType *endIOOperationBlockUnretainedPtr;
@property(readonly, nonatomic) CDUnknownBlockType *beginIOOperationBlockUnretainedPtr;
@property(readonly, nonatomic) CDUnknownBlockType *getZeroTimestampBlockUnretainedPtr;
@property(nonatomic) unsigned int transportType; // @dynamic transportType;
@property(nonatomic) BOOL clockIsStable; // @dynamic clockIsStable;
@property(nonatomic) unsigned int clockAlgorithm; // @dynamic clockAlgorithm;
@property(nonatomic) unsigned int clockDomain; // @dynamic clockDomain;
@property(nonatomic) unsigned int outputLatency;
@property(nonatomic) unsigned int inputLatency;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *ioReferenceQueue; // @dynamic ioReferenceQueue;
@property(readonly, nonatomic, getter=isRunning) BOOL running; // @dynamic running;
- (void)updateTimestampPeriod;
- (void)_updateSafetyOffsets:(double)arg1;
- (void)_updateTimestampPeriod:(double)arg1;
@property(nonatomic) unsigned int timestampPeriod; // @dynamic timestampPeriod;
- (BOOL)changeDeviceName:(id)arg1;
@property(copy, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(copy, nonatomic) NSArray *samplingRates; // @dynamic samplingRates;
- (BOOL)changeSamplingRate:(double)arg1;
@property(nonatomic) double samplingRate; // @dynamic samplingRate;
- (int)performStopIO;
- (int)performStartIO;
- (int)stopIOForClient:(unsigned int)arg1;
- (int)startIOForClient:(unsigned int)arg1;
- (int)removeClient:(const struct AudioServerPlugInClientInfo *)arg1;
- (int)addClient:(const struct AudioServerPlugInClientInfo *)arg1;
- (void)performConfigurationChange:(void *)arg1;
- (void)requestConfigurationChange:(CDUnknownBlockType)arg1;
- (id)controls;
- (void)removeControl:(id)arg1;
- (void)addControl:(id)arg1;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress *)arg1;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(void *)arg5 forClient:(int)arg6;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (unsigned int)objectClass;
- (id)initWithDeviceUID:(id)arg1 withPlugin:(id)arg2;
- (id)initWithPlugin:(id)arg1;

@end


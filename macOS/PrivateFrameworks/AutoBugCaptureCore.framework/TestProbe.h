//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface TestProbe : NSObject
{
    BOOL _running;
    unsigned int _status;
    NSUUID *_uuid;
    NSString *_diagSessionUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_periodicTimer;
    NSMutableArray *_probeOutputFilePaths;
}

+ (void *)loadCoreUtils;
+ (id)testProbeStatusString:(unsigned int)arg1;
+ (void)autoBugCapturePath:(id *)arg1 autoBugCaptureUID:(id *)arg2 autoBugCaptureGID:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *probeOutputFilePaths; // @synthesize probeOutputFilePaths=_probeOutputFilePaths;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *periodicTimer; // @synthesize periodicTimer=_periodicTimer;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *diagSessionUUID; // @synthesize diagSessionUUID=_diagSessionUUID;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)removeProbeOutputFiles;
- (void)stopPeriodicTimer;
- (BOOL)startPeriodicTimerAt:(unsigned long long)arg1 repeatInterval:(unsigned long long)arg2;
- (BOOL)startPeriodicTimer;
- (void)periodicTimerFired:(id)arg1;
- (void)cancelTest:(CDUnknownBlockType)arg1;
- (void)stopTest;
- (BOOL)isEqual:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end


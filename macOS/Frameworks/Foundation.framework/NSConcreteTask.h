//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTask.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSConcreteTask : NSTask
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_dictionary;
    CDUnknownBlockType _terminationHandler;
    NSObject<OS_dispatch_source> *_dsrc;
    long long _suspendCount;
    int _pid;
    _Atomic unsigned long long __exitRunningInfo;
    BOOL _qos;
    _Atomic _Bool _isSpawnedProcessDisclaimed;
}

- (void)setStartsNewProcessGroup:(BOOL)arg1;
- (int)processIdentifier;
- (int)_procid;
- (void)dealloc;
- (id)init;
- (long long)suspendCount;
- (BOOL)resume;
- (BOOL)suspend;
- (void)terminateTask;
- (void)terminate;
- (void)interrupt;
- (id)taskDictionary;
- (void)setTaskDictionary:(id)arg1;
- (void)setStandardError:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (id)standardError;
- (id)standardOutput;
- (id)standardInput;
- (id)currentDirectoryPath;
- (id)preferredArchitectures;
- (id)arguments;
- (id)environment;
- (id)launchPath;
- (void)setLaunchPath:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setPreferredArchitectures:(id)arg1;
- (void)setArguments:(id)arg1;
- (void)_withTaskDictionary:(CDUnknownBlockType)arg1;
- (void)waitUntilExit;
- (BOOL)launchWithDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)launchAndReturnError:(id *)arg1;
- (void)launch;
- (BOOL)isRunning;
- (long long)terminationReason;
- (long long)_platformExitInformation;
- (int)terminationStatus;
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;
- (void)_setTerminationHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)terminationHandler;
- (BOOL)isSpawnedProcessDisclaimed;
- (void)setSpawnedProcessDisclaimed:(BOOL)arg1;
- (void)setQualityOfService:(long long)arg1;
- (long long)qualityOfService;

@end


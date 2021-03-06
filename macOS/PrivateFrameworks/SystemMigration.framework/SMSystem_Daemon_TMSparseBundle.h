//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemMigration/SMSystem_Daemon.h>

@class NSMutableSet, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_TMSparseBundle : SMSystem_Daemon
{
    BOOL encryptedBundle;
    NSMutableSet *timeMachineSystems;
    NSURL *volume;
    NSURL *sparseBundleURL;
    unsigned long long foundSystems;
    NSMutableSet *mountPoints;
    NSString *systemName;
    NSObject<OS_dispatch_queue> *timeMachineSystemsQueue;
    NSObject<OS_dispatch_queue> *mountPointsQueue;
}

+ (id)keyPathsForValuesAffectingModelIcon;
+ (id)keyPathsForValuesAffectingAvailableAction;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *mountPointsQueue; // @synthesize mountPointsQueue;
@property(retain) NSObject<OS_dispatch_queue> *timeMachineSystemsQueue; // @synthesize timeMachineSystemsQueue;
@property(retain) NSString *systemName; // @synthesize systemName;
@property BOOL encryptedBundle; // @synthesize encryptedBundle;
@property(retain) NSMutableSet *mountPoints; // @synthesize mountPoints;
@property unsigned long long foundSystems; // @synthesize foundSystems;
@property(retain) NSURL *sparseBundleURL; // @synthesize sparseBundleURL;
@property(retain) NSURL *volume; // @synthesize volume;
@property(retain) NSMutableSet *timeMachineSystems; // @synthesize timeMachineSystems;
- (BOOL)isMounted;
- (void)volumeMounted:(id)arg1;
- (void)unmount;
- (void)mountSparseBundleBackupsWithPassword:(id)arg1;
- (void)mountWithCredentials:(id)arg1;
- (void)mount;
- (id)modelIcon;
- (void)unRegisterTimeMachineSystem:(id)arg1;
- (void)registerTimeMachineSystem:(id)arg1;
- (BOOL)availableAction;
- (id)childSystems;
- (BOOL)selectableSystem;
- (unsigned long long)systemType;
- (id)volumeName;
- (id)accessibilityDescription;
- (id)description;
- (void)invalidate;
- (void)dealloc;
- (id)initWithSparseBundle:(id)arg1 onVolume:(id)arg2;

@end


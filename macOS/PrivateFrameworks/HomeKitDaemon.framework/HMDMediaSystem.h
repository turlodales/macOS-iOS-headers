//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDBackingStoreObjectProtocol.h"
#import "HMDHomeMessageReceiver.h"
#import "HMFDumpState.h"
#import "HMFLogging.h"
#import "HMFTimerDelegate.h"
#import "NSSecureCoding.h"

@class HMDAccessorySettingGroup, HMDAppleMediaAccessory, HMDApplicationData, HMDHome, HMDMediaSession, HMDMediaSystemSymptomHandler, HMFMessageDispatcher, HMFTimer, NSArray, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDMediaSystem : NSObject <NSSecureCoding, HMFDumpState, HMFLogging, HMDBackingStoreObjectProtocol, HMFTimerDelegate, HMDHomeMessageReceiver>
{
    NSString *_name;
    NSArray *_components;
    HMDApplicationData *_appData;
    HMDAccessorySettingGroup *_rootSettings;
    HMDMediaSession *_mediaSession;
    NSString *_configuredName;
    NSUUID *_uuid;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMFTimer *_auditSettingsTimer;
    HMFTimer *_fixupSettingsTimer;
    HMDMediaSystemSymptomHandler *_symptomsHandler;
}

+ (BOOL)hasMessageReceiverChildren;
+ (BOOL)supportsSecureCoding;
+ (id)sortMediaComponents:(id)arg1;
+ (void)_configureMediaSystemComponents:(id)arg1 mediaSystem:(id)arg2;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMDMediaSystemSymptomHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
@property(retain, nonatomic) HMFTimer *fixupSettingsTimer; // @synthesize fixupSettingsTimer=_fixupSettingsTimer;
@property(retain, nonatomic) HMFTimer *auditSettingsTimer; // @synthesize auditSettingsTimer=_auditSettingsTimer;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSSet *messageReceiverChildren;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)backingStoreObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)handleRemovedRootSettingsModel:(id)arg1 message:(id)arg2;
- (void)_appDataRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_notifyClientsOfUpdatedRootSettings:(id)arg1;
- (void)notifyClientsOfUpdatedRootSettings:(id)arg1;
- (void)handleAddedRootSettingsModel:(id)arg1 message:(id)arg2;
- (void)_appDataUpdated:(id)arg1 message:(id)arg2;
- (void)_transactionMediaSystemUpdated:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
@property(readonly, nonatomic) HMDAppleMediaAccessory *targetAccessory;
@property(retain, nonatomic) HMDAccessorySettingGroup *rootSettings; // @synthesize rootSettings=_rootSettings;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMDMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property(readonly, nonatomic) NSArray *accessories;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)serialize;
- (void)handleRemovedAccessory:(id)arg1;
- (void)handleHomeCloudZoneReadyNotification:(id)arg1;
- (void)_updateAppData:(id)arg1;
- (void)_handleAppData:(id)arg1;
- (void)_updateMediaSystem:(id)arg1;
- (void)_handleUpdateMediaSystem:(id)arg1;
- (void)_registerForNotifications;
- (void)_registerForMessages;
- (void)timerDidFire:(id)arg1;
- (void)auditMediaComponents;
- (void)_fixupAccessorySettingAfterTimerFire;
- (void)_fixupAccessorySetting;
- (void)fixupAccessorySetting;
- (void)_updateMediaSystemSettingsGroup;
- (void)updateMediaSystemSettingsGroup;
- (void)addModels:(id)arg1 settingsGroup:(id)arg2;
- (void)_updateSettings:(id)arg1;
- (void)_setupSettings:(id)arg1;
- (id)_mergeSetting:(id)arg1 item:(id)arg2 groupMetadata:(id)arg3;
- (void)_auditRootSettingsAfterTimerFire;
- (void)_auditRootSettingsGroup:(unsigned long long)arg1;
- (void)auditRootSettingsGroup:(unsigned long long)arg1;
- (void)unconfigureMediaSystemComponents:(id)arg1;
- (void)unconfigureMediaSystemComponents;
- (void)configureMediaSystemComponents:(id)arg1;
- (void)configureQueue:(id)arg1 messageDispatcher:(id)arg2;
- (BOOL)isValid;
- (id)container;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)dumpState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithMediaSystemModel:(id)arg1 home:(id)arg2;
- (id)init;
- (id)assistantObject;
- (id)urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


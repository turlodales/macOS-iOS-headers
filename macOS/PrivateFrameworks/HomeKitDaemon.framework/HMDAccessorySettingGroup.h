//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDBackingStoreObjectProtocol.h"
#import "HMDHomeMessageReceiver.h"
#import "HMFLogging.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HMDAccessorySettingContainer, HMDAccessorySettingGroupModel, HMFMessageDispatcher, NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDAccessorySettingGroup : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging, HMDHomeMessageReceiver, NSSecureCoding, NSCopying>
{
    NSMutableSet *_settings;
    NSMutableSet *_groups;
    HMDAccessorySettingGroup *_mediaSystemSettingGroup;
    NSUUID *_identifier;
    HMDAccessorySettingGroup *_group;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDAccessorySettingContainer *_container;
}

+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;
+ (BOOL)supportsSecureCoding;
+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDAccessorySettingContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property __weak HMDAccessorySettingGroup *group; // @synthesize group=_group;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldEncodeForCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)remoteMessageDestination:(id)arg1;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
@property(readonly) HMDAccessorySettingGroupModel *model;
@property(readonly, copy) NSArray *models;
- (id)mergeWithGroupMetadata:(id)arg1;
- (void)_relayRequestMessage:(id)arg1 targetAccessory:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleRemovedGroupModel:(id)arg1 message:(id)arg2;
- (void)_handleRemoveGroup:(id)arg1;
- (void)removeGroup:(id)arg1;
- (void)handleAddedGroupModel:(id)arg1 message:(id)arg2;
- (void)_handleAddGroup:(id)arg1;
- (void)addGroup:(id)arg1;
- (id)groupWithIdentifier:(id)arg1;
@property(readonly, copy) NSArray *groups;
- (void)handleRemovedSettingModel:(id)arg1 message:(id)arg2;
- (void)_handleRemoveSetting:(id)arg1;
- (void)removeSetting:(id)arg1;
- (void)handleAddedSettingModel:(id)arg1 message:(id)arg2;
- (void)_handleAddSetting:(id)arg1;
- (void)addSetting:(id)arg1;
- (id)settingWithIdentifier:(id)arg1;
@property(readonly, copy) NSArray *settings;
- (BOOL)isPrivateToDevice;
- (id)ownerAccessory;
- (id)accessoryFromTarget;
- (BOOL)isTargetCurrentDevice;
- (BOOL)isOwnerCurrentDevice;
@property(readonly) NSString *keyPath;
- (void)registerForMessages;
- (void)configureWithContainer:(id)arg1 messageDispatcher:(id)arg2;
@property __weak HMDAccessorySettingGroup *mediaSystemSettingGroup; // @synthesize mediaSystemSettingGroup=_mediaSystemSettingGroup;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithName:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)init;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)fullDescription;
@property(readonly, copy) NSString *description;
- (void)_fixupAccessorySetting;
- (void)fixupAccessorySetting;
- (void)updateMediaSystemSettingsGroup:(id)arg1;
- (BOOL)compareSettingsTree:(id)arg1;
- (void)intersectSettingGroup:(id)arg1 groupMetadata:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDBackingStoreModelBackedObjectProtocol.h"
#import "HMDBackingStoreObjectProtocol.h"
#import "HMFLogging.h"
#import "HMFMerging.h"
#import "NSFastEnumeration.h"
#import "NSSecureCoding.h"

@class CNContact, HMDAccountHandle, HMDAccountIdentifier, HMFUnfairLock, NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDAccount : HMFObject <HMFLogging, HMFMerging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSFastEnumeration, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    HMFUnfairLock *_lock;
    NSSet *_handles;
    NSMutableSet *_devices;
    HMDAccountIdentifier *_identifier;
    id <HMDAccountManager> _manager;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)accountWithHandle:(id)arg1;
+ (id)accountWithDestination:(id)arg1;
- (void).cxx_destruct;
@property __weak id <HMDAccountManager> manager; // @synthesize manager=_manager;
@property(readonly, copy) HMDAccountIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)modelBackedObjects;
- (id)currentDeviceModelsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly) Class modelClass;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)mergeObject:(id)arg1;
- (BOOL)shouldMergeObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)logIdentifier;
- (void)removeDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (id)deviceWithModelIdentifier:(id)arg1;
- (id)deviceForHandle:(id)arg1;
- (id)deviceForIdentifier:(id)arg1;
@property(readonly, copy) NSArray *devices;
@property(readonly, copy) NSString *destination;
- (id)accountHandleWithModelIdentifier:(id)arg1;
- (void)removeHandle:(id)arg1;
- (void)addHandle:(id)arg1;
- (void)setHandles:(id)arg1;
@property(readonly, copy) HMDAccountHandle *primaryHandle;
@property(readonly, copy) NSArray *handles;
@property(readonly, copy) CNContact *contact;
@property(readonly, copy) NSString *name;
@property(readonly) BOOL shouldCache;
@property(readonly, getter=isAuthenticated) BOOL authenticated;
- (id)attributeDescriptions;
- (id)shortDescription;
- (BOOL)isRelatedToAccount:(id)arg1;
- (BOOL)isEqualToAccount:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 devices:(id)arg3;
- (id)init;
- (id)currentDevice;
@property(readonly, getter=isCurrentAccount) BOOL currentAccount;
@property(readonly, copy) NSArray *identities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


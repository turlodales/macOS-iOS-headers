//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKSQLite.h"

@class NSObject<OS_dispatch_queue>;

@interface CKDMetadataCache : CKSQLite
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

+ (id)dbFileName;
+ (id)sharedCache;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
- (void)removeContainerID:(id)arg1;
- (void)setContainerInfo:(id)arg1 forContainerID:(id)arg2 accountID:(id)arg3;
- (id)containerInfoForContainerID:(id)arg1 accountID:(id)arg2;
- (id)inlock_containerInfoForContainerID:(id)arg1 accountID:(id)arg2;
- (void)setPublicKey:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3;
- (id)publicKeyOfType:(id)arg1 withIdentifier:(id)arg2;
- (void)setGlobalConfiguration:(id)arg1;
- (id)globalConfiguration;
- (void)removeKnownApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2;
- (id)knownContainerizedApplicationBundleIDs;
- (id)knownApplicationBundleIDs;
- (void)setApplicationMetadata:(id)arg1 forApplicationBundleID:(id)arg2 sourceApplicationBundleID:(id)arg3;
- (id)applicationMetadataForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2;
- (id)inlock_applicationMetadataForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2;
- (void)setDateOfLastTokenUpdate:(id)arg1;
- (void)inlock_setDateOfLastTokenUpdate:(id)arg1;
- (id)dateOfLastTokenUpdate;
- (void)setAppContainerIntersectionMetadata:(id)arg1 forAppContainerAccountTuple:(id)arg2;
- (id)appContainerIntersectionMetadataForAppContainerAccountTuple:(id)arg1;
- (id)knownAppContainerAccountTuples;
- (id)knownAppContainerTuplesForAccountID:(id)arg1;
- (void)setPushToken:(id)arg1 forAppContainerAccountTuple:(id)arg2;
- (id)pushTokenForAppContainerAccountTuple:(id)arg1 filterOldTokens:(BOOL)arg2;
- (void)expungeStaleAccountIDs;
- (void)expungeWithDeletedAccountID:(id)arg1 forceRemove:(BOOL)arg2;
- (id)_initWithCacheDir:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFLoggable.h"
#import "EMMutableDictionaryProtocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUbiquitousKeyValueStore;

@interface EMUbiquitouslyPersistedDictionary : NSObject <EFLoggable, EMMutableDictionaryProtocol>
{
    NSString *_plistPath;
    NSMutableDictionary *_storedObjects;
    NSString *_identifier;
    NSUbiquitousKeyValueStore *_kvStore;
    NSObject<OS_dispatch_queue> *_mutationQueue;
}

+ (id)sharedDictionaryWithIdentifier:(id)arg1;
+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mutationQueue; // @synthesize mutationQueue=_mutationQueue;
@property(readonly, nonatomic) NSUbiquitousKeyValueStore *kvStore; // @synthesize kvStore=_kvStore;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSMutableDictionary *storedObjects; // @synthesize storedObjects=_storedObjects;
@property(readonly, nonatomic) NSString *plistPath; // @synthesize plistPath=_plistPath;
- (void)_storeChangedExternally:(id)arg1;
- (void)_mergeKVStoreChangedKeys:(id)arg1;
- (void)_resetKVStore;
- (void)_purgeOldestEntries;
- (void)_synchronize;
- (void)_ensureStoredObjectsAreInKVStore;
- (void)_writeToPlist;
@property(readonly, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly) unsigned long long count;
- (id)initWithPlistPath:(id)arg1 identifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCLowDiskDelegate.h"

@class BRCAccountSession, NSObject<OS_dispatch_queue>, NSString, STMFreeSpaceRequest, br_pacer;

__attribute__((visibility("hidden")))
@interface BRCDiskSpaceReclaimer : NSObject <BRCLowDiskDelegate>
{
    BRCAccountSession *_session;
    BOOL _isClosed;
    BOOL _computingPurgable;
    br_pacer *_purgePacer;
    STMFreeSpaceRequest *_purgeRequest;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (double)onDiskAccessTimeDeltaForUrgency:(int)arg1;
+ (double)accessTimeDeltaForUrgency:(int)arg1;
+ (int)urgencyForCacheDeleteUrgency:(int)arg1;
+ (int)simpleUrgencyForCacheDeleteUrgency:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (BOOL)performOptimizeStorageWithTimeDelta:(double)arg1 onDiskAccessTimeDelta:(double)arg2 error:(id *)arg3;
- (void)requestPurgeSpace;
- (long long)cachedPurgeableSpaceForUrgency:(int)arg1;
- (void)_requestPurgeSpace;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(BOOL)arg2;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;
- (BOOL)renameAndUnlinkInBackgroundItemAtRelpath:(id)arg1;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (void)_enumerateItemsForEvictSyncWithBlock:(CDUnknownBlockType)arg1 withUrgency:(int)arg2;
- (void)_enumerateItemsForEvictSyncWithBlock:(CDUnknownBlockType)arg1 withTimeDelta:(double)arg2 onDiskAccessTimeDelta:(double)arg3;
- (void)_updateNonPurgeableCachedSizeForDocument:(id)arg1;
- (id)accessTimestampForDocument:(id)arg1;
- (BOOL)documentWasAccessedRecently:(id)arg1;
- (void)didAccessDocument:(id)arg1;
- (BOOL)overwriteDocumentAccessTime:(id)arg1 atime:(unsigned long long)arg2;
- (BOOL)documentUpdateEvictability:(id)arg1;
- (BOOL)documentWasUpdated:(id)arg1 diffs:(unsigned long long)arg2;
- (BOOL)documentWasDeleted:(id)arg1;
- (BOOL)documentWasCreated:(id)arg1;
- (void)_updateNonPurgeableCachedSizeByAddingBytes:(long long)arg1;
- (long long)periodicReclaimSpace;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (void)_asyncAutovacuumIfNeeds:(id)arg1;
- (long long)_vacuumDB:(id)arg1 amount:(long long)arg2 withUrgency:(int)arg3;
- (long long)_doIncrementalVacuum:(id)arg1 amount:(long long)arg2;
- (long long)_fullVacuumIfPossible:(id)arg1;
- (long long)_dbAutovacuumableSpaceInBytes:(id)arg1;
- (long long)_dbSizeInBytes:(id)arg1;
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(CDUnknownBlockType)arg1;
- (void)cachedPurgeableSpaceForAllUrgencies:(id *)arg1 nonPurgeableSpace:(id *)arg2 error:(id *)arg3;
- (void)close;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


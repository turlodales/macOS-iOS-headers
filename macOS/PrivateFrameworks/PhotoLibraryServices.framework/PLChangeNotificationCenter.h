//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableSet, NSNotificationCenter, NSNumber, NSObject<OS_dispatch_queue>, PLChangeList, PLContentChanges, PLManagedObjectContext;

@interface PLChangeNotificationCenter : NSObject
{
    BOOL _isProcessingRemoteDidSave;
    int _cameraPreviewChangeListenerCount;
    NSNumber *_cameraPreviewChangedToken;
    NSObject<OS_dispatch_queue> *_notificationHandlingQueue;
    NSMutableArray *_snapshots;
    PLChangeList *_changedAlbumLists;
    PLContentChanges *_albumListsContent;
    PLChangeList *_changedAlbums;
    PLContentChanges *_albumsContent;
    PLChangeList *_changedAssets;
    NSMutableSet *_assetsWithCloudCommentChanges;
    PLContentChanges *_momentsContent;
    PLChangeList *_changedMoments;
    PLContentChanges *_momentListsContent;
    PLChangeList *_changedMomentLists;
    PLChangeList *_changedCloudFeedEntries;
    PLManagedObjectContext *_moc;
    NSMutableArray *_enqueuedNotifications;
    NSDictionary *_remoteNotificationData;
    BOOL _isOverloaded;
    NSMutableSet *_overloadedObjects;
}

+ (void)forceFetchingAlbumReload;
+ (void)getInsertedAssetCount:(unsigned long long *)arg1 deletedAssetCount:(unsigned long long *)arg2 updatedAssets:(id)arg3 fromContextDidChangeNotification:(id)arg4;
+ (id)allManagedObjectKeysStrategyWithContext:(id)arg1;
+ (id)defaultCenter;
- (void).cxx_destruct;
- (void)managedObjectContext:(id)arg1 didProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3;
- (void)managedObjectContext:(id)arg1 willProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3 isCoalescedEvent:(BOOL)arg4;
- (void)managedObjectContextWasOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(BOOL)arg3;
- (void)managedObjectContextWillBeOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(BOOL)arg3;
@property(readonly, nonatomic) BOOL _shouldForceFetchingAlbumsToReload;
- (id)_takeSnapshotOfObject:(id)arg1 useCommitedValues:(BOOL)arg2;
- (id)_takeSnapshotFromCommittedValuesOfObject:(id)arg1;
- (id)_takeSnapshotOfObject:(id)arg1;
- (void)_takeSnapshotsFromContext:(id)arg1 forRemoteContextSaveNotification:(id)arg2 usingObjectIDs:(BOOL)arg3;
- (id)_snapshotForObject:(id)arg1;
- (id)descriptionOfSplitChanges;
- (id)_keysOfInterestForObject:(id)arg1;
- (BOOL)_isInterestedInUpdatesOfObject:(id)arg1;
- (void)_postEnqueuedNotifications;
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfoWithObjects:(const id *)arg3 forKeys:(const id *)arg4 count:(unsigned long long)arg5;
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_enqueueAssetContainerListChangeNotification:(id)arg1;
- (void)_enqueueAlbumChangeNotification:(id)arg1;
- (void)_enqueueInvitationRecordsChangeNotification:(id)arg1;
- (void)_enqueueAssetContainerChangeNotification:(id)arg1;
- (void)_evaluateUpdatedAssets;
- (void)_evaluateContainersWithUpdatedContent;
- (void)_splitContextDidChangeNotification:(id)arg1;
- (void)_cleanupState;
- (void)_enqueueAssetChangeNotification;
- (void)_enqueueMomentListChangeNotifications;
- (void)_enqueueMomentChangeNotifications;
- (void)_enqueueCloudFeedEntriesChangeNotifications;
- (void)_enqueueCloudCommentsNotifications;
- (void)_enqueueAlbumNotifications;
- (void)_enqueueAlbumListNotifications;
- (void)_enqueuePhotoLibraryNotifications;
- (void)_sendNotificationsForSplitChanges;
- (void)postShouldReloadNotificationWithPhotoLibrary:(id)arg1;
- (void)enumerateIndexMappingCachesForObject:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_toOneRelationshipsOfInterestForObject:(id)arg1;
- (id)_attributesOfInterestForObject:(id)arg1;
- (id)_orderedRelationshipsOfInterestForObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)processContextDidSaveObjectIDsNotification:(id)arg1;
- (void)processContextDidChangeNotification:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)removeShouldReloadObserver:(id)arg1;
- (void)addShouldReloadObserver:(id)arg1;
- (void)removeAssetChangeObserver:(id)arg1;
- (void)addAssetChangeObserver:(id)arg1;
- (void)removeCloudFeedEntriesObserver:(id)arg1;
- (void)addCloudFeedEntriesObserver:(id)arg1;
- (void)removeInvitationRecordsObserver:(id)arg1;
- (void)addInvitationRecordsObserver:(id)arg1;
- (void)removeCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2;
- (void)addCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2;
- (void)removeAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2;
- (void)addAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2;
- (void)removeAssetContainerChangeObserver:(id)arg1 container:(id)arg2;
- (void)addAssetContainerChangeObserver:(id)arg1 container:(id)arg2;
@property(readonly, retain, nonatomic) NSNotificationCenter *backingCenter;
- (void)enqueueNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end


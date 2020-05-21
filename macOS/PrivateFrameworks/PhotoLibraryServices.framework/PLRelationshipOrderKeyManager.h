//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSURL, PLPhotoLibrary;

@interface PLRelationshipOrderKeyManager : NSObject
{
    PLPhotoLibrary *_locationsPhotoLibrary;
    NSMutableDictionary *_locationsCache;
    NSMutableDictionary *_enqueuedFolderAlbumsOrderValueUpdates;
    NSMutableDictionary *_enqueuedAlbumAssetsOrderValueUpdates;
    NSObject<OS_dispatch_queue> *_locationsCacheQueue;
    BOOL _hasStashedLocationValues;
    BOOL _conflictDetected;
    NSURL *_libraryURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL conflictDetected; // @synthesize conflictDetected=_conflictDetected;
@property(readonly, nonatomic) BOOL hasStashedLocationValues; // @synthesize hasStashedLocationValues=_hasStashedLocationValues;
- (id)parentFolderOrderValueForAlbum:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)albumsAndOrderValuesForAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)writeStashedLocationValuesInLibrary:(id)arg1 error:(id *)arg2;
- (void)_getAndResetEnqueuedOrderValueUpdatesForFolders:(id *)arg1 albums:(id *)arg2 conflictDetected:(char *)arg3;
- (void)setConflictDetected:(BOOL)arg1;
- (void)stashAlbumAssetsLocationValue:(long long)arg1 forAssetWithID:(id)arg2 inAlbumWithID:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)stashFolderAlbumsLocationValue:(long long)arg1 forAlbumWithID:(id)arg2 inFolderWithID:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)_inq_stashLocationValue:(long long)arg1 forOrderedObjectWithID:(id)arg2 inSourceObjectID:(id)arg3 relationship:(id)arg4 atIndex:(unsigned long long)arg5 usingStashDictionary:(id)arg6;
- (id)objectIDsAndOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2;
- (unsigned long long)findIndexForAssetWithID:(id)arg1 newOrderValue:(long long)arg2 inAlbumWithID:(id)arg3 hasOrderValueConflictWithAssetID:(id *)arg4;
- (unsigned long long)findIndexForAlbumWithID:(id)arg1 newOrderValue:(long long)arg2 inFolderWithID:(id)arg3 hasOrderValueConflictWithAlbumID:(id *)arg4;
- (void)getConflictResolutionOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2 atIndex:(unsigned long long)arg3 intoLower:(long long *)arg4 higher:(long long *)arg5;
- (id)_inq_orderingStateForRelationship:(id)arg1 onObjectWithID:(id)arg2;
- (id)locationsManagedObjectContext;
- (void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:(id)arg1 inLibrary:(id)arg2;
- (void)_updateOrderOfChildrenInParent:(id)arg1 usingTransientOrders:(id)arg2;
- (long long)compareOrderKeyObject:(id)arg1 withObject:(id)arg2;
- (id)_enqueuedAlbumAssetsOrderValueUpdates;
- (id)_enqueuedFolderAlbumsOrderValueUpdates;
- (id)_locationsCache;
- (id)locationsPhotoLibrary;
- (id)initWithLibraryURL:(id)arg1;
- (void)updateKeyAssetsForAlbums:(id)arg1 inLibrary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)migration_updateLegacyChildCollectionOrderKeysInFolder:(id)arg1;
- (void)migration_updateLegacyOrderValuesForAssetsInAlbums:(id)arg1 managedObjectContext:(id)arg2;
- (void)_migration_updateOrderValuesForAssetsInAlbum:(id)arg1 managedObjectContext:(id)arg2;
- (void)_migration_updateOrderKeysForAssetsInParentAlbum:(id)arg1 childToOrderKeyMap:(id)arg2;
- (id)migration_sortedOrderKeysForAssetsInAlbum:(id)arg1 usingMap:(id)arg2;
- (void)migration_fixupOrderKeys:(id)arg1 usingOrderValuePropertyKey:(id)arg2 enforceSingletonAlbumReservedKeySpace:(BOOL)arg3;
- (void)migration_ensureValidOrderKey:(id)arg1 usingOrderValuePropertyKey:(id)arg2;

@end


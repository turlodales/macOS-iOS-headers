//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLPersistentContainerStoreAccess.h"

@class NSPersistentStoreCoordinator, NSURL, PLLazyObject;

@interface PLPersistentContainer : NSObject <PLPersistentContainerStoreAccess>
{
    PLLazyObject *_lazyAssetdClient;
    struct os_unfair_lock_s _sharedPersistentStoreCoordinatorLock;
    NSPersistentStoreCoordinator *_sharedPersistentStoreCoordinator;
    BOOL _sharedPersistentStoreCoordinatorRemoved;
    NSURL *_libraryURL;
    id <PLXPCPhotoLibraryStorePolicy> _xpcStorePolicy;
}

+ (void)_getPersistentStoreURL:(id *)arg1 options:(id *)arg2 forDatabasePath:(id)arg3 enableOrderKeyNotifications:(BOOL)arg4;
+ (void)getPersistentStoreURL:(id *)arg1 options:(id *)arg2 forDatabasePath:(id)arg3;
+ (BOOL)hasConfiguredPhotoLibrary;
+ (long long)_migrateOrRebuildDatabaseWithSharedPersistentStoreCoordinator:(id)arg1 modelMigrator:(id)arg2 migrationPolicy:(unsigned int)arg3 error:(id *)arg4;
+ (long long)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 modelMigrator:(id)arg4 migrationPolicy:(unsigned int)arg5 error:(id *)arg6;
+ (void)removePhotosDatabaseWithPathManager:(id)arg1;
+ (BOOL)_destroyPhotosDatabaseWithPath:(id)arg1 backupToPath:(id)arg2;
+ (void)getConfigurationForDatabasePath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
- (void).cxx_destruct;
@property(retain) id <PLXPCPhotoLibraryStorePolicy> xpcStorePolicy; // @synthesize xpcStorePolicy=_xpcStorePolicy;
@property(readonly) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
- (BOOL)_configurePersistentStoreCoordinator:(id)arg1 overrideCurrentModelVersionInStore:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_configureXPCPersistentStoreCoordinator:(id)arg1 error:(id *)arg2;
- (BOOL)shouldUseXPCPhotoLibraryStore;
- (long long)configureSharedPersistentStoreCoordinatorAndMigrateOrRebuildIfNecessaryWithModelMigrator:(id)arg1 migrationPolicy:(unsigned int)arg2 error:(id *)arg3;
- (void)removeSharedPersistentStoreCoordinator;
- (id)newSharedPersistentStoreCoordinator;
@property(readonly) NSPersistentStoreCoordinator *sharedPersistentStoreCoordinator;
- (id)newPersistentStoreCoordinatorForMigration:(id *)arg1;
- (void)dealloc;
- (id)initWithLibraryURL:(id)arg1 lazyAssetsdClient:(id)arg2;

@end


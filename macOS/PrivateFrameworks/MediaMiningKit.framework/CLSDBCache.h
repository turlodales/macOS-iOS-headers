//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL;

@interface CLSDBCache : NSObject
{
    BOOL _supportsVersioning;
    NSURL *_diskCacheURL;
    NSString *_dataModelName;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

+ (BOOL)locationIsValidForDatabaseAtURL:(id)arg1;
+ (id)urlForGraphApplicationData;
+ (id)diskCacheWithName:(id)arg1;
+ (id)defaultCache;
+ (id)defaultCacheName;
+ (id)currentApplicationDataUrlQueue;
+ (id)applicationDataUrlQueueWithURL:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL supportsVersioning; // @synthesize supportsVersioning=_supportsVersioning;
@property(readonly, copy, nonatomic) NSURL *diskCacheURL; // @synthesize diskCacheURL=_diskCacheURL;
@property(readonly, copy, nonatomic) NSString *dataModelName; // @synthesize dataModelName=_dataModelName;
- (void)invalidateMemoryCaches;
- (void)invalidateDiskCaches;
- (void)_resetCoreDataStack;
- (void)_saveAsync;
- (BOOL)save;
- (BOOL)_save;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (id)formatVersion;
- (id)initAtURL:(id)arg1;
- (id)initWithDiskCacheName:(id)arg1;
- (id)initWithDiskCacheName:(id)arg1 dataModelName:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementCoreDataStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queueMOC;
    NSObject<OS_dispatch_queue> *_queuePSC;
    NSString *_directoryPath;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

+ (id)localCloudEntryFromMocObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (id)getSyncStateEntry;
- (BOOL)didMakeInitialPull;
- (id)getCKFetchToken;
- (void)saveCKFetchToken:(id)arg1;
- (id)queryManagedObjectsWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (id)queryEntriesWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)countEntriesWithPredicate:(id)arg1;
- (id)textReplacementEntriesWithLimit:(unsigned long long)arg1;
- (BOOL)deleteTextReplacementsWithPredicate:(id)arg1;
- (BOOL)deleteTextReplacementsFromLocalStoreWithNames:(id)arg1 excludeSavesToCloud:(BOOL)arg2;
- (BOOL)markDeletesForTextReplacementEntries:(id)arg1;
- (id)fetchTextReplacementWithUniqueName:(id)arg1 context:(id)arg2;
- (id)fetchTextReplacementEntry:(id)arg1 context:(id)arg2;
- (void)fetchAndMergeTextReplacementEntry:(id)arg1 context:(id)arg2;
- (BOOL)recordTextReplacementEntries:(id)arg1;
- (id)persistentStore;
- (void)dealloc;
- (void)cleanup;
- (id)initWithDirectoryPath:(id)arg1;
- (id)init;

@end


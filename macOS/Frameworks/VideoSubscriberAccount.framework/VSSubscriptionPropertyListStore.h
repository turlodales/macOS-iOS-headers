//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSAtomicStore.h>

__attribute__((visibility("hidden")))
@interface VSSubscriptionPropertyListStore : NSAtomicStore
{
}

+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
- (id)type;
- (id)newReferenceObjectForManagedObject:(id)arg1;
- (void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2;
- (id)newCacheNodeForManagedObject:(id)arg1;
- (BOOL)save:(id *)arg1;
- (BOOL)load:(id *)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;

@end


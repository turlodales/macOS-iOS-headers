//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/_NSScalarObjectID.h>

__attribute__((visibility("hidden")))
@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID
{
}

+ (void)_storeDeallocated;
+ (void)_setStoreInfo1:(id)arg1;
+ (id)_storeInfo1;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (unsigned int)allocateBatch:(id *)arg1 count:(unsigned int)arg2;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (void)initialize;
- (id)_storeInfo1;
- (id)_retainedURIString;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (long long)_referenceData64;
- (BOOL)isTemporaryID;
- (id)persistentStore;
- (id)entityName;
- (id)entity;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)initWithObject:(id)arg1;
- (id)initWithPK64:(long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSFetchRequestResult-Protocol.h>

@class NSEntityDescription, NSPersistentStore, NSString;

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>
{
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (long long)version;
+ (void)initialize;
+ (id)unarchivedScalarObjectIDsFromData:(id)arg1 withCoordinator:(id)arg2;
+ (id)_newArchiveForScalarObjectIDs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)URIRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isTemporaryID) BOOL temporaryID;
@property(readonly) __weak NSPersistentStore *persistentStore;
@property(readonly) NSEntityDescription *entity;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)_retainedURIString;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeInfo1;
- (id)entityName;
- (id)_storeIdentifier;
- (long long)_referenceData64;
- (id)_referenceData;
- (BOOL)_preferReferenceData64;
- (long long)compare:(id)arg1;
- (long long)_compareArbitraryValue:(id)arg1 toValue:(id)arg2;
- (int)_temporaryIDCounter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


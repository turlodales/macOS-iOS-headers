//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHFetchResult.h>

@class NSArray, NSOrderedSet, NSString, PHFetchOptions;

@interface PHUnauthorizedFetchResult : PHFetchResult
{
    CDUnknownBlockType _fetchBlock;
    PHFetchOptions *_options;
    NSArray *_objects;
    NSOrderedSet *_objectIDs;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSOrderedSet *objectIDs; // @synthesize objectIDs=_objectIDs;
@property(readonly) NSArray *objects; // @synthesize objects=_objects;
@property(readonly, copy) PHFetchOptions *options; // @synthesize options=_options;
@property(readonly, copy) CDUnknownBlockType fetchBlock; // @synthesize fetchBlock=_fetchBlock;
- (id)description;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (unsigned long long)possibleChangesForChange:(id)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)fetchedObjectIDs;
- (id)containerIdentifier;
- (long long)collectionFetchType;
- (id)fetchedObjects;
- (id)fetchRequest;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (id)photoLibrary;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (id)changeHandlingKey;
- (BOOL)isFullyBackedByObjectIDs;
- (id)copyWithOptions:(id)arg1;
- (void)getMediaTypeCounts;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithOptions:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;

@end


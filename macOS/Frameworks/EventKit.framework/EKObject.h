//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKProtocolMutableObject.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class EKBatchChangeInfo, EKChangeSet, EKEventStore, EKFrozenObject, NSDictionary, NSManagedObjectID, NSMutableDictionary, NSString;

@interface EKObject : NSObject <EKProtocolMutableObject, NSCopying, NSCoding, NSMutableCopying>
{
    NSManagedObjectID *managedObjectID;
    EKEventStore *eventStore;
    NSMutableDictionary *_cachedMeltedObjects;
    unsigned long long *_cachedHash;
    NSDictionary *_additionalFrozenProperties;
    NSString *_eventStoreIdentifier;
    EKFrozenObject *_backingObject;
    EKChangeSet *_changeSet;
    EKBatchChangeInfo *_batchChangeInfo;
}

+ (BOOL)_objects:(id)arg1 haveSameMeltedClass:(Class)arg2 frozenClass:(Class)arg3;
+ (void)_insertPreFrozenRelationshipObject:(id)arg1 withKey:(id)arg2 intoDictionary:(id)arg3;
+ (id)_createNonPartialObjectFromObject:(id)arg1 ifPropertyIsUnavailable:(id)arg2;
+ (BOOL)_compareRelationshipObject1:(id)arg1 againstRelationshipObject2:(id)arg2 propertiesToIgnore:(id)arg3;
+ (BOOL)_compareIdentityKeysForObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3;
+ (BOOL)_compareSingleValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareSingleValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareNonRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5;
+ (BOOL)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareMutliValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareMultiValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5;
+ (BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(BOOL)arg4 compareImmutableKeys:(BOOL)arg5 propertiesToIgnore:(id)arg6;
+ (BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3;
+ (BOOL)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(BOOL)arg4;
+ (BOOL)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3;
+ (id)propertiesUnavailableForPartialObjects;
+ (id)batchChangeNotificationName;
+ (BOOL)isMeltedAndNotWeakRelationshipObject:(id)arg1;
+ (BOOL)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 compareImmutableKeys:(BOOL)arg4 ignoringProperties:(id)arg5;
+ (BOOL)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 compareImmutableKeys:(BOOL)arg4;
+ (BOOL)_object:(id)arg1 equalsObject:(id)arg2 compareImmutableKeys:(BOOL)arg3 ignoringProperties:(id)arg4;
+ (BOOL)_object:(id)arg1 equalsObject:(id)arg2 compareImmutableKeys:(BOOL)arg3;
+ (BOOL)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3;
+ (BOOL)_object:(id)arg1 equalsObject:(id)arg2;
+ (id)uniqueIdentifierForObject:(id)arg1;
+ (unsigned long long)hashForObject:(id)arg1;
+ (BOOL)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5;
+ (BOOL)isDerivedRelationship;
+ (BOOL)isWeakRelationship;
+ (id)multiValueDiffKeys;
+ (id)singleValueDiffKeys;
+ (id)keysToCheckForChangedKeysMethod;
+ (id)knownImmutableKeys;
+ (id)knownDerivedRelationshipKeys;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownDerivedAndSingleValueRelationshipKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownSingleValueKeys;
+ (id)knownSummaryKeys;
+ (id)knownIdentityKeys;
+ (Class)frozenClass;
+ (Class)meltedClass;
+ (id)objectWithObject:(id)arg1 preFrozenRelationshipObjects:(id)arg2;
+ (id)objectWithObject:(id)arg1;
+ (id)actionStringsPluralDisplayName;
+ (id)actionStringsDisplayName;
@property(retain, nonatomic) EKBatchChangeInfo *batchChangeInfo; // @synthesize batchChangeInfo=_batchChangeInfo;
@property(retain, nonatomic) EKChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property(retain, nonatomic) EKFrozenObject *backingObject; // @synthesize backingObject=_backingObject;
@property(retain, nonatomic) NSString *eventStoreIdentifier; // @synthesize eventStoreIdentifier=_eventStoreIdentifier;
@property(retain, nonatomic) NSDictionary *additionalFrozenProperties; // @synthesize additionalFrozenProperties=_additionalFrozenProperties;
@property(nonatomic) unsigned long long *cachedHash; // @synthesize cachedHash=_cachedHash;
@property(retain, nonatomic) NSMutableDictionary *cachedMeltedObjects; // @synthesize cachedMeltedObjects=_cachedMeltedObjects;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore;
- (void)setManagedObjectID:(id)arg1;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
- (void).cxx_destruct;
- (BOOL)isPropertyUnavailable:(id)arg1;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
- (id)summary;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1 comparingKeys:(id)arg2 compareImmutableKeys:(BOOL)arg3 ignoringProperties:(id)arg4;
- (BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2;
- (BOOL)isEqual:(id)arg1 comparingKeys:(id)arg2;
- (BOOL)isCompletelyEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (BOOL)_validateNotDeleted:(id *)arg1;
- (BOOL)validate:(id *)arg1;
- (BOOL)_isPropertyUnavailable:(id)arg1 convertToFullObjectIfUnavailable:(BOOL)arg2;
- (void)_convertToNonPartialObject;
- (id)inverseObjectWithObject:(id)arg1;
- (id)summaryDiffWithObject:(id)arg1;
- (id)diffWithObject:(id)arg1;
- (void)changeIdentifiersFromOriginal:(id)arg1;
- (id)_keysToChangeForDuplicateWithOptions:(long long)arg1;
- (id)_duplicateWithChangedKeys:(id)arg1;
- (id)duplicateWithOptions:(long long)arg1;
- (id)duplicate;
- (void)emptyMeltedCache;
- (id)_cachedMeltedObjectsForMultiValueKey:(id)arg1;
- (void)_resetMeltedCache;
- (void)updatedMeltedCacheForChangeSet:(id)arg1;
- (unsigned long long)meltedAndCachedMultiRelationCountForKey:(id)arg1;
- (void)updateMeltedAndCachedMultiRelationObjects:(id)arg1 forKey:(id)arg2;
- (id)meltedAndCachedMultiRelationObjectsForKey:(id)arg1;
- (void)updateMeltedAndCachedSingleRelationObject:(id)arg1 forKey:(id)arg2 frozenClass:(Class)arg3;
- (id)meltedAndCachedSingleRelationObjectForKey:(id)arg1;
- (id)frozenOrMeltedCachedSingleRelationObjectForKey:(id)arg1;
- (id)cachedMeltedObjectForSingleValueKey:(id)arg1;
- (void)setCachedMeltedObject:(id)arg1 forSingleValueKey:(id)arg2;
- (id)_cachedMeltedObjectsForMultiValueKey:(id)arg1 copy:(BOOL)arg2;
- (id)cachedMeltedObjectsForMultiValueKey:(id)arg1;
- (void)setCachedMeltedObjects:(id)arg1 forMultiValueKey:(id)arg2;
- (void)removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;
- (void)addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;
- (void)_applyDefinedAfterFirstSaveFrom:(id)arg1;
- (void)_resetWithFrozenObject:(id)arg1;
- (id)coreDataEntityName;
- (BOOL)revert;
- (void)refetch;
- (BOOL)refresh;
- (BOOL)_refreshable;
- (BOOL)_reset;
- (void)reset;
- (void)rollback;
- (id)changedKeys;
- (void)replaceMultiChangedObjectValuesWithObjectValues:(id)arg1 forKey:(id)arg2;
- (void)removeMultiChangedObjectValues:(id)arg1 forKey:(id)arg2;
- (void)removeMultiChangedObjectValue:(id)arg1 forKey:(id)arg2;
- (void)addMultiChangedObjectValues:(id)arg1 forKey:(id)arg2;
- (void)addMultiChangedObjectValue:(id)arg1 forKey:(id)arg2;
- (id)multiChangedObjectValuesForKey:(id)arg1;
- (void)setSingleChangedValue:(id)arg1 forKey:(id)arg2;
- (id)singleChangedValueForKey:(id)arg1;
- (void)applyChanges:(id)arg1;
- (void)addChanges:(id)arg1;
- (void)_addChangesFromObject:(id)arg1 except:(id)arg2 keep:(id)arg3;
- (void)addChangesFromObject:(id)arg1 keep:(id)arg2;
- (void)addChangesFromObject:(id)arg1 except:(id)arg2;
- (void)addChangesFromObject:(id)arg1;
- (id)changedKeysAgainstObject:(id)arg1;
- (id)_previousValueForKey:(id)arg1;
- (id)previouslySavedObject;
- (BOOL)_areOnlyChangedKeys:(id)arg1;
- (BOOL)_isOnlyChangedKey:(id)arg1;
- (BOOL)_hasChangesForKey:(id)arg1 checkUnsaved:(BOOL)arg2;
- (BOOL)_hasChangesForKey:(id)arg1;
- (id)_multiRelationshipKeysToCheckForChanges;
- (id)_singleRelationshipKeysToCheckForChanges;
- (BOOL)_hasChangeHelperInKeys:(id)arg1 ignoreKeys:(id)arg2 checkUnsaved:(BOOL)arg3;
- (BOOL)_hasUnsavedChangesInKeys:(id)arg1 ignoreKeys:(id)arg2;
- (BOOL)hasUnsavedChangesIgnoreKeys:(id)arg1;
- (BOOL)hasUnsavedChangesInKeys:(id)arg1;
- (BOOL)hasUnsavedChanges;
@property(readonly, nonatomic) BOOL hasChanges;
- (BOOL)isSaved;
- (BOOL)isUndeleted;
- (BOOL)isDeleted;
@property(readonly, nonatomic, getter=isNew) BOOL new;
- (void)markAsCommitted;
- (void)markAsSaved;
- (void)markAsUndeleted;
- (void)markAsDeleted;
- (void)markAsNew;
- (void)_initChangeSetIfNone;
- (id)_existingObjectForDecodedIdentifier:(id)arg1;
- (BOOL)_useExistingObjectWhenDecoding;
- (BOOL)_shouldEncodeValue:(id)arg1 forKey:(id)arg2;
- (void)_encodeValueForKey:(id)arg1 withCoder:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)_decodeValueForKey:(id)arg1 withCoder:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)frozenObject;
- (BOOL)isFrozen;
- (id)meltedObjectInStore:(id)arg1;
- (id)existingMeltedObject;
- (void)_clearCachedHash;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3 preFrozenRelationshipObjects:(id)arg4;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3;
- (id)initWithObject:(id)arg1 keepBackingObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;
- (id)initWithObject:(id)arg1 keepBackingObject:(BOOL)arg2 additionalFrozenProperties:(id)arg3;
- (id)initWithObject:(id)arg1 keepBackingObject:(BOOL)arg2;
- (id)initWithObject:(id)arg1;
- (void)_applyKnownImmutableValuesFrom:(id)arg1;
- (void)_ensureUniqueIdentifier;
@property(readonly, nonatomic) NSString *specificIdentifier;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5;
- (id)init;
- (id)actionStringsDisplayTitle;
- (BOOL)removeWithSpan:(long long)arg1 error:(id *)arg2;
- (void)removeWithSpan:(long long)arg1;
- (BOOL)saveWithSpan:(long long)arg1 error:(id *)arg2;
- (void)saveWithSpan:(long long)arg1;
- (void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 indentFirstLine:(BOOL)arg3;
- (id)_summaryWithDepth:(long long)arg1;
- (id)_basicSummaryWithDepth:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKFrozenObject.h>

@class EKChangeSet, EKReminderStore, NSArray;

@interface EKFrozenReminderObject : EKFrozenObject
{
    EKChangeSet *_changeSet;
    EKReminderStore *_reminderStore;
    id _remObject;
    NSArray *_path;
}

+ (id)propertiesUnavailableForPartialObjects;
+ (id)frozenObjectForObject:(id)arg1;
+ (Class)meltedClass;
+ (Class)frozenClass;
+ (BOOL)canCommitSelf;
+ (id)uniqueIdentifierForREMObject:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *path; // @synthesize path=_path;
- (id)preFrozenRelationshipObjects;
- (BOOL)canBeConvertedToFullObject;
- (BOOL)isNew;
- (BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2;
- (BOOL)isCompletelyEqual:(id)arg1;
- (BOOL)isPropertyUnavailable:(id)arg1;
- (id)frozenObject;
- (id)existingMeltedObject;
- (id)changeSet;
- (id)semanticIdentifier;
- (id)uniqueIdentifier;
- (BOOL)isPartialObject;
- (BOOL)isFrozen;
- (id)initWithObject:(id)arg1;
- (id)updateParentToCommitSelf:(id)arg1;
- (BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) EKChangeSet *uncommittedChanges;
- (id)valueForSingleValueKey:(id)arg1 backingValue:(CDUnknownBlockType)arg2;
- (id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2;
- (id)updatedFrozenObjectWithChanges:(id)arg1;
- (id)remObjectID;
- (id)REMObject;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2;

@end


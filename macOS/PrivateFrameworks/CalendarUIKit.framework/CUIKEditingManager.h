//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKChangeListener, EKEventStore, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface CUIKEditingManager : NSObject
{
    EKEventStore *_eventStore;
    NSMutableSet *_editingContextGroups;
    EKChangeListener *_changeListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_changeHistory;
    NSMutableDictionary *_changedObjectMap;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *changedObjectMap; // @synthesize changedObjectMap=_changedObjectMap;
@property(retain) NSMutableDictionary *changeHistory; // @synthesize changeHistory=_changeHistory;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) EKChangeListener *changeListener; // @synthesize changeListener=_changeListener;
@property(retain) NSMutableSet *editingContextGroups; // @synthesize editingContextGroups=_editingContextGroups;
@property __weak EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (id)_allOpenEditingContexts;
- (BOOL)_commitChangesForContext:(id)arg1 forceCommit:(BOOL)arg2 shouldClose:(char *)arg3;
- (BOOL)commitChangesFromEditingContextWithoutClosing:(id)arg1;
- (BOOL)_closeEditingContext:(id)arg1 forceCommit:(BOOL)arg2 forceDontCommit:(BOOL)arg3 shouldClose:(char *)arg4;
- (BOOL)closeEditingContextWithoutCommittingChanges:(id)arg1;
- (BOOL)closeEditingContextAndCommitChanges:(id)arg1;
- (BOOL)closeEditingContext:(id)arg1 shouldClose:(char *)arg2;
- (BOOL)closeEditingContext:(id)arg1;
- (id)remindersWithExternalIdentifier:(id)arg1;
- (id)remindersWithIdentifiers:(id)arg1;
- (id)reminderWithIdentifier:(id)arg1;
- (void)fetchRemindersMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remindersMatchingPredicate:(id)arg1;
- (id)allReminders;
- (id)eventsWithExternalIdentifier:(id)arg1;
- (id)eventsWithIdentifiers:(id)arg1;
- (id)eventWithIdentifier:(id)arg1;
- (void)fetchEventsMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)eventsMatchingPredicate:(id)arg1;
- (id)allEvents;
- (BOOL)_changesExistForObject:(id)arg1;
- (id)_liveEditedObjectsMatchingPredicate:(id)arg1 notInSet:(id)arg2;
- (id)_objectsWithLiveEdits:(id)arg1 matchingPredicate:(id)arg2;
- (id)changedObjectsCopy;
- (void)clearAllLiveChanges;
- (void)clearLiveChangesForObjects:(id)arg1;
- (void)applyLiveChangesToObjects:(id)arg1;
- (void)applyLiveChangesToObject:(id)arg1;
- (void)partialSaveObject:(id)arg1;
- (void)_addContextToNewOrExistingGroup:(id)arg1;
- (id)_openEditingContextWithObjects:(id)arg1 interfaceType:(unsigned long long)arg2 observer:(id)arg3;
- (BOOL)_objectsSupportEditingContexts:(id)arg1;
- (id)openEditingContextWithObjects:(id)arg1 interfaceType:(unsigned long long)arg2 observer:(id)arg3;
- (id)openEditingContextWithObjects:(id)arg1 interfaceType:(unsigned long long)arg2;
- (id)openEditingContextWithObject:(id)arg1 interfaceType:(unsigned long long)arg2 observer:(id)arg3;
- (id)openEditingContextWithObject:(id)arg1 interfaceType:(unsigned long long)arg2;
- (id)initWithEventStore:(id)arg1;

@end


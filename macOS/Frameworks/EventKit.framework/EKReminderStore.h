//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKUpdatedReminderBackingObjectProvider.h"

@class EKEventStore, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, REMStore;

@interface EKReminderStore : NSObject <EKUpdatedReminderBackingObjectProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sources;
    NSMutableDictionary *_cachedConstraints;
    NSArray *_lists;
    NSMutableSet *_newObjectsIDs;
    NSMutableDictionary *_updatedObjects;
    NSMutableSet *_objectIDsToCommit;
    NSMutableDictionary *_deletedObjects;
    NSMutableArray *_objectsToReset;
    NSMutableArray *_remindersNeedingMove;
    NSMutableDictionary *_movedRemindersIDMap;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSMutableDictionary *queryCompletionHandlers;
    REMStore *_remStore;
    EKEventStore *_eventStore;
}

+ (BOOL)isNotFoundError:(id)arg1;
+ (id)uniqueIdentifierForREMObject:(id)arg1;
+ (Class)frozenClassForReminderClass:(Class)arg1;
+ (id)log;
- (void).cxx_destruct;
@property(readonly) __weak EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(readonly, nonatomic) REMStore *remStore; // @synthesize remStore=_remStore;
- (id)existingUpdatedObject:(id)arg1;
- (void)_reminderCopiedToNewList:(id)arg1;
- (id)newFrozenObjectForReminderObject:(id)arg1 withChanges:(id)arg2;
- (id)frozenAlarmForREMAlarms:(id)arg1;
- (id)frozenObjectForReminderObject:(id)arg1;
- (id)remindersMatchingPredicate:(id)arg1;
- (CDUnknownBlockType)completionBlockForFetchRequestToken:(id)arg1 remove:(BOOL)arg2;
- (id)fetchRemindersMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_checkPredicate:(id)arg1;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForRemindersInCalendars:(id)arg1;
- (void)reset;
- (id)_moveRemindersToNewLists:(id)arg1 error:(id *)arg2;
- (BOOL)_commit:(id *)arg1 error:(id *)arg2;
- (BOOL)commit:(id *)arg1;
- (void)fillInPath:(id)arg1 usingParents:(id)arg2;
- (BOOL)saveObject:(id)arg1 withFrozenObject:(id)arg2 error:(id *)arg3;
- (id)resetBackingLocationWithBackingLocation:(id)arg1;
- (id)resetBackingAlarmWithBackingAlarm:(id)arg1;
- (BOOL)removeReminder:(id)arg1 error:(id *)arg2;
- (BOOL)saveReminder:(id)arg1 error:(id *)arg2;
- (id)createNewReminder;
- (id)backingReminderWithIdentifier:(id)arg1;
- (id)remindersWithExternalIdentifier:(id)arg1;
- (id)reminderWithIdentifier:(id)arg1;
- (id)defaultCalendarForNewReminders;
- (BOOL)removeCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)saveCalendar:(id)arg1 error:(id *)arg2;
- (id)frozenCalendarFromCalendar:(id)arg1 error:(id *)arg2;
- (id)createNewReminderCalendar;
- (id)backingCalendarWithIdentifier:(id)arg1;
- (id)calendarWithIdentifier:(id)arg1;
@property(readonly) NSArray *calendars;
- (id)_allLists;
- (void)_loadLists;
- (void)_loadListsIfNeeded;
- (id)_fetchAndCacheConstraintsForFrozenSource:(id)arg1;
- (id)cachedConstraintsForSource:(id)arg1;
- (id)sourceWithIdentifier:(id)arg1;
@property(readonly) NSArray *sources;
- (void)_loadAccounts;
- (void)_loadAccountsIfNeeded;
- (void)remindersChanged;
- (id)initWithEventStore:(id)arg1 token:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


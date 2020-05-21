//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CalManagedStore : NSObject
{
}

+ (BOOL)restorePersistentStoreInPSC:(id)arg1 inBatches:(BOOL)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (BOOL)restorePersistentStoreInPSC:(id)arg1 inBatches:(BOOL)arg2 error:(id *)arg3;
+ (id)contextWithPSC:(id)arg1;
+ (BOOL)restorePersistentStoreInPSC:(id)arg1 error:(id *)arg2;
+ (BOOL)hasTruthFiles;
+ (id)restoreIMAPAtPath:(id)arg1 progress:(unsigned long long *)arg2 total:(unsigned long long)arg3 inManagedObjectContext:(id)arg4;
+ (id)restoreExchangePrincipalAtPath:(id)arg1 accounts:(id)arg2 progress:(unsigned long long *)arg3 total:(unsigned long long)arg4 inManagedObjectContext:(id)arg5;
+ (id)restoreCalDAVPrincipalAtPath:(id)arg1 accounts:(id)arg2 progress:(unsigned long long *)arg3 total:(unsigned long long)arg4 inManagedObjectContext:(id)arg5 inBatches:(BOOL)arg6;
+ (unsigned long long)_enabledWeightForAccount:(id)arg1;
+ (id)restoreCalendarAtPath:(id)arg1 calendarKeysForDupeDeletion:(id)arg2 inGroup:(id)arg3 progress:(unsigned long long *)arg4 total:(unsigned long long)arg5 inManagedObjectContext:(id)arg6 inBatches:(BOOL)arg7;
+ (id)restoreCalendarAtPath:(id)arg1 calendarKeysForDupeDeletion:(id)arg2 inGroup:(id)arg3 inManagedObjectContext:(id)arg4 inBatches:(BOOL)arg5;
+ (void)_notifyOnImportTotalCalendars:(long long)arg1 completedCalendars:(long long)arg2 partialCalendarTotalItems:(long long)arg3 completedItems:(long long)arg4;
+ (void)_deleteCalendarAtPath:(id)arg1;
+ (id)restoreDefaultAlarmSetAtPath:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)_throwContextSaveExceptionWithError:(id)arg1;
+ (id)restorePublicationWithDictionary:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)restoreSubscriptionInfoWithDictionary:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)calendarChangesFile;
+ (void)_unquarantineFileIfNecessary:(id)arg1;
+ (id)managedCalendarItemsMatchingSearchElement:(id)arg1 calendars:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)fetchEntitiesWithPrefetchedAlarmsForEntityName:(id)arg1 withPredicate:(id)arg2 inCalendars:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)fetchEntitiesWithPrefetchedAlarmsForEntityName:(id)arg1 inCalendars:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)tasksWithAlarmsBetweenStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 includeLocationBased:(BOOL)arg4 inManagedObjectContext:(id)arg5;
+ (id)eventsWithAlarmsBetweenStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 includeLocationBased:(BOOL)arg4 inManagedObjectContext:(id)arg5;
+ (id)alarmsWithTriggersBetweenStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 includeLocationBased:(BOOL)arg4 inManagedObjectContext:(id)arg5;
+ (id)tasksWithDueDateBetweenStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)eventsBetweenStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 exceptUID:(id)arg4 excludeDetached:(BOOL)arg5 includeTravelTime:(BOOL)arg6 inManagedObjectContext:(id)arg7;
+ (id)predicateForDefaultAlarmSetsWithRelativeTriggersLargerThan:(long long)arg1;
+ (id)predicateForAlarmsWithAbsoluteTriggerInRange:(id)arg1 endDate:(id)arg2 orRelativeTriggerLargerThan:(long long)arg3 includingLocationBased:(BOOL)arg4;
+ (id)_predicateHelperForStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 exceptUID:(id)arg4 forReminders:(BOOL)arg5 useTravelTime:(BOOL)arg6;
+ (id)predicateForImportantDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 exceptUID:(id)arg4;
+ (id)predicateForStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 exceptUID:(id)arg4 useTravelTime:(BOOL)arg5;
+ (id)_recurringPredicateFloating:(BOOL)arg1 useTravelTime:(BOOL)arg2 forReminders:(BOOL)arg3;
+ (id)_nonRecurringPredicateFloating:(BOOL)arg1 useTravelTime:(BOOL)arg2 forReminders:(BOOL)arg3;
+ (id)entitiesFromManagedCalendarItems:(id)arg1;
+ (id)_batchedPaths:(id)arg1 batchSize:(unsigned int)arg2;
+ (id)_masterForICSFile:(id)arg1 occurrenceCALDate:(id *)arg2 inContext:(id)arg3 checkCalendarPath:(BOOL)arg4;
+ (id)masterForICSFile:(id)arg1 occurrenceCALDate:(id *)arg2 inContext:(id)arg3;
+ (id)masterForTruthFile:(id)arg1 occurrenceCALDate:(id *)arg2 inContext:(id)arg3;
+ (id)masterForTruthFile:(id)arg1 occurrenceDate:(id *)arg2 inContext:(id)arg3;

@end


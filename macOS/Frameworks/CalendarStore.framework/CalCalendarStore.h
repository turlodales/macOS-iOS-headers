//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalendarAgentClient.h"

@interface CalCalendarStore : NSObject <CalendarAgentClient>
{
    void *_reserved;
}

+ (id)taskPredicateWithUncompletedTasksDueBefore:(id)arg1 calendars:(id)arg2;
+ (id)taskPredicateWithUncompletedTasks:(id)arg1;
+ (id)taskPredicateWithTasksCompletedSince:(id)arg1 calendars:(id)arg2;
+ (id)taskPredicateWithCalendars:(id)arg1;
+ (id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 UID:(id)arg3 calendars:(id)arg4;
+ (id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
+ (id)_dateFromPotentialNSCalendarDate:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultCalendarStore;
+ (BOOL)requestAccessForServiceName:(struct __CFString *)arg1;
+ (BOOL)authorizationStatusForServiceName:(struct __CFString *)arg1;
+ (void)initialize;
+ (id)calendarPredicateWithGroups:(id)arg1;
+ (id)defaultLocalCalendarAttachmentsBackupPath;
+ (id)localCalendarsGroupTitle;
+ (id)_calendarAllDayFlagCannotApplyWhenExceptionsToRecurrenceError;
+ (id)_calendarAllDayFlagMustApplyToAllOccurrencesError;
+ (id)_calendarDoesNotSupportTasksErrorWithCalendarName:(id)arg1;
+ (id)_calendarDoesNotSupportEventsErrorWithCalendarName:(id)arg1;
+ (id)_calendarNotEditableErrorWithCalendarName:(id)arg1 isEvent:(BOOL)arg2;
+ (id)_calendarNotFoundWithCalendarName:(id)arg1 isEvent:(BOOL)arg2;
+ (BOOL)calendarIsDefaultLocal:(id)arg1;
+ (void)setCurrentTimeZone:(id)arg1;
+ (id)currentTimeZone;
+ (id)activeCalendar;
- (BOOL)removeCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)saveCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)removeTask:(id)arg1 error:(id *)arg2;
- (BOOL)saveTask:(id)arg1 error:(id *)arg2;
- (BOOL)removeEvent:(id)arg1 span:(int)arg2 error:(id *)arg3;
- (BOOL)saveEvent:(id)arg1 span:(int)arg2 error:(id *)arg3;
- (id)taskWithUID:(id)arg1;
- (id)tasksWithPredicate:(id)arg1;
- (id)eventWithUID:(id)arg1 occurrence:(id)arg2;
- (id)eventsWithPredicate:(id)arg1;
- (id)calendarWithUID:(id)arg1;
- (id)calendars;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)agentUpdatedCache:(id)arg1;
- (void)calMeCardChanged;
- (void)calPersistanceNotification:(id)arg1 userInfo:(id)arg2;
- (id)notificationForDistributedNotification:(id)arg1 userInfo:(id)arg2;
- (void)calDavSharedUIDChanged:(id)arg1;
- (BOOL)anyLocalCalendarHasAttachments;
- (BOOL)migrateLocalCalendarsToGroup:(id)arg1 error:(id *)arg2;
- (BOOL)anyLocalRemindersExist;
- (BOOL)anyLocalCalendarsExist;
- (BOOL)removeGroupForReminders:(id)arg1 error:(id *)arg2;
- (BOOL)removeGroupForCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)isPluginIdSupported:(id)arg1 forApp:(id)arg2;
- (BOOL)removeGroup:(id)arg1 error:(id *)arg2;
- (BOOL)saveGroup:(id)arg1 error:(id *)arg2;
- (id)_createURLString:(id)arg1 removePath:(BOOL)arg2 fromGroup:(id)arg3;
- (id)calendarsWithPredicate:(id)arg1;
- (id)groupWithExchangeURL:(id)arg1 externalURL:(id)arg2 userName:(id)arg3 emailAddress:(id)arg4;
- (id)groupWithPrincipalURL:(id)arg1 userName:(id)arg2;
- (id)groupWithUID:(id)arg1;
- (id)groups;
- (id)eventWithItemID:(id)arg1;
- (id)firstWritableCalendarThatSupportsTasks;
- (void)openTask:(id)arg1 options:(int)arg2;
- (void)openEvent:(id)arg1 options:(int)arg2;
- (void)_openCalendarItem:(id)arg1 options:(int)arg2;

@end


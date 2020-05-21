//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalDefaultDictionary, EKBackingStore, NSArray, NSMutableDictionary, NSString;

@interface EKBackingObjectsTracker : NSObject
{
    BOOL _notificationsDemanded;
    BOOL _errorsDemanded;
    unsigned long long _options;
    NSArray *_sourceFilters;
    EKBackingStore *_backingStore;
    NSString *_suggestedEventCalendarIdentifier;
    NSString *_naturalLanguageSuggestedEventCalendarIdentifier;
    NSMutableDictionary *_backingCalendarItems;
    NSMutableDictionary *_backingCalendars;
    CalDefaultDictionary *_backingDetached;
    CalDefaultDictionary *_backingExdates;
    CalDefaultDictionary *_backingRecurrenceSets;
    NSMutableDictionary *_backingSources;
    NSMutableDictionary *_backingNotifications;
    CalDefaultDictionary *_calendarOrSourceToNotifications;
    NSMutableDictionary *_calendarOrSourceToError;
    NSMutableDictionary *_calendarsToItemIdentifiers;
    NSMutableDictionary *_externalToInternalIdentifiers;
    NSMutableDictionary *_preFrozenSourceDictionaries;
    NSMutableDictionary *_preFrozenCalendarDictionaries;
}

+ (void)_addPrefetchRelationshipsForCalDAVCalendarFetch:(id)arg1;
+ (void)_addPrefetchRelationshipsForCalendarFetch:(id)arg1;
- (void).cxx_destruct;
@property BOOL errorsDemanded; // @synthesize errorsDemanded=_errorsDemanded;
@property BOOL notificationsDemanded; // @synthesize notificationsDemanded=_notificationsDemanded;
@property(retain, nonatomic) NSMutableDictionary *preFrozenCalendarDictionaries; // @synthesize preFrozenCalendarDictionaries=_preFrozenCalendarDictionaries;
@property(retain, nonatomic) NSMutableDictionary *preFrozenSourceDictionaries; // @synthesize preFrozenSourceDictionaries=_preFrozenSourceDictionaries;
@property(retain, nonatomic) NSMutableDictionary *externalToInternalIdentifiers; // @synthesize externalToInternalIdentifiers=_externalToInternalIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *calendarsToItemIdentifiers; // @synthesize calendarsToItemIdentifiers=_calendarsToItemIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *calendarOrSourceToError; // @synthesize calendarOrSourceToError=_calendarOrSourceToError;
@property(retain, nonatomic) CalDefaultDictionary *calendarOrSourceToNotifications; // @synthesize calendarOrSourceToNotifications=_calendarOrSourceToNotifications;
@property(retain, nonatomic) NSMutableDictionary *backingNotifications; // @synthesize backingNotifications=_backingNotifications;
@property(retain, nonatomic) NSMutableDictionary *backingSources; // @synthesize backingSources=_backingSources;
@property(retain, nonatomic) CalDefaultDictionary *backingRecurrenceSets; // @synthesize backingRecurrenceSets=_backingRecurrenceSets;
@property(retain, nonatomic) CalDefaultDictionary *backingExdates; // @synthesize backingExdates=_backingExdates;
@property(retain, nonatomic) CalDefaultDictionary *backingDetached; // @synthesize backingDetached=_backingDetached;
@property(retain, nonatomic) NSMutableDictionary *backingCalendars; // @synthesize backingCalendars=_backingCalendars;
@property(retain, nonatomic) NSMutableDictionary *backingCalendarItems; // @synthesize backingCalendarItems=_backingCalendarItems;
@property(retain, nonatomic) NSString *naturalLanguageSuggestedEventCalendarIdentifier; // @synthesize naturalLanguageSuggestedEventCalendarIdentifier=_naturalLanguageSuggestedEventCalendarIdentifier;
@property(retain, nonatomic) NSString *suggestedEventCalendarIdentifier; // @synthesize suggestedEventCalendarIdentifier=_suggestedEventCalendarIdentifier;
@property(nonatomic) __weak EKBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(retain, nonatomic) NSArray *sourceFilters; // @synthesize sourceFilters=_sourceFilters;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)summary;
- (id)errorForSourceWithIdentifier:(id)arg1;
- (id)errorForCalendarWithIdentifier:(id)arg1;
- (id)_fetchLastErrorForEntityName:(id)arg1 predicate:(id)arg2 context:(id)arg3;
- (void)refreshBackingErrorsWithCalendarIdentifiers:(id)arg1 sourceIdentifiers:(id)arg2;
- (void)refreshBackingErrors;
- (id)errors;
- (void)removeNotificationsWithManagedObjectIDs:(id)arg1;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (id)notificationIdentifiersForSourceWithIdentifier:(id)arg1;
- (id)notificationIdentifiersForCalendarWithIdentifier:(id)arg1;
- (void)useBackingNotifications:(id)arg1;
- (id)_calendarOrSourceIdentifierForNotification:(id)arg1;
- (void)addOrUpdateBackingNotification:(id)arg1 forCalendarOrSourceIdentifier:(id)arg2;
- (void)addOrUpdateBackingNotifications:(id)arg1;
- (void)refreshBackingNotificationsWithCalendarIdentifiers:(id)arg1 sourceIdentifiers:(id)arg2;
- (void)refreshBackingNotifications;
- (id)fetchBackingNotificationsWithCalendarIdentifiers:(id)arg1 sourceIdentifiers:(id)arg2;
- (id)notificationWithIdentifier:(id)arg1;
- (id)notificationIdentifiers;
- (id)notifications;
- (void)useBackingSources:(id)arg1;
- (void)addBackingSources:(id)arg1;
- (BOOL)_isSourceAllowedByFilters:(id)arg1;
- (id)_fetchBackingSourcesForCoreDataClass:(Class)arg1 predicate:(id)arg2 accessGrantedForEvents:(BOOL)arg3 accessGrantedForReminders:(BOOL)arg4 context:(id)arg5;
- (id)fetchBackingSources;
- (id)fetchBackingDelegateSources;
- (BOOL)_shouldGetRemindersSources;
- (BOOL)_shouldGetEventSources;
- (void)refreshBackingSources;
- (id)_preFrozenSourceDictionaryForIdentifier:(id)arg1;
- (id)calendarSourcesDictionary;
- (id)calendarSources;
- (id)calendarSourceIdentifiers;
- (void)removeCalendarSourceWithIdentifier:(id)arg1;
- (void)trackCalendarSourceWithIdentifier:(id)arg1 source:(id)arg2;
- (id)calendarSourceWithIdentifier:(id)arg1;
- (BOOL)_includeNaturalLanguageSuggestedEventCalendar;
- (BOOL)_includeSuggestedEventCalendar;
- (id)_fetchBackingCalendarsWithSourceIdentifiers:(id)arg1 usePreFrozenSources:(BOOL)arg2;
- (id)_preFrozenCalendarDictionaryForIdentifier:(id)arg1;
- (void)useBackingCalendars:(id)arg1;
- (void)addBackingCalendars:(id)arg1;
- (id)fetchBackingCalendarsWithSourceIdentifiers:(id)arg1;
- (void)refreshBackingCalendars;
- (id)calendarDictionary;
- (id)calendars;
- (id)calendarIdentifiers;
- (void)removeCalendarWithIdentifier:(id)arg1;
- (void)trackCalendarWithIdentifier:(id)arg1 calendar:(id)arg2;
- (id)calendarWithIdentifier:(id)arg1;
- (void)untrackAllItems;
- (void)updateCalendarToItemsMappingWithItems:(id)arg1;
- (void)updateItems:(id)arg1;
- (id)seriesForRecurrenceSetIdentifier:(id)arg1;
- (id)exceptionDictionary;
- (id)exceptionDatesForIdentifier:(id)arg1;
- (id)detachedItemsForIdentifier:(id)arg1;
- (id)itemDictionary;
- (id)items;
- (id)itemIdentifiersInCalendars:(id)arg1;
- (id)itemIdentifiers;
- (void)removeItemsWithManagedObjectIDs:(id)arg1;
- (id)trackedObjectIDsInManagedObjectIDs:(id)arg1;
- (id)itemsWithManagedObjectIDs:(id)arg1;
- (void)removeItemsWithoutIdentifiers:(id)arg1;
- (void)_removeTrackedItemWithIdentifier:(id)arg1 removeExceptions:(BOOL)arg2 thisAndFuture:(BOOL)arg3;
- (void)removeItemWithIdentifier:(id)arg1;
- (void)deleteItemWithIdentifier:(id)arg1 thisAndFuture:(BOOL)arg2;
- (id)backingErrors;
- (void)demandErrors;
- (BOOL)accessedErrors;
- (void)demandNotifications;
- (BOOL)accessedNotifications;
- (BOOL)trackItemWithIdentifier:(id)arg1 item:(id)arg2;
- (id)itemsWithExternalIdentifier:(id)arg1;
- (id)itemWithIdentifier:(id)arg1;
- (void)resetForOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL hasSourceFilters;
- (id)copyForBackingStore:(id)arg1;
- (id)initWithSourceFilters:(id)arg1 options:(unsigned long long)arg2 backingStore:(id)arg3;
- (id)initWithBackingStore:(id)arg1;
- (id)init;

@end


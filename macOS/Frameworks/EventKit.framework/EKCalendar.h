//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

@class EKSource, NSColor, NSSet, NSString, NSURL;

@interface EKCalendar : EKObject
{
    BOOL allowsContentModifications;
    BOOL cachedHasSharees;
    BOOL defaultOrganizerIsMeForNewItems;
    BOOL isMarkedUndeletable;
    BOOL isMarkedImmutableSharees;
    BOOL isShareable;
    BOOL isSubscribed;
    BOOL _subscribed;
    BOOL _allowsScheduling;
    BOOL _allowEvents;
    BOOL _allowReminders;
    BOOL _isDefaultSchedulingCalendar;
    BOOL _isDistinguishedExchangeCalendar;
    BOOL _isAffectingAvailability;
    BOOL _isFamilyCalendar;
    BOOL _isFacebookBirthdayCalendar;
    BOOL _isRenameable;
    BOOL _isColorEditable;
    BOOL _isSubscribedHolidayCalendar;
    BOOL _isSuggestedEventCalendar;
    NSString *calendarIdentifier;
    NSURL *defaultOrganizerAddressForNewItems;
    NSString *defaultOrganizerNameForNewItems;
    NSString *defaultOrganizerEncodedLikenessDataForNewItems;
    NSString *defaultOrganizerEmailForNewItems;
    NSString *path;
    NSURL *prePublishURL;
    NSURL *subscriptionURL;
    NSSet *sharedOwnerAddresses;
    NSString *sharingStatusString;
    NSString *serverPath;
    NSString *_sharedOwnerName;
    NSString *_sharedOwnerAddress;
}

+ (BOOL)_calendarsAreSharedToMeInSameSourceAndHaveSameOwner:(id)arg1;
+ (BOOL)_calendarsAreInSameSource:(id)arg1;
+ (BOOL)_calendarsAllowSharedSchedulingIfNeeded:(id)arg1;
+ (BOOL)_calendarsContainsSharedToMeCalendar:(id)arg1;
+ (id)_calendarIdentifiersForCalendars:(id)arg1;
+ (id)multiValueDiffKeys;
+ (id)singleValueDiffKeys;
+ (id)batchChangeNotificationName;
+ (id)typeDescription:(long long)arg1;
+ (long long)typeFromDescription:(id)arg1;
+ (long long)typeForCalendar:(id)arg1;
+ (id)typeStringForCalendar:(id)arg1;
+ (id)knownImmutableKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownIdentityKeys;
+ (id)knownSingleValueKeys;
+ (BOOL)isWeakRelationship;
+ (id)orderSortDescriptors;
+ (id)uniqueIdentifierForObject:(id)arg1;
+ (Class)frozenClass;
+ (id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2;
+ (id)calendarWithCalendar:(id)arg1 eventStore:(id)arg2;
+ (id)actionStringsPluralDisplayName;
+ (id)actionStringsDisplayName;
@property(nonatomic) BOOL isSuggestedEventCalendar; // @synthesize isSuggestedEventCalendar=_isSuggestedEventCalendar;
@property(nonatomic) BOOL isSubscribedHolidayCalendar; // @synthesize isSubscribedHolidayCalendar=_isSubscribedHolidayCalendar;
@property(nonatomic) BOOL isColorEditable; // @synthesize isColorEditable=_isColorEditable;
@property(nonatomic) BOOL isRenameable; // @synthesize isRenameable=_isRenameable;
@property(nonatomic) BOOL isFacebookBirthdayCalendar; // @synthesize isFacebookBirthdayCalendar=_isFacebookBirthdayCalendar;
@property(nonatomic) BOOL isFamilyCalendar; // @synthesize isFamilyCalendar=_isFamilyCalendar;
@property(nonatomic) BOOL isAffectingAvailability; // @synthesize isAffectingAvailability=_isAffectingAvailability;
@property(nonatomic) BOOL isDistinguishedExchangeCalendar; // @synthesize isDistinguishedExchangeCalendar=_isDistinguishedExchangeCalendar;
@property(nonatomic) BOOL isDefaultSchedulingCalendar; // @synthesize isDefaultSchedulingCalendar=_isDefaultSchedulingCalendar;
@property(nonatomic) BOOL allowReminders; // @synthesize allowReminders=_allowReminders;
@property(nonatomic) BOOL allowEvents; // @synthesize allowEvents=_allowEvents;
@property(nonatomic) BOOL allowsScheduling; // @synthesize allowsScheduling=_allowsScheduling;
@property(copy, nonatomic) NSString *sharedOwnerAddress; // @synthesize sharedOwnerAddress=_sharedOwnerAddress;
@property(copy, nonatomic) NSString *sharedOwnerName; // @synthesize sharedOwnerName=_sharedOwnerName;
@property(readonly, nonatomic, getter=isSubscribed) BOOL subscribed; // @synthesize subscribed=_subscribed;
- (id)serverPath;
- (id)sharingStatusString;
- (id)sharedOwnerAddresses;
- (id)subscriptionURL;
- (id)prePublishURL;
- (id)path;
- (BOOL)isShareable;
- (BOOL)isMarkedImmutableSharees;
- (BOOL)isMarkedUndeletable;
- (id)defaultOrganizerEmailForNewItems;
- (id)defaultOrganizerEncodedLikenessDataForNewItems;
- (id)defaultOrganizerNameForNewItems;
- (BOOL)defaultOrganizerIsMeForNewItems;
- (id)defaultOrganizerAddressForNewItems;
@property(readonly, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier;
- (BOOL)cachedHasSharees;
- (void).cxx_destruct;
- (id)_existingObjectForDecodedIdentifier:(id)arg1;
- (BOOL)_useExistingObjectWhenDecoding;
- (id)coreDataEntityName;
- (BOOL)revert;
- (void)refetch;
- (id)_updatedBackingCalendar;
- (BOOL)_refreshable;
- (BOOL)_reset;
- (void)mergeWithCalendarAndSave:(id)arg1 synchronous:(BOOL)arg2 progressBlock:(CDUnknownBlockType)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (BOOL)mergeWithCalendarAndSave:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)mergeWithCalendarAndSave:(id)arg1 error:(id *)arg2;
- (BOOL)canMergeWithCalendar:(id)arg1;
- (BOOL)isDifferentFromCommitted;
- (id)committedCalendar;
- (long long)deletionWarningsMask;
- (id)exportData;
- (void)importData:(id)arg1 synchronous:(BOOL)arg2 processEvents:(BOOL)arg3 processReminders:(BOOL)arg4 progressBlock:(CDUnknownBlockType)arg5 finishBlock:(CDUnknownBlockType)arg6;
- (void)importData:(id)arg1 insertOptions:(unsigned long long)arg2 updateOptions:(unsigned long long)arg3 synchronous:(BOOL)arg4 processEvents:(BOOL)arg5 processReminders:(BOOL)arg6 progressBlock:(CDUnknownBlockType)arg7 finishBlock:(CDUnknownBlockType)arg8;
- (BOOL)_validateDeletableHelper:(id *)arg1;
- (BOOL)_validateEntityTypeIsSupported:(id *)arg1;
- (BOOL)_validateSource:(id *)arg1;
- (BOOL)_validateEditable:(id *)arg1;
- (BOOL)_hasChangesForKeyAndKeyIsOnlyChangedKey:(id)arg1;
- (BOOL)_validateAccessConsent:(id *)arg1;
- (BOOL)_anotherCalendarForRemindersExists;
- (BOOL)_anotherCalendarForDefaultSchedulingExists;
- (id)_otherCalendarsInSameSource;
- (id)_allCalendarsInSameSource;
- (id)_calendarsInEventStoreMatchingOurEntityType;
- (BOOL)eligibleForDefaultSchedulingCalendar;
- (BOOL)_validateDeletable:(id *)arg1;
- (BOOL)validate:(id *)arg1;
- (BOOL)remove:(id *)arg1;
- (id)freeBusyCache;
- (void)reinviteSharees:(id)arg1;
- (id)externalURI;
@property(readonly, nonatomic) unsigned long long supportedEventAvailabilities;
@property(readonly, nonatomic, getter=isImmutable) BOOL immutable;
- (BOOL)_isReadOnlyDelegate;
- (BOOL)isDeletable;
- (BOOL)isEditable;
@property(readonly, nonatomic) unsigned long long allowedEntityTypes;
- (void)setSymbolicColor:(id)arg1;
- (id)symbolicColor;
@property(copy, nonatomic) NSColor *color;
@property(readonly, nonatomic) long long type;
- (void)setTypeString:(id)arg1;
- (id)typeString;
- (id)sourceIdentifierForCalendar;
@property(retain, nonatomic) EKSource *source;
- (BOOL)_allowsAttachments;
- (BOOL)_allowsPrivateModifications;
- (void)setSuppressEventSchedulingNotifications:(BOOL)arg1;
- (BOOL)suppressEventSchedulingNotifications;
- (void)setContainerSource:(id)arg1;
- (id)containerSource;
- (unsigned long long)sharingStatus;
- (id)alarms;
- (void)setDefaultAlarmsForTimedEvents:(id)arg1;
- (id)defaultAlarmsForTimedEvents;
- (void)setDefaultAlarmsForAllDayEvents:(id)arg1;
- (id)defaultAlarmsForAllDayEvents;
- (BOOL)supportsCollectionAlarms;
- (void)removeAlarms:(id)arg1;
- (void)addAlarms:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)removeSharee:(id)arg1;
- (void)addSharee:(id)arg1;
- (void)setSharees:(id)arg1;
- (id)shareesAndOwner;
- (id)sharees;
- (void)setNotes:(id)arg1;
- (id)notes;
- (void)setPublishURL:(id)arg1;
- (id)publishURL;
- (id)sharedOwnerURL;
- (void)setIgnoreAlarms:(BOOL)arg1;
- (BOOL)ignoreAlarms;
- (id)defaultOrganizerForNewItems;
- (void)setDisplayOrder:(int)arg1;
- (int)displayOrder;
- (void)setSymbolicColorName:(id)arg1;
- (id)symbolicColorName;
- (void)setColorString:(id)arg1;
- (id)colorString;
@property(copy, nonatomic) NSString *title;
- (void)reorderCalendars:(id)arg1 betweenEarlier:(id)arg2 later:(id)arg3;
- (void)reorderBetweenEarlier:(id)arg1 later:(id)arg2;
- (void)_updateToMaxDisplayOrder;
- (id)calendarError;
- (unsigned long long)notificationCountIncludingPast:(BOOL)arg1;
- (long long)notificationCount;
- (BOOL)isCurrentUserCalendarOwner;
- (id)backingCalendar;
- (BOOL)hasSharees;
@property(readonly, nonatomic) BOOL allowsContentModifications; // @synthesize allowsContentModifications;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5;
- (id)initWithAllowEvents:(BOOL)arg1 allowReminders:(BOOL)arg2;
- (id)actionStringsDisplayTitle;
- (BOOL)removeWithSpan:(long long)arg1 error:(id *)arg2;
- (BOOL)saveWithSpan:(long long)arg1 error:(id *)arg2;

@end


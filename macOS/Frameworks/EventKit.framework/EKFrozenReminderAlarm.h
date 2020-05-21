//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKFrozenReminderObject.h>

@class EKFrozenReminderStructuredLocation, NSArray, NSString, REMAlarm;

@interface EKFrozenReminderAlarm : EKFrozenReminderObject
{
    REMAlarm *_timeAlarm;
    REMAlarm *_locationAlarm;
}

+ (id)sharedUIDFromFrozenCalendarAlarm:(id)arg1;
+ (long long)alarmProximityFromString:(id)arg1;
+ (id)alarmProximityToString:(long long)arg1;
+ (id)semanticIdentifierFromDateComponents:(id)arg1;
+ (id)semanticIdentifierFromREMAlarm:(id)arg1;
+ (id)uniqueIdentifierForREMObject:(id)arg1;
+ (id)triggersFromAbsoluteDate:(id)arg1 relativeOffset:(double)arg2 timeValuesRelevant:(BOOL)arg3 structuredLocation:(id)arg4 proximity:(long long)arg5;
+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)arg1;
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)arg1;
+ (Class)meltedClass;
- (void).cxx_destruct;
- (id)bookmark;
- (BOOL)notRelativeToTravelTime;
- (BOOL)isDefault;
- (BOOL)isSnoozed;
- (id)url;
- (id)emailAddress;
- (id)soundName;
- (id)actionString;
- (id)acknowledgedDate;
- (BOOL)isTimeToLeaveAlarm;
- (id)sharedUID;
- (id)proximityString;
- (long long)proximity;
- (id)updatedAlarmWithLocation:(id)arg1;
- (BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;
- (BOOL)_applyChanges:(id)arg1 error:(id *)arg2;
@property(readonly) NSArray *triggers;
- (id)_remStructuredLocation;
@property(readonly) NSString *externalID;
- (id)modifiedStructuredLocation;
@property(readonly) EKFrozenReminderStructuredLocation *structuredLocation;
- (id)absoluteDate;
- (double)relativeOffset;
- (id)uniqueIdentifier;
- (id)remObjectID;
@property(readonly) NSArray *alarms;
- (id)_locationAlarm;
- (id)_timeAlarm;
- (id)_setTimeOrLocationAlarm:(id)arg1;
- (void)_setTimeAndLocationAlarms:(id)arg1;
- (id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2;
- (id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;

@end


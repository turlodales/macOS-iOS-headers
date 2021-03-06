//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CoreAlarm.h>

@interface CoreMailAlarm : CoreAlarm
{
}

+ (id)humanReadableDescriptionForTrigger:(id)arg1 email:(id)arg2 isAllDay:(BOOL)arg3;
+ (id)alarmWithTrigger:(id)arg1 withSummary:(id)arg2 withDesc:(id)arg3;
+ (id)alarmWithTrigger:(id)arg1;
- (id)humanReadableDescriptionIsAllDay:(BOOL)arg1;
- (id)humanReadableDescription;
- (id)removeAllAttendees;
- (id)removeAttendee:(id)arg1;
- (id)addAttendee:(id)arg1;
- (id)attendees;
- (id)removeAttachment:(id)arg1;
- (id)addAttachment:(id)arg1;
- (id)attachments;
- (id)setSummary:(id)arg1;
- (id)summary;
- (id)setDesc:(id)arg1;
- (id)desc;
- (Class)correspondingOccurrenceClass;
- (id)initWithTrigger:(id)arg1 withSummary:(id)arg2 withDesc:(id)arg3;
- (id)initWithTrigger:(id)arg1;

@end


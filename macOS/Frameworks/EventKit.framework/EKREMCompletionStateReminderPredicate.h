//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKREMReminderPredicate.h>

@class NSDate;

@interface EKREMCompletionStateReminderPredicate : EKREMReminderPredicate
{
    NSDate *_start;
    NSDate *_end;
    BOOL _completed;
}

- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)fetchMatchingRemindersInStore:(id)arg1 allLists:(id)arg2 error:(id *)arg3;
- (id)initForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)initForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;

@end


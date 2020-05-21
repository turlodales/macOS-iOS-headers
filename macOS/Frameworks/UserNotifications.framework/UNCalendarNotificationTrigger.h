//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserNotifications/UNNotificationTrigger.h>

@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger
{
    NSDateComponents *_dateComponents;
}

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithDateMatchingComponents:(id)arg1 repeats:(BOOL)arg2;
- (void).cxx_destruct;
@property(readonly, copy) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)nextTriggerDate;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithDateComponents:(id)arg1 repeats:(BOOL)arg2;

@end


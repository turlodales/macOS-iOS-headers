//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification
{
}

- (BOOL)couldBeJunk;
@property(readonly, nonatomic) unsigned long long cachedJunkStatus;
- (void)setIsJunk:(BOOL)arg1 shouldSave:(BOOL)arg2;
- (BOOL)supportsJunkReporting;
- (id)sendersPhoneNumber;
- (id)sendersEmail;
- (unsigned long long)supportedActions;
- (id)invitation;
- (id)calendarTitle;
- (BOOL)isSharedCalendarInvitation;

@end


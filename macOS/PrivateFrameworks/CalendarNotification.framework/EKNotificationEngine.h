//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalLimitingQueue, EKEventStore, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface EKNotificationEngine : NSObject
{
    EKEventStore *_eventStore;
    id <EKNotificationInfoDelegate> _notificationDelegate;
    CalLimitingQueue *_limitingQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSMutableDictionary *_timers;
}

+ (id)logHandleFor35464009;
+ (BOOL)shouldLogFor35464009;
+ (void)openURLString:(id)arg1 withApp:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *timers; // @synthesize timers=_timers;
@property(retain) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
@property(retain) CalLimitingQueue *limitingQueue; // @synthesize limitingQueue=_limitingQueue;
@property __weak id <EKNotificationInfoDelegate> notificationDelegate; // @synthesize notificationDelegate=_notificationDelegate;
@property(retain) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void)dealloc;
- (void)_timerFiredWithLabel:(id)arg1 performsQuickAction:(BOOL)arg2;
- (void)_scheduleTimerWithLabel:(id)arg1 interval:(double)arg2 quickAction:(BOOL)arg3;
- (void)_resetTimers;
- (void)_remindersBadgeCountForContactIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_remindersBadgeCountWithReply:(CDUnknownBlockType)arg1;
- (BOOL)_contributesToRemindersWithContactBadgeCount;
- (BOOL)_contributesToRemindersBadgeCount;
- (void)_calendarBadgeCountWithReply:(CDUnknownBlockType)arg1;
- (BOOL)_contributesToCalendarBadgeCount;
- (void)_removeNotificationIdentifiers:(id)arg1;
- (void)_handleExpirationForIdentifiers:(id)arg1;
- (BOOL)_handlesExpirationForType:(id)arg1;
- (void)_handleActivationForIdentifier:(id)arg1 userInfo:(id)arg2 clickActivation:(BOOL)arg3;
- (BOOL)_handlesActivationForType:(id)arg1;
- (void)_handleDismissalForIdentifier:(id)arg1 userInfo:(id)arg2 dismissedAlert:(BOOL)arg3;
- (BOOL)_handlesDismissalForType:(id)arg1;
- (void)_handleSummaryShown;
- (BOOL)_handlesSummaryShown;
- (void)_performQuickAction;
- (void)_performAction;
- (void)remindersBadgeCountForContactIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)remindersBadgeCountWithReply:(CDUnknownBlockType)arg1;
- (void)calendarBadgeCountWithReply:(CDUnknownBlockType)arg1;
- (void)handleExpirationForType:(id)arg1 identifiers:(id)arg2 after:(double)arg3;
- (void)handleActivationForType:(id)arg1 identifier:(id)arg2 userInfo:(id)arg3 clickActivation:(BOOL)arg4;
- (void)handleDismissalForType:(id)arg1 identifier:(id)arg2 userInfo:(id)arg3 dismissedAlert:(BOOL)arg4;
- (void)handleSummaryShown;
- (id)_interestingNotifications;
- (void)quickAction;
- (void)action;
- (void)start;
- (void)_notificationReceived:(id)arg1;
- (void)_registerForNotifications;
@property(readonly, nonatomic) NSString *engineID;
- (id)initWithEventStore:(id)arg1 actionQueue:(id)arg2 timerQueue:(id)arg3 notificationDelegate:(id)arg4;

@end


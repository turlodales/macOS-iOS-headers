//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject
{
    CNChangesNotifierProxy *_notifierProxy;
}

+ (void)flushSharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;
+ (id)sharedNotifier;
- (void).cxx_destruct;
@property(retain, nonatomic) CNChangesNotifierProxy *notifierProxy; // @synthesize notifierProxy=_notifierProxy;
- (void)setExternalNotificationCoalescingDelay:(double)arg1;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg1;
- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
- (void)waitForCurrentTasksToFinish;
- (void)didChangeMeContactSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (void)didSaveChangesSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (void)willSaveChanges;
- (void)dealloc;
- (id)initWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;

@end


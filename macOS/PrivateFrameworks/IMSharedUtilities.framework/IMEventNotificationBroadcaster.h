//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMSharedUtilities/IMEventNotificationQueue.h>

@interface IMEventNotificationBroadcaster : IMEventNotificationQueue
{
}

- (void)broadcastEventToListeners:(CDUnknownBlockType)arg1;
- (void)_didProcessQueue;
- (void)_willProcessQueue;

@end


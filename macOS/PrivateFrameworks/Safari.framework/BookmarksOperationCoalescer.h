//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BookmarksOperationCoalescingTimerDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface BookmarksOperationCoalescer : NSObject <BookmarksOperationCoalescingTimerDelegate>
{
    NSMutableArray *_timers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id <BookmarksOperationCoalescerDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <BookmarksOperationCoalescerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bookmarksOperationCoalescingTimerDidFire:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


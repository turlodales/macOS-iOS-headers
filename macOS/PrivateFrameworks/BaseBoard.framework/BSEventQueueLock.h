//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSEventQueue, NSString;

@interface BSEventQueueLock : NSObject
{
    BOOL _relinquished;
    NSString *_reason;
    BSEventQueue *_eventQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BSEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void)relinquish;
- (id)description;
- (void)dealloc;
- (id)initWithEventQueue:(id)arg1 reason:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface PFCoalescerActivityToken : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSString *_reason;
    NSArray *_callStackReturnAddresses;
    NSDate *_creationDate;
}

- (void).cxx_destruct;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSArray *callStackReturnAddresses; // @synthesize callStackReturnAddresses=_callStackReturnAddresses;
@property(retain) NSString *reason; // @synthesize reason=_reason;
@property(retain) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property(retain) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
- (id)description;
- (void)endActivity;
- (void)dealloc;
- (id)initWithDispatchGroup:(id)arg1 reason:(id)arg2;

@end


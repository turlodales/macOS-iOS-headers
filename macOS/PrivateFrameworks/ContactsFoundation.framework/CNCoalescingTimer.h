//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNUnfairLock;

@interface CNCoalescingTimer : NSObject
{
    BOOL _open;
    BOOL _someoneWaiting;
    id <CNCancelable> _scheduledToken;
    id <CNScheduler> _downstreamScheduler;
    CNUnfairLock *_resourceLock;
    id <CNScheduler> _delayScheduler;
    CDUnknownBlockType _block;
    double _delay;
    unsigned long long _options;
}

+ (id)os_log;
- (void).cxx_destruct;
@property(nonatomic, getter=isSomeoneWaiting) BOOL someoneWaiting; // @synthesize someoneWaiting=_someoneWaiting;
@property(nonatomic) BOOL open; // @synthesize open=_open;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) id <CNScheduler> delayScheduler; // @synthesize delayScheduler=_delayScheduler;
@property(readonly, nonatomic) CNUnfairLock *resourceLock; // @synthesize resourceLock=_resourceLock;
@property(readonly, nonatomic) id <CNScheduler> downstreamScheduler; // @synthesize downstreamScheduler=_downstreamScheduler;
@property(retain, nonatomic) id <CNCancelable> scheduledToken; // @synthesize scheduledToken=_scheduledToken;
- (void)nts_closeDoor;
- (void)nts_openDoor;
- (void)nts_makeSomeoneWait;
- (void)nts_letSomeoneIn;
- (BOOL)nts_isDoorOpened;
- (void)handleEvent;
- (void)dealloc;
- (id)initWithDelay:(double)arg1 options:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 schedulerProvider:(id)arg4 downstreamScheduler:(id)arg5;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_transaction>;

@interface SDDirtyIdleTimer : NSObject
{
    unsigned int _resetCount;
    unsigned int _dirtyCount;
    unsigned long long _idleTimeout;
    unsigned long long _dirtyTimeout;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_source> *_idleTimer;
    unsigned long long _idleStartTime;
    NSObject<OS_os_transaction> *_transaction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) unsigned int dirtyCount; // @synthesize dirtyCount=_dirtyCount;
@property(nonatomic) unsigned int resetCount; // @synthesize resetCount=_resetCount;
@property(nonatomic) unsigned long long idleStartTime; // @synthesize idleStartTime=_idleStartTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long dirtyTimeout; // @synthesize dirtyTimeout=_dirtyTimeout;
@property(nonatomic) unsigned long long idleTimeout; // @synthesize idleTimeout=_idleTimeout;
- (void)cancel;
- (void)dirty;
- (void)_stop;
- (id)description;
- (id)initWithQueue:(id)arg1 timeoutBlock:(CDUnknownBlockType)arg2;

@end


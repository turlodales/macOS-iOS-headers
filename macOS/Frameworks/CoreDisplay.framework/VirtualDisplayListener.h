//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VirtualDisplayListener : NSObject
{
    NSMapTable *_database;
    NSLock *_lock;
    unsigned int _portSet;
    CDUnknownFunctionPointerType _demux;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _running;
}

- (id)objectForPort:(unsigned int)arg1;
- (void)forgetPort:(unsigned int)arg1;
- (void)rememberPort:(unsigned int)arg1 forObject:(id)arg2;
- (void)dealloc;
- (id)initWithDemux:(CDUnknownFunctionPointerType)arg1 strong:(BOOL)arg2 name:(id)arg3;
- (void)rx;

@end


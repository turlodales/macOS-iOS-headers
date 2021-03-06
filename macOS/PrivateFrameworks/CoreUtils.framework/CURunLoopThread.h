//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CURunLoopThread : NSObject
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    struct __CFRunLoop *_runLoop;
    BOOL _runLoopValid;
    NSMutableArray *_startBlocks;
    BOOL _threadRunning;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _threadInitializeHandler;
    CDUnknownBlockType _threadFinalizeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType threadFinalizeHandler; // @synthesize threadFinalizeHandler=_threadFinalizeHandler;
@property(copy, nonatomic) CDUnknownBlockType threadInitializeHandler; // @synthesize threadInitializeHandler=_threadInitializeHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_threadMain;
- (BOOL)_scheduleStopThread;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)activate;
- (void)dealloc;
- (id)init;

@end


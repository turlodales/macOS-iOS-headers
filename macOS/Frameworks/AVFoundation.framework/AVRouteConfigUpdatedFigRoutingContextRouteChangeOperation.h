//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVOperation.h>

#import <AVFoundation/AVDestinationChangeResultSource-Protocol.h>

@class AVOutputContextDestinationChange, AVWeakReference, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVRouteConfigUpdatedFigRoutingContextRouteChangeOperation : AVOperation <AVDestinationChangeResultSource>
{
    AVWeakReference *_weakObserver;
    struct OpaqueFigRoutingContext *_routingContext;
    struct __CFString *_routeChangeID;
    CDUnknownBlockType _routeChangeBlock;
    NSObject<OS_dispatch_queue> *_routeChangeIvarAccessQueue;
    AVOutputContextDestinationChange *_result;
}

+ (void)initialize;
- (void)_routeConfigUpdateWithID:(struct __CFString *)arg1 endedWithReason:(struct __CFString *)arg2;
- (void)start;
- (BOOL)isAsynchronous;
- (void)_setResultIfNotAlreadySet:(id)arg1;
@property(readonly, nonatomic) AVOutputContextDestinationChange *result;
- (void)dealloc;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext *)arg1 routeChangeID:(struct __CFString *)arg2 routeChangeBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


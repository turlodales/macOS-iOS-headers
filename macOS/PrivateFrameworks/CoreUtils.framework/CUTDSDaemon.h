//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CUTDSDaemon : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
    NSString *_xpcServiceName;
}

+ (id)sharedTDSDaemon;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;
- (void)_xpcConnectionInvalidated:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


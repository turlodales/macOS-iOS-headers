//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSProxy, NSViewServiceMarshal, NSWindow;
@protocol NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface NSServiceViewControllerAuxiliary : NSObject
{
    NSWindow *serviceWindow;
    NSViewServiceMarshal *marshal;
    unsigned int invalid:1;
    unsigned int didSetWindowContentView:1;
    unsigned int makesExplicitResizeRequests:1;
    unsigned int retainedMarshal:1;
    unsigned int mostRecentCallToSetViewWasNonNil:1;
    unsigned int callsToSetViewCount;
    unsigned long long adjustLayoutInProgress;
    NSError *leastRecentError;
    unsigned int hostSDKVersion;
    NSProxy<NSXPCProxyCreating> *_remoteViewControllerProxy;
    struct os_unfair_lock_s _retainReleaseLock;
}

- (BOOL)hasOwnWindow;

@end


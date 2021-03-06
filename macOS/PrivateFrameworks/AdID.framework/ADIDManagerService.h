//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

#import <AdID/ADIDManager_XPC-Protocol.h>
#import <AdID/NSXPCListenerDelegate-Protocol.h>

@class NSMutableArray, NSObject, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ADIDManagerService : ADSingleton <ADIDManager_XPC, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_forceReconcileQueue;
    NSXPCListener *_listener;
    NSMutableArray *_reconcileArray;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *reconcileArray; // @synthesize reconcileArray=_reconcileArray;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (unsigned long long)delayForNewForceReconcileRequest;
- (void)forceReconcile:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


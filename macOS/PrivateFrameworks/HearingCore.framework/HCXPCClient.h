//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface HCXPCClient : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    unsigned long long _requestedUpdates;
}

+ (id)clientWithConnection:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestedUpdates; // @synthesize requestedUpdates=_requestedUpdates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (BOOL)sendMessage:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (BOOL)wantsUpdatesForIdentifier:(unsigned long long)arg1;
- (void)setWantsUpdates:(BOOL)arg1 forIdentifier:(unsigned long long)arg2;
- (void)teardownConnection;
- (id)description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end


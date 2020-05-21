//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface IOSurfaceRemoteRemoteClient : NSObject
{
    int _pid;
    NSMutableDictionary *_surfaceStates;
    NSObject<OS_xpc_object> *_remoteConnection;
    NSObject<OS_dispatch_queue> *_disconnectedQueue;
    CDUnknownBlockType _disconnectedHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType disconnectedHandler; // @synthesize disconnectedHandler=_disconnectedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *disconnectedQueue; // @synthesize disconnectedQueue=_disconnectedQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
@property(retain, nonatomic) NSMutableDictionary *surfaceStates; // @synthesize surfaceStates=_surfaceStates;
@property(nonatomic) int pid; // @synthesize pid=_pid;
- (void)_handleMessage:(id)arg1;
- (struct __IOSurfaceClient *)_getClient:(unsigned int)arg1 inboundExtradata:(id)arg2 outboundExtraData:(id *)arg3;
- (BOOL)_removeSurface:(unsigned int)arg1;
- (void)_addSurface:(struct __IOSurfaceClient *)arg1 mappedAddress:(void *)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4;
- (void)_handleError:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRemoteConnection:(id)arg1 disconnectedQueue:(id)arg2 disconnectedHandler:(CDUnknownBlockType)arg3;

@end


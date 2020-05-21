//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface IOSurfaceRemoteServer : NSObject
{
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_clients;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
- (void)_handleClientDisconnected:(id)arg1;
- (void)_handleClientConnection:(id)arg1;
- (void)shutdown;
- (void)dealloc;
- (id)initWithListener:(id)arg1 options:(id)arg2;

@end


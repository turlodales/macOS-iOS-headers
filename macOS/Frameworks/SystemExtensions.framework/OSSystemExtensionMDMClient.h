//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, NSXPCInterface, Protocol;
@protocol OS_dispatch_queue;

@interface OSSystemExtensionMDMClient : NSObject
{
    Protocol *mdmClientToServerInterface;
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) NSXPCInterface *interface; // @synthesize interface=_interface;
- (id)removeMDMPayloadForUUID:(id)arg1;
- (id)installMDMPayload:(id)arg1 uuid:(id)arg2;
- (id)callMDMServiceWithRetry:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)connectToServer;
- (id)init;

@end


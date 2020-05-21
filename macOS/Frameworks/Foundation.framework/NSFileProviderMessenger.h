//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileProviderMessageInterface, NSLock, NSXPCConnection, Protocol;

@interface NSFileProviderMessenger : NSObject
{
    NSXPCConnection *_conn;
    Protocol *_protocol;
    NSFileProviderMessageInterface *_interface;
    NSLock *_lock;
    BOOL _triedConnection;
}

- (void)invalidate;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithInterface:(id)arg1 protocol:(id)arg2;
- (void)dealloc;

@end


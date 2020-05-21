//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/_RWIRelayClientConnection.h>

#import "_RWITCPConnectionDelegate.h"

@class NSString, _RWITCPConnection;

__attribute__((visibility("hidden")))
@interface _RWIRelayClientTCPConnection : _RWIRelayClientConnection <_RWITCPConnectionDelegate>
{
    _RWITCPConnection *_connection;
}

+ (id)connectionFromTCPConnection:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) _RWITCPConnection *connection; // @synthesize connection=_connection;
- (void)sendMessage:(id)arg1;
- (void)tcpConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)tcpConnectionDidClose:(id)arg1;
- (void)closeInternal;
- (id)initWithTCPConnection:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


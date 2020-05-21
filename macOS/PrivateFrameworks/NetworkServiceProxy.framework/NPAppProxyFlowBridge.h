//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NEAppProxyFlow, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_nw_connection>, NWEndpoint;

@interface NPAppProxyFlowBridge : NSObject
{
    int _currentState;
    NEAppProxyFlow *_flow;
    NWEndpoint *_remoteEndpoint;
    NSObject<OS_nw_connection> *_connection;
    NSError *_connectionError;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property int currentState; // @synthesize currentState=_currentState;
@property(retain) NSError *connectionError; // @synthesize connectionError=_connectionError;
@property(retain) NSObject<OS_nw_connection> *connection; // @synthesize connection=_connection;
@property(retain) NWEndpoint *remoteEndpoint; // @synthesize remoteEndpoint=_remoteEndpoint;
@property(retain) NEAppProxyFlow *flow; // @synthesize flow=_flow;
- (void)startConnection;
- (void)readDataFromClient;
- (void)readMultipleFromClient;
- (void)readDataFromConnection;
- (void)readMultipleFromConnection;
- (void)writeDataToConnection:(id)arg1;
- (void)writeMultipleToConnection:(id *)arg1 count:(unsigned int)arg2;
- (id)initWithAppProxyFlow:(id)arg1;

@end


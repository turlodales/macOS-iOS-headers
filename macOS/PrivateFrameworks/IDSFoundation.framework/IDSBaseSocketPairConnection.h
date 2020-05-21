//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMWeakReference, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface IDSBaseSocketPairConnection : NSObject
{
    IMWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_outgoingDataArray;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    int _connectedSocket;
    double _lastDateCheck;
    long long _bytesReceived;
    double _prevBPS;
    BOOL _writeSourceIsResumed;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int socket; // @synthesize socket=_connectedSocket;
- (BOOL)sendData:(id)arg1;
- (void)_setupWriteSource;
- (void)_sendToConnectedSocket;
- (void)start;
- (void)_processBytesAvailable;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)setDestination:(id)arg1;
- (void)endSession;
- (void)dealloc;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 start:(BOOL)arg4;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;

@end


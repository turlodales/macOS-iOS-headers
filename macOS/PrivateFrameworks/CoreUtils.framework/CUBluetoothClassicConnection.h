//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUReadWriteRequestable.h"

@class CBClassicManager, CBClassicPeer, CBL2CAPChannel, CUReadRequest, CUWriteRequest, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CUBluetoothClassicConnection : NSObject <CUReadWriteRequestable>
{
    CDUnknownBlockType _activateCompletion;
    CBClassicManager *_classicManager;
    CBClassicPeer *_connectingPeer;
    CBClassicPeer *_connectedPeer;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _observersAdded;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CUReadRequest *_readRequestCurrent;
    NSMutableArray *_readRequests;
    int _socketFD;
    int _state;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CUWriteRequest *_writeRequestCurrent;
    NSMutableArray *_writeRequests;
    struct LogCategory *_ucat;
    NSString *_destinationPeer;
    NSString *_destinationService;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CBL2CAPChannel *_l2capChannel;
    CDUnknownBlockType _serverInvalidationHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType serverInvalidationHandler; // @synthesize serverInvalidationHandler=_serverInvalidationHandler;
@property(retain, nonatomic) CBL2CAPChannel *l2capChannel; // @synthesize l2capChannel=_l2capChannel;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *destinationService; // @synthesize destinationService=_destinationService;
@property(copy, nonatomic) NSString *destinationPeer; // @synthesize destinationPeer=_destinationPeer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)classicManagerDidUpdateState;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_abortWritesWithError:(id)arg1;
- (BOOL)_prepareWriteRequest:(id)arg1 error:(id *)arg2;
- (void)_processWrites;
- (void)writeEndOfDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)writeWithRequest:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (BOOL)_processReadStatus;
- (void)_abortReadsWithError:(id)arg1;
- (void)_prepareReadRequest:(id)arg1;
- (void)_processReads:(BOOL)arg1;
- (void)readWithRequest:(id)arg1;
- (BOOL)_runSetupChannel;
- (BOOL)_runOpenChannelStart;
- (void)_runConnectCompleted:(id)arg1 error:(id)arg2;
- (BOOL)_runConnectStart;
- (void)_run;
- (void)_reportError:(id)arg1;
- (BOOL)_setupIOAndReturnError:(id *)arg1;
- (BOOL)_startConnectingAndReturnError:(id *)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (BOOL)activateDirectAndReturnError:(id *)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end


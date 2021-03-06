//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMNSXPCConnecting-Protocol.h>

@class FMFuture, NSString, NSXPCConnection;

@interface FMNSXPCConnection : NSObject <FMNSXPCConnecting>
{
    BOOL __testMockConnection;
    NSXPCConnection *_connection;
    FMFuture *_future;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL _testMockConnection; // @synthesize _testMockConnection=__testMockConnection;
@property(retain, nonatomic) FMFuture *future; // @synthesize future=_future;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)destroyXPCConnection;
- (void)invalidate;
@property(readonly, nonatomic) long long state;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 exportedObject:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


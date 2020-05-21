//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOProtobufSessionTaskDelegate.h"

@class GEOApplicationAuditToken, GEOETATrafficUpdateRequest, GEOMapServiceTraits, GEOProtobufSession, GEOProtobufSessionTask, NSObject<OS_dispatch_queue>, NSString;

@interface GEOETAProvider : NSObject <GEOProtobufSessionTaskDelegate>
{
    GEOProtobufSession *_protobufSession;
    GEOProtobufSessionTask *_task;
    GEOETATrafficUpdateRequest *_currentRequest;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _finishedHandler;
    CDUnknownBlockType _willSendRequestHandler;
    GEOApplicationAuditToken *_auditToken;
    GEOMapServiceTraits *_traits;
    BOOL _cancelled;
    struct GEOOnce_s _didStart;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType willSendRequestHandler; // @synthesize willSendRequestHandler=_willSendRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain) GEOETATrafficUpdateRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) GEOProtobufSessionTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) GEOProtobufSession *protobufSession; // @synthesize protobufSession=_protobufSession;
- (void)cancelRequest;
- (void)_startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(CDUnknownBlockType)arg3 finished:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(CDUnknownBlockType)arg3 finished:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)updateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (id)initWithAuditToken:(id)arg1 traits:(id)arg2;
- (id)init;
- (void)didCompleteTask;
- (void)protobufSession:(id)arg1 willSendRequestForTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


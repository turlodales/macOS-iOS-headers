//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FPXPCAutomaticErrorProxy.h"

@class NSError, NSObject<NSXPCProxyCreating>, NSString, Protocol;

@interface FPXPCAutomaticErrorProxy : NSObject <FPXPCAutomaticErrorProxy>
{
    NSObject<NSXPCProxyCreating> *_target;
    Protocol *_protocol;
    NSError *_error;
    CDUnknownBlockType _requestWillBeginBlock;
    NSString *_name;
    id _retainSelfWhileMessageIsPending;
    BOOL _isSynchronous;
    // Error parsing type: AQ, name: _retainCounter
    int _pid;
}

+ (BOOL)sanitizeErrors;
- (void).cxx_destruct;
@property(nonatomic) int requestEffectivePid; // @synthesize requestEffectivePid=_pid;
- (id)description;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_requestDidFinish:(id)arg1 requestDidFinishBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_requestWillBegin:(SEL)arg1 requestID:(id)arg2;
- (id)initWithRemoteObjectProxy:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(CDUnknownBlockType)arg6;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(CDUnknownBlockType)arg6 requestDidFinish:(CDUnknownBlockType)arg7;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(CDUnknownBlockType)arg6;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5;

@end


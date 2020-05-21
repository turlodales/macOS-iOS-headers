//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LAContext, NSDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, TKToken;

@interface TKTokenSession : NSObject
{
    TKToken *_token;
    id <TKTokenSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id _keepAlive;
    LAContext *_LAContext;
    NSDictionary *_parameters;
    NSXPCConnection *_caller;
    NSNumber *_callerPID;
}

- (void).cxx_destruct;
@property(retain) NSNumber *callerPID; // @synthesize callerPID=_callerPID;
@property(readonly, nonatomic) NSXPCConnection *caller; // @synthesize caller=_caller;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) LAContext *LAContext; // @synthesize LAContext=_LAContext;
@property(retain, nonatomic) id keepAlive; // @synthesize keepAlive=_keepAlive;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <TKTokenSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) TKToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *name;
- (void)terminate;
- (void)getAdvertisedItemsWithReply:(CDUnknownBlockType)arg1;
- (void)objectID:(id)arg1 operation:(long long)arg2 inputData:(id)arg3 algorithms:(id)arg4 parameters:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (id)errorWithResult:(id)arg1 operation:(id)arg2 forError:(id)arg3;
- (void)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluateAuthOperation:(id)arg1 retry:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)finalizeAuthOperation:(id)arg1 evaluatedAuthOperation:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)auditAuthOperation:(id)arg1 auditToken:(CDStruct_6ad76789)arg2 success:(BOOL)arg3;
- (void)evaluateAuthOperation:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)endRequest;
- (void)beginRequest;
- (void)deleteObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createObjectWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)commitKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)bumpKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)attestKey:(id)arg1 usingKey:(id)arg2 nonce:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)performKeyExchangeWithPublicKey:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)decryptData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)signData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)checkOperation:(long long)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4;
- (void)beginAuthForOperation:(long long)arg1 constraint:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getAttributesOfObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly) id <TKTokenSessionPrivateDelegate> privateDelegate;
- (void)setCaller:(id)arg1;
- (void)setLAContext:(id)arg1;
- (id)initWithToken:(id)arg1;

@end


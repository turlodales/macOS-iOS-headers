//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, SOAuthorizationRequestParametersCore, SOClient;

@interface SOAuthorizationCore : NSObject
{
    SOClient *_client;
    SOAuthorizationRequestParametersCore *_requestParametersCore;
    id <SOAuthorizationCoreDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateDispatchQueue;
    NSDictionary *_authorizationOptions;
}

+ (BOOL)_doAKshouldProcessURL:(id)arg1;
+ (BOOL)_canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 useInternalExtensions:(BOOL)arg4;
+ (BOOL)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 useInternalExtensions:(BOOL)arg3;
+ (BOOL)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2;
+ (void)isExtensionProcessWithAuditToken:(CDStruct_6ad76789)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *authorizationOptions; // @synthesize authorizationOptions=_authorizationOptions;
@property(retain) NSObject<OS_dispatch_queue> *delegateDispatchQueue; // @synthesize delegateDispatchQueue=_delegateDispatchQueue;
@property __weak id <SOAuthorizationCoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_finishAuthorizationWithCredential:(id)arg1 error:(id)arg2;
- (void)_cancelAuthorization;
- (id)debugDescription;
- (void)cancelAuthorization;
- (void)beginAuthorizationWithParameters:(id)arg1;
- (void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (void)beginAuthorizationWithURL:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)debugHintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)performBlockOnDelegateQueue:(CDUnknownBlockType)arg1;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain) SOAuthorizationRequestParametersCore *requestParametersCore;
- (id)realms;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginBase.h>

#import "HMDRemoteLoginReceiverAuthenticationDelegate.h"

@class HMDRemoteLoginReceiverSession, NSString;

@interface HMDRemoteLoginReceiver : HMDRemoteLoginBase <HMDRemoteLoginReceiverAuthenticationDelegate>
{
    HMDRemoteLoginReceiverSession *_loginSession;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDRemoteLoginReceiverSession *loginSession; // @synthesize loginSession=_loginSession;
- (void)didCompleteAuthentication:(id)arg1 response:(id)arg2;
- (void)_callCompletion:(id)arg1;
- (void)_auditLoggedInAccountFor:(id)arg1;
- (void)auditLoggedInAccountFor:(id)arg1;
- (void)auditLoggedInAccount;
- (void)_handleSignoutRequest:(id)arg1;
- (void)_authenticate:(id)arg1 message:(id)arg2;
- (void)_handleProxyAuthenticationRequest:(id)arg1;
- (void)_handleProxyDeviceRequest:(id)arg1;
- (void)_handleCompanionAuthenticationRequest:(id)arg1;
- (void)registerForMessages;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


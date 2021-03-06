//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/MBSetupAssistantDelegateConfiguration-Protocol.h>

@class CKStoreClient;

@interface SetupAssistantPlugin : NSObject <MBSetupAssistantDelegateConfiguration>
{
    CKStoreClient *_storeClient;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
- (void)_authenticateUsername:(id)arg1 password:(id)arg2 canMakeActive:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_addUnauthenticatedAccountWithSetupResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)terminateSetupCompletion;
- (void)completeSetupWithResponse:(id)arg1 account:(id)arg2 store:(id)arg3 context:(long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)delegateAccountInformation;
- (id)delegateSetupRequest;
- (id)delegateIdentifier;
- (id)initWithStoreClient:(id)arg1;

@end


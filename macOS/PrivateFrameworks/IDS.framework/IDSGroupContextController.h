//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSGroupContextNotifyingObserverDelegate.h"
#import "IDSTransactionLogTaskHandlerDelegate.h"

@class CUTPromiseSeal, NSObject<OS_dispatch_queue>, NSString;

@interface IDSGroupContextController : NSObject <IDSTransactionLogTaskHandlerDelegate, IDSGroupContextNotifyingObserverDelegate>
{
    id <IDSGroupContextControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CUTPromiseSeal *_seal;
    NSString *_serviceName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) CUTPromiseSeal *seal; // @synthesize seal=_seal;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) id <IDSGroupContextControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_contentWithCompletion:(CDUnknownBlockType)arg1;
- (void)qGroupContextWithDeviceIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)qSetupSeal;
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didCacheGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didCreateGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)taskHandler:(id)arg1 accountInfoForAliases:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)persistedTokenForTaskHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)taskHandler:(id)arg1 persistToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)taskHandler:(id)arg1 messagesFromToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)taskHandler:(id)arg1 participantsWithDestinations:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)taskHandler:(id)arg1 groupsWithGroupIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scheduleTransactionLogTask:(id)arg1;
- (void)groupContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


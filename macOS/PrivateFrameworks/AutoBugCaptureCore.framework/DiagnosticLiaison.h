//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSCrossDeviceTransportEndpoint.h"

@class NSObject<OS_dispatch_queue>, NSString, PrimaryInterfaceUtils;

__attribute__((visibility("hidden")))
@interface DiagnosticLiaison : NSObject <IDSCrossDeviceTransportEndpoint>
{
    PrimaryInterfaceUtils *_interfaceUtils;
    id <DiagnosticLiaisonDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <DiagnosticLiaisonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkForUIImpactScenarioForCase:(id)arg1;
- (void)processPayloadVersionTwoFromIDSTransport:(id)arg1 incomingTime:(id)arg2;
- (void)processPayloadVersionOneFromIDSTransport:(id)arg1 incomingTime:(id)arg2;
- (void)processPayloadFromIDSTransport:(id)arg1 incomingTime:(id)arg2;
- (id)abcPayloadForIDSTransport:(BOOL)arg1;
- (id)remoteCasePayloadForIDSTransport:(id)arg1 groupID:(id)arg2;
- (id)basicSignatureFrom:(id)arg1;
- (void)messageWithIdentifierHasBeenDelivered:(id)arg1;
- (void)messageWithIdentifier:(id)arg1 didSendWithSuccess:(BOOL)arg2 error:(id)arg3;
- (void)messageReceivedFromIDS:(id)arg1;
- (void)residentDevicesIDSIdentifiersWithReply:(CDUnknownBlockType)arg1;
- (void)remotelyDisableAutoBugCapture:(CDUnknownBlockType)arg1;
- (void)remotelyEnableAutoBugCapture:(CDUnknownBlockType)arg1;
- (void)sendPayloadToHomeKitRelays:(id)arg1 additionalPredicate:(id)arg2 toEndpoint:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)remotelyTriggerSessionForSignature:(id)arg1 groupIdentifier:(id)arg2 event:(id)arg3 queue:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)remotelyTriggerSessionWithSignature:(id)arg1 forDestinations:(id)arg2 groupIdentifier:(id)arg3 validFor:(double)arg4 queue:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)startRemotelyTriggeredSessionForSignature:(id)arg1 groupIdentifier:(id)arg2 events:(id)arg3;
- (id)caseSignatureForRemoteSignature:(id)arg1 groupIdentifier:(id)arg2;
- (void)unregisterAllTransports:(CDUnknownBlockType)arg1;
- (void)unregisterAllTransportsSync;
- (void)registerAutoBugCaptureTransports:(CDUnknownBlockType)arg1;
- (void)registerAdministrativeTransports;
- (id)idsTransport;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


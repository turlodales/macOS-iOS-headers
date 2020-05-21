//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CXProviderHostProtocol.h"
#import "CXProviderVendorProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CXCallSource : NSObject <CXProviderHostProtocol, CXProviderVendorProtocol>
{
    BOOL _connected;
    id <CXCallSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property(nonatomic) __weak id <CXCallSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)handleAudioSessionActivationStateChangedTo:(BOOL)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (void)actionCompleted:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)actionCompleted:(id)arg1;
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (void)reportAudioFinishedForCallWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (void)reportCallWithUUID:(id)arg1 updated:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)registerWithConfiguration:(id)arg1;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isPermittedToUseBluetoothAccessories) BOOL permittedToUseBluetoothAccessories;
@property(readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property(readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL permittedToUsePublicAPI;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, copy, nonatomic) NSURL *bundleURL;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) id <CXProviderVendorProtocol> vendorProtocolDelegate;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


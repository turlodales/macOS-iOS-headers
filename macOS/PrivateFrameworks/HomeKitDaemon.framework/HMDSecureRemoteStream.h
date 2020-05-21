//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFMessageTransport.h"

#import "HMFLogging.h"
#import "HMFObject.h"

@class HMDAWDRemoteSessionMetric, HMDDevice, HMDSecureRemoteStreamInternal, HMDUser, HMFPairingIdentity, NSArray, NSDate, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDSecureRemoteStream : HMFMessageTransport <HMFLogging, HMFObject>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _open;
    BOOL _idle;
    BOOL _supportsSharedIdentities;
    long long _qualityOfService;
    NSNumber *_maximumRemoteStreams;
    NSDate *_lastActivity;
    HMDDevice *_peerDevice;
    long long _role;
    NSUUID *_sessionID;
    HMDUser *_peer;
    HMFPairingIdentity *_peerIdentity;
    HMDSecureRemoteStreamInternal *_remoteSession;
    HMDDevice *_currentDevice;
    HMDAWDRemoteSessionMetric *_metric;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDAWDRemoteSessionMetric *metric; // @synthesize metric=_metric;
@property(nonatomic) BOOL supportsSharedIdentities; // @synthesize supportsSharedIdentities=_supportsSharedIdentities;
@property(readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(retain, nonatomic) HMDSecureRemoteStreamInternal *remoteSession; // @synthesize remoteSession=_remoteSession;
@property(retain, nonatomic) HMFPairingIdentity *peerIdentity; // @synthesize peerIdentity=_peerIdentity;
@property(retain, nonatomic) HMDUser *peer; // @synthesize peer=_peer;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) long long role; // @synthesize role=_role;
- (id)logIdentifier;
- (void)__handleDeviceRemovedFromAccount:(id)arg1;
- (void)__handleAccountRemovedFromRegistry:(id)arg1;
- (void)__handleRemovedIdentity:(id)arg1;
- (void)handleSecureMessage:(id)arg1 fromTransport:(id)arg2 logEventSession:(id)arg3;
- (void)handleSecureMessage:(id)arg1 fromTransport:(id)arg2;
- (void)handleCompletedMessage:(id)arg1 options:(id)arg2 responsePayload:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)_closeWithError:(id)arg1;
- (void)closedWithError:(id)arg1;
- (void)_configureWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startAndInvokeOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSDate *lastActivity; // @synthesize lastActivity=_lastActivity;
- (void)setIdle:(BOOL)arg1;
@property(readonly, getter=isIdle) BOOL idle; // @synthesize idle=_idle;
@property(readonly, getter=isAuthenticated) BOOL authenticated;
- (void)setOpen:(BOOL)arg1;
@property(readonly, getter=isOpen) BOOL open; // @synthesize open=_open;
- (void)setMaximumRemoteStreams:(id)arg1;
@property(readonly, copy) NSNumber *maximumRemoteStreams; // @synthesize maximumRemoteStreams=_maximumRemoteStreams;
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(retain, nonatomic) HMDDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)dealloc;
- (id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 clientMode:(BOOL)arg3 sessionID:(id)arg4;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly) Class superclass;

@end


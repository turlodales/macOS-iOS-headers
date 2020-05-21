//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CATNetworkReachabilityDelegate.h"
#import "CRKClassSessionBeaconBrowserDelegate.h"
#import "CRKSessionDelegate.h"

@class CATNetworkReachability, CRKClassSessionBeaconBrowser, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface CRKClassSessionBrowser : NSObject <CRKSessionDelegate, CRKClassSessionBeaconBrowserDelegate, CATNetworkReachabilityDelegate>
{
    NSMutableDictionary *mClassSessionsByIdentifier;
    NSMutableArray *mInRangeClassSessions;
    NSMutableDictionary *mInvitationSessionsByEndpoint;
    CRKClassSessionBeaconBrowser *mBeaconBrowser;
    CATNetworkReachability *mNetworkReachability;
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountBySessionIdentifier;
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountByInviteSessionEndpoint;
    NSMapTable *mWhitelistedEndpointsBySessionClass;
    BOOL _allowInvitationSessions;
    BOOL _allowUnenrolledSessions;
    id <CRKClassSessionBrowserDelegate> _delegate;
    id <CRKInvitationSessionBrowserDelegate> _invitationSessionDelegate;
    NSSet *_organizationUUIDs;
    NSSet *_enrolledControlGroupIdentifiers;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL allowUnenrolledSessions; // @synthesize allowUnenrolledSessions=_allowUnenrolledSessions;
@property(nonatomic) BOOL allowInvitationSessions; // @synthesize allowInvitationSessions=_allowInvitationSessions;
@property(copy, nonatomic) NSSet *enrolledControlGroupIdentifiers; // @synthesize enrolledControlGroupIdentifiers=_enrolledControlGroupIdentifiers;
@property(copy, nonatomic) NSSet *organizationUUIDs; // @synthesize organizationUUIDs=_organizationUUIDs;
@property(nonatomic) __weak id <CRKInvitationSessionBrowserDelegate> invitationSessionDelegate; // @synthesize invitationSessionDelegate=_invitationSessionDelegate;
@property(nonatomic) __weak id <CRKClassSessionBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)delegateDidRemoveInvitationSession:(id)arg1;
- (void)delegateLostConnectionToInvitationSession:(id)arg1;
- (void)delegateDidFindInvitationSession:(id)arg1 transport:(id)arg2;
- (id)delegateNeedsClientIdentityForInvitationSessionWithEndpoint:(id)arg1;
- (void)delegateInRangeClassSessionsDidChange;
- (void)delegateDidRemoveClassSession:(id)arg1;
- (void)delegateLostConnectionToClassSession:(id)arg1;
- (void)delegateDidFindClassSession:(id)arg1 transport:(id)arg2;
- (void)delegateClassSessionDidBecomeNotConnectable:(id)arg1;
- (void)delegateClassSessionDidBecomeConnectable:(id)arg1;
- (id)delegateNeedsTrustedAnchorCertificatesForGroup:(id)arg1;
- (id)delegateNeedsClientIdentityForGroup:(id)arg1;
- (void)delegateDidFailWithError:(id)arg1;
- (void)updateConnectedSessions;
- (id)browserStateDictionary;
- (id)stateDictionariesByClassSessionIdentifierString;
- (void)updateRequiresBeaconFlagForSession:(id)arg1;
- (void)removeInRangeClassSession:(id)arg1;
- (void)addInRangeClassSession:(id)arg1;
- (BOOL)isEndpointWhitelisted:(id)arg1 forSessionClass:(Class)arg2;
- (void)dewhitelistEndpoint:(id)arg1 forSessionClass:(Class)arg2;
- (void)whitelistEndpointAndInvalidateNonWhitelistedSessionsOnSameHost:(id)arg1 forSessionClass:(Class)arg2;
- (void)assertPort:(unsigned short)arg1 canBeWhitelistedForHost:(id)arg2 sessionClass:(Class)arg3;
- (id)sessionsForClass:(Class)arg1;
- (void)reachabilityDidChange:(id)arg1;
- (void)beaconBrowser:(id)arg1 didFindBeaconForInvitationSessionWithEndpoint:(id)arg2;
- (void)beaconBrowser:(id)arg1 didFindBeaconForClassSession:(id)arg2 flags:(unsigned short)arg3;
- (void)beaconBrowser:(id)arg1 didFailWithError:(id)arg2;
- (void)sessionDidInvalidate:(id)arg1;
- (void)sessionDidLoseBeacon:(id)arg1;
- (void)session:(id)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
- (void)sessionDidDisconnect:(id)arg1;
- (void)session:(id)arg1 didConnectWithTransport:(id)arg2;
- (void)sessionDidBecomeNotConnectable:(id)arg1;
- (void)sessionDidBecomeConnectable:(id)arg1;
- (id)trustedAnchorCertificatesForSession:(id)arg1;
- (id)clientIdentityForSession:(id)arg1;
@property(readonly, nonatomic, getter=isBrowsing) BOOL browsing;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)releaseConnectWithoutBeaconAssertionForInvitationSessionWithEndpoint:(id)arg1;
- (void)acquireConnectWithoutBeaconAssertionForInvitationSessionWithEndpoint:(id)arg1;
- (void)releaseConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg1;
- (void)acquireConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg1;
- (void)lostConnectionToInvitationSessionWithEndpoint:(id)arg1;
- (void)invitationSessionWithEndpointInvalidated:(id)arg1;
- (BOOL)hasConnectionToClassWithIdentifier:(id)arg1;
- (void)lostConnectionToClassSession:(id)arg1;
- (void)classSessionRejected:(id)arg1;
- (void)classSessionInvalidated:(id)arg1;
- (void)connectToClassSessionWithIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


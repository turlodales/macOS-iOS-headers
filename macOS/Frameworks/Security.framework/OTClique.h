//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, OTConfigurationContext;

@interface OTClique : NSObject
{
    NSString *_cliqueMemberIdentifier;
    OTConfigurationContext *_ctx;
    NSMutableDictionary *_defaults;
}

+ (id)resetProtectedData:(id)arg1 error:(id *)arg2;
+ (long long)getCDPStatus:(id)arg1 error:(id *)arg2;
+ (BOOL)setCDPEnabled:(id)arg1 error:(id *)arg2;
+ (void)recoverOctagonUsingData:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)setNewRecoveryKeyWithData:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (id)recoverWithContextData:(id)arg1 bottleID:(id)arg2 escrowedEntropy:(id)arg3 error:(id *)arg4;
+ (id)findOptimalBottleIDsWithContextData:(id)arg1 error:(id *)arg2;
+ (id)performEscrowRecoveryWithContextData:(id)arg1 escrowArguments:(id)arg2 error:(id *)arg3;
+ (id)newFriendsWithContextData:(id)arg1 resetReason:(long long)arg2 error:(id *)arg3;
+ (id)newFriendsWithContextData:(id)arg1 error:(id *)arg2;
+ (BOOL)platformSupportsSOS;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) OTConfigurationContext *ctx; // @synthesize ctx=_ctx;
@property(copy, nonatomic) NSString *cliqueMemberIdentifier; // @synthesize cliqueMemberIdentifier=_cliqueMemberIdentifier;
- (void)performedSuccessfulCDPStateMachineRun:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)performedFailureCDPStateMachineRun:(id)arg1 error:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)waitForOctagonUpgrade:(id *)arg1;
- (void)performedCDPStateMachineRun:(id)arg1 success:(BOOL)arg2 error:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)fetchEscrowContents:(CDUnknownBlockType)arg1;
- (BOOL)accountUserKeyAvailable;
- (BOOL)requestToJoinCircle:(id *)arg1;
- (BOOL)peersHaveViewsEnabled:(id)arg1 error:(id *)arg2;
- (id)copyPeerPeerInfo:(id *)arg1;
- (BOOL)tryUserCredentialsAndDSID:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (BOOL)setUserCredentialsAndDSID:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (BOOL)viewSet:(id)arg1 disabledViews:(id)arg2;
- (id)copyViewUnawarePeerInfo:(id *)arg1;
- (BOOL)waitForInitialSync:(id *)arg1;
- (BOOL)isLastFriend:(id *)arg1;
- (BOOL)safariPasswordSyncingEnabled:(id *)arg1;
- (BOOL)joinAfterRestore:(id *)arg1;
- (id)peerDeviceNamesByPeerID:(id *)arg1;
- (BOOL)leaveClique:(id *)arg1;
- (BOOL)removeFriendsInClique:(id)arg1 error:(id *)arg2;
- (long long)cachedCliqueStatus:(BOOL)arg1 error:(id *)arg2;
- (long long)fetchCliqueStatus:(id *)arg1;
- (long long)fetchCliqueStatus:(id)arg1 error:(id *)arg2;
- (long long)_fetchCliqueStatus:(id)arg1 error:(id *)arg2;
- (id)setupPairingChannelAsAcceptor:(id)arg1 error:(id *)arg2;
- (id)setupPairingChannelAsAcceptor:(id)arg1;
- (id)setupPairingChannelAsInitator:(id)arg1 error:(id *)arg2;
- (id)setupPairingChannelAsInitiator:(id)arg1;
- (BOOL)resetAndEstablish:(long long)arg1 error:(id *)arg2;
- (BOOL)establish:(id *)arg1;
- (id)makeOTControl:(id *)arg1;
- (id)initWithContextData:(id)arg1;
- (id)initWithContextData:(id)arg1 error:(id *)arg2;
- (void)removePairingDefault;
- (void)setPairingDefault:(BOOL)arg1;
- (BOOL)isOctagonPairingEnabled;

@end


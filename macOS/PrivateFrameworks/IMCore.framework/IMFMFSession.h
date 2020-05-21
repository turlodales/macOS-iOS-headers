//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMFSessionDelegate.h"

@class FMFDevice, FMFSession, NSString;

@interface IMFMFSession : NSObject <FMFSessionDelegate>
{
    NSString *_establishingAccountID;
    FMFSession *_session;
    FMFDevice *_activeDevice;
    unsigned long long _fmfProvisionedState;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long fmfProvisionedState; // @synthesize fmfProvisionedState=_fmfProvisionedState;
@property(retain, nonatomic) NSString *establishingAccountID; // @synthesize establishingAccountID=_establishingAccountID;
@property(retain, nonatomic) FMFDevice *activeDevice; // @synthesize activeDevice=_activeDevice;
@property(retain, nonatomic) FMFSession *session; // @synthesize session=_session;
- (id)fmfGroupIdGroup;
- (id)fmfGroupIdOneToOne;
- (Class)__FMFSessionClass;
- (void)_postNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_postRelationshipStatusDidChangeNotificationWithHandle:(id)arg1;
- (id)_callerIDForChat:(id)arg1;
- (void)_stopSharingWithFMFHandles:(id)arg1 inChat:(id)arg2;
- (void)_startSharingWithFMFHandles:(id)arg1 inChat:(id)arg2 untilDate:(id)arg3;
- (id)_bestAccountForAddresses:(id)arg1;
- (void)didUpdateHidingStatus:(BOOL)arg1;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didStartAbilityToGetLocationForHandle:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)friendshipWasRemoved:(id)arg1;
- (void)friendshipRequestReceived:(id)arg1;
- (void)didReceiveLocation:(id)arg1;
- (void)makeThisDeviceActiveDevice;
- (void)_updateActiveDevice;
- (id)timedOfferExpirationForChat:(id)arg1;
- (BOOL)allChatParticipantsFollowingMyLocation:(id)arg1;
- (BOOL)chatHasParticipantsFollowingMyLocation:(id)arg1;
- (BOOL)fmfHandleIsFollowingMyLocation:(id)arg1;
- (BOOL)handleIsFollowingMyLocation:(id)arg1;
- (BOOL)allChatParticipantsSharingLocationWithMe:(id)arg1;
- (BOOL)chatHasSiblingParticipantsSharingLocationWithMe:(id)arg1;
- (BOOL)chatHasParticipantsSharingLocationWithMe:(id)arg1;
- (BOOL)fmfHandleIsSharingLocationWithMe:(id)arg1;
- (BOOL)handleIsSharingLocationWithMe:(id)arg1;
- (void)refreshLocationForChat:(id)arg1;
- (void)refreshLocationForHandle:(id)arg1 inChat:(id)arg2;
- (id)locationForHandleOrSibling:(id)arg1;
- (id)locationForFMFHandle:(id)arg1;
- (id)locationForHandle:(id)arg1;
- (void)stopSharingWithChat:(id)arg1;
- (void)startSharingWithChat:(id)arg1 untilDate:(id)arg2;
- (void)stopSharingWithHandle:(id)arg1 inChat:(id)arg2;
- (void)startSharingWithHandle:(id)arg1 inChat:(id)arg2 untilDate:(id)arg3;
- (void)stopTrackingLocationForChat:(id)arg1;
- (void)stopTrackingLocationForHandle:(id)arg1;
- (void)startTrackingLocationForChat:(id)arg1;
- (void)startTrackingLocationForHandle:(id)arg1;
- (void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (id)allSiblingFMFHandlesForChat:(id)arg1;
- (id)fmfHandlesForChat:(id)arg1;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)_accountStore;
- (BOOL)imIsProvisionedForLocationSharing;
@property(readonly, nonatomic) BOOL disableLocationSharing;
@property(readonly, nonatomic) BOOL restrictLocationSharing;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


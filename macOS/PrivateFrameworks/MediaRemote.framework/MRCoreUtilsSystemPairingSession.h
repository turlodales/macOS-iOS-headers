//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRCoreUtilsPairingSession.h>

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession
{
}

+ (id)globalPairingQueue;
+ (id)pairingManager;
+ (BOOL)systemPairingAvailable;
- (id)updateMediaRemotePairedDevice:(id)arg1;
- (id)pairedPeerFromPeerDevice:(void *)arg1;
- (void *)_createPeerDeviceFromPairedPeer:(id)arg1;
- (id)mediaRemotePairedDevices;
- (id)pairedPeerDevices;
- (id)pairedPeerDevice;
- (id)updatePeer;
- (id)removePeer;
- (id)addPeer;
- (BOOL)shouldAutoRetryPairingExchange:(id)arg1;
- (BOOL)shouldRetry;
- (id)initializePairingSession:(struct PairingSessionPrivate *)arg1;

@end


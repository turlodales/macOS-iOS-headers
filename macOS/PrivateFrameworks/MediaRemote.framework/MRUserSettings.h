//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSUserDefaults;

@interface MRUserSettings : NSObject
{
    NSUserDefaults *_userDefaults;
    BOOL _externalDevicePairingAllowed;
}

+ (id)currentSettings;
- (void).cxx_destruct;
@property(nonatomic, getter=isExternalDevicePairingAllowed) BOOL externalDevicePairingAllowed; // @synthesize externalDevicePairingAllowed=_externalDevicePairingAllowed;
- (void)_removeValueForKey:(id)arg1;
- (long long)_integerValueForKey:(id)arg1 usingDefaultValue:(long long)arg2;
- (double)_doubleValueForKey:(id)arg1 usingDefaultValue:(double)arg2;
- (BOOL)_boolValueForKey:(id)arg1 usingDefaultValue:(BOOL)arg2;
- (void)setLocalLastPlayingDate:(id)arg1;
- (id)localLastPlayingDate;
- (void)setLocalPlaybackState:(unsigned int)arg1;
- (unsigned int)localPlaybackState;
@property(readonly, nonatomic) double activeSystemEndpointStartupDelayToAllowAllPreviousClientsTimeToInitializeInterval;
- (id)defaultSupportedCommandsData;
- (void)updateDefaultSupportedCommandsData:(id)arg1 forClient:(id)arg2;
- (id)defaultSupportedCommandsDataForClient:(id)arg1;
@property(readonly, nonatomic) BOOL connectToAllEndpointsWhenInProximityToAnyDevice;
@property(readonly, nonatomic) double sendPlaybackSessionUpdateToCompanionCoalesceInterval;
@property(readonly, nonatomic) double lastPlayingDeviceThresholdInterval;
@property(readonly, nonatomic) BOOL sendLastPlayingDeviceToHome;
@property(readonly, nonatomic) BOOL supportLastPlayingDevice;
@property(readonly, nonatomic) BOOL supportMigration;
@property(readonly, nonatomic) BOOL supportProximityMigration;
@property(readonly, nonatomic) double launchApplicationTimeoutInterval;
@property(readonly, nonatomic) double endpointRecentlyUserSelectedInterval;
@property(readonly, nonatomic) double mediaRecentlyPlayedInterval;
@property(readonly, nonatomic) double deviceRecentlyUsedInterval;
@property(readonly, nonatomic) double discoverEndpointTimeoutInterval;
@property(readonly, nonatomic) BOOL connectToUserSelectedEndpoint;
@property(readonly, nonatomic) BOOL connectToAllEndpointsWhenAnyEndpointBeginsPlayback;
@property(readonly, nonatomic) BOOL connectToEndpointWhenBeginsPlayback;
@property(readonly, nonatomic) BOOL useProactiveEndpoint;
@property(readonly, nonatomic) BOOL needNowPlayingForegroundState;
@property(readonly, nonatomic) BOOL takelockScreenAssertion;
@property(readonly, nonatomic) BOOL computeNowPlayingApplication;
@property(readonly, nonatomic) double nowPlayingApplicationTimeout;
@property(readonly, nonatomic) double queuedCommandsTimeoutInterval;
@property(retain, nonatomic) NSArray *connectedClientPIDs;
@property(readonly, nonatomic) BOOL useGenericTransportForHostedEndpoints;
@property(readonly, nonatomic) BOOL useSystemAudioContextForAirPlayTransport;
@property(readonly, nonatomic) double transactionWaitDurationOnNetworkSend;
@property(readonly, nonatomic) double transactionWaitDurationOnXpcSend;
@property(readonly, nonatomic) double transactionWaitDurationOnOutOfMemory;
@property(readonly, nonatomic) long long maxTransactionMemorySize;
@property(readonly, nonatomic) BOOL useExternalDeviceSystemPairing;
@property(readonly, nonatomic) double airPlayOutputContextInitTimeoutDuration;
@property(readonly, nonatomic) double broadcastCommandWaitDuration;
@property(readonly, nonatomic) double bluetoothDeviceResumeDuration;
@property(readonly, nonatomic) double externalDeviceSleepAssertionOnClientConnectDuration;
@property(readonly, nonatomic) double externalDeviceDisconnectSleepDuration;
@property(readonly, nonatomic) double externalDeviceDisconnectWaitDuration;
@property(readonly, nonatomic) double externalDeviceNowPlayingInfoArtworkCoalesceDuration;
@property(readonly, nonatomic) double externalDeviceNowPlayingInfoCoalesceDuration;
@property(readonly, nonatomic) double externalDeviceTimeoutDuration;
@property(readonly, nonatomic) long long externalDeviceSocketQOSLevel;
@property(readonly, nonatomic) BOOL hasExternalDeviceSocketQOSLevelSet;
@property(readonly, nonatomic) BOOL shouldLogArtwork;
@property(readonly, nonatomic) BOOL shouldLogPairingSetupCode;
@property(readonly, nonatomic) BOOL shouldInitializeRapportService;
@property(readonly, nonatomic) BOOL shouldInitializeGenericBonjourService;
@property(readonly, nonatomic) BOOL shouldInitializeTelevisionBonjourService;
@property(readonly, nonatomic) BOOL useDebugAVRouteWithoutVolumeControl;
@property(readonly, nonatomic) BOOL useNoDelayOptionForExternalDeviceSockets;
@property(readonly, nonatomic) BOOL usePeerToPeerExternalDeviceConnections;
- (id)init;

@end


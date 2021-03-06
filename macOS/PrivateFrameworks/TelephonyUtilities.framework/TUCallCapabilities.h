//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TUCallCapabilities : NSObject
{
}

+ (id)debugDescription;
+ (void)_sendNotificationsAndCallbacksAfterRunningBlock:(CDUnknownBlockType)arg1;
+ (void)removeDelegate:(id)arg1;
+ (void)addDelegate:(id)arg1 queue:(id)arg2;
+ (id)client;
+ (id)_senderIdentityCapabilitiesByUUID;
+ (id)senderIdentityCapabilitiesWithUUID:(id)arg1;
+ (id)senderIdentityCapabilities;
+ (BOOL)isEmergencyCallbackPossible;
+ (void)endEmergencyCallbackMode;
+ (BOOL)isEmergencyCallbackModeEnabled;
+ (void)cancelPinRequestFromPrimaryDevice;
+ (void)requestPinFromPrimaryDevice;
+ (BOOL)supportsFaceTimeVideoRelayCalling;
+ (BOOL)supportsFaceTimeAudioRelayCalling;
+ (BOOL)supportsTelephonyRelayCalling;
+ (int)relayCallingAvailability;
+ (id)outgoingRelayCallerID;
+ (void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2;
+ (BOOL)isRelayCallingEnabledForDeviceWithID:(id)arg1;
+ (BOOL)areRelayCallingFeaturesEnabled;
+ (void)setRelayCallingEnabled:(BOOL)arg1;
+ (BOOL)isRelayCallingEnabled;
+ (BOOL)supportsRelayCalling;
+ (BOOL)supportsRelayingToOtherDevices;
+ (void)invalidateAndRefreshThumperCallingProvisioningURL;
+ (void)invalidateAndRefreshWiFiCallingProvisioningURL;
+ (void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(BOOL)arg1;
+ (void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;
+ (void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2;
+ (BOOL)isThumperCallingAllowedOnDefaultPairedSecondaryDevice;
+ (BOOL)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg1;
+ (void)setThumperCallingEnabled:(BOOL)arg1;
+ (BOOL)isThumperCallingCurrentlyAvailable;
+ (id)thumperCallingCapabilityInfo;
+ (BOOL)isThumperCallingEnabled;
+ (BOOL)isThumperCallingAllowedForCurrentDevice;
+ (BOOL)supportsThumperCallingOverCellularData;
+ (BOOL)supportsThumperCalling;
+ (id)cloudCallingDevices;
+ (BOOL)accountsSupportSecondaryCalling;
+ (BOOL)accountsMatchForSecondaryCalling;
+ (BOOL)isVoLTECallingCurrentlyAvailable;
+ (id)voLTECallingCapabilityInfo;
+ (void)setVoLTECallingEnabled:(BOOL)arg1;
+ (BOOL)isVoLTECallingEnabled;
+ (BOOL)supportsVoLTECalling;
+ (BOOL)supportsWiFiEmergencyCalling;
+ (BOOL)isWiFiCallingCurrentlyAvailable;
+ (id)wiFiCallingCapabilityInfo;
+ (void)setWiFiCallingRoamingEnabled:(BOOL)arg1;
+ (BOOL)isWiFiCallingRoamingEnabled;
+ (void)setWiFiCallingEnabled:(BOOL)arg1;
+ (BOOL)isWiFiCallingEnabled;
+ (BOOL)supportsWiFiCalling;
+ (BOOL)isCSCallingCurrentlyAvailable;
+ (BOOL)areCTCapabilitiesValid;
+ (BOOL)supportsSimultaneousVoiceAndData;
+ (BOOL)isFaceTimeVideoAvailable;
+ (BOOL)isFaceTimeAudioAvailable;
+ (BOOL)isDirectFaceTimeVideoCallingCurrentlyAvailable;
+ (BOOL)isDirectFaceTimeAudioCallingCurrentlyAvailable;
+ (BOOL)isDirectTelephonyCallingCurrentlyAvailable;
+ (BOOL)supportsHostingFaceTimeVideoCalls;
+ (BOOL)supportsHostingFaceTimeAudioCalls;
+ (BOOL)supportsHostingTelephonyCalls;
+ (BOOL)supportsDisplayingFaceTimeVideoCalls;
+ (BOOL)supportsDisplayingFaceTimeAudioCalls;
+ (BOOL)supportsDisplayingTelephonyCalls;
+ (int)faceTimeVideoCallSupport;
+ (int)faceTimeAudioCallSupport;
+ (int)telephonyCallSupport;
+ (BOOL)supportsBasebandCalling;
+ (BOOL)supportsPrimaryCalling;
+ (BOOL)canAttemptEmergencyCallsWithoutCellularConnectionWithUUID:(id)arg1;
+ (BOOL)canAttemptEmergencyCallsWithoutCellularConnection;
+ (BOOL)canAttemptTelephonyCallsWithoutCellularConnectionWithSenderIdentityCapabilities:(id)arg1;
+ (BOOL)canAttemptTelephonyCallsWithoutCellularConnection;
+ (BOOL)supportsFaceTimeVideoCalls;
+ (BOOL)supportsFaceTimeAudioCalls;
+ (BOOL)supportsTelephonyCalls;
+ (void)initializeCachedValues;

@end


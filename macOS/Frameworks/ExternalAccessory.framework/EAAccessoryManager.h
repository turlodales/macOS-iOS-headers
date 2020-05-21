//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString, NSTimer;

@interface EAAccessoryManager : NSObject
{
    NSMutableArray *_connectedAccessories;
    NSMutableArray *_sequesteredAccessories;
    NSString *_selectedBluetoothAddress;
    CDUnknownBlockType _pickerCompletion;
    BOOL _sequesterNewAccessories;
    NSTimer *_pickerTimer;
    NSRecursiveLock *_pickerLock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

+ (id)accessoryDictionaryForLogging:(id)arg1;
+ (BOOL)isLoggingEnabled;
+ (void)accessibilityStopListening;
+ (void)accessibilityStartListening;
+ (void)registerCapabilities:(unsigned int)arg1;
+ (id)sharedAccessoryManager;
- (void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2 forUUID:(id)arg3;
- (id)currentVehicleInformation:(id)arg1;
- (void)requestIAPAccessoryWiFiCredentials:(id)arg1;
- (id)authCertSerialNumberForLegacyConnectionID:(unsigned int)arg1;
- (id)authCertForLegacyConnectionID:(unsigned int)arg1;
- (BOOL)processIDIsUsingAccessory:(struct __CFString *)arg1;
- (void)stopLocationForConnectedAccessories;
- (void)sendNMEAFilterList:(id)arg1 forUUID:(id)arg2;
- (void)startLocationForConnectedAccessories;
- (void)openSessionFromAppToAccessory:(id)arg1;
- (void)openSessionFromAccessoryToApp:(id)arg1;
- (void)sendOutgoingEAData:(id)arg1 forSessionUUID:(id)arg2;
- (void)saveEASession:(id)arg1 forEASessionUUID:(id)arg2;
- (void)resumeEASessionData:(id)arg1;
- (void)closeInputStreamForEASessionUUID:(id)arg1;
- (void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)accessoryClosedEASession:(id)arg1;
- (void)closeEASessionForEASessionUUID:(id)arg1;
- (void)createEASessionForProtocol:(id)arg1 accessoryUUID:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)stopIPAccessoryDiscovery;
- (void)startIPAccessoryDiscovery;
- (void)disconnectIPAccessory:(id)arg1;
- (void)initiateConnectionToIPAccessory:(id)arg1;
- (BOOL)destinationInformation:(id)arg1 forAccessoryUUID:(id)arg2;
- (void)pointOfInterestSelection:(id)arg1;
- (void)sendGPRMCDataStatus:(BOOL)arg1 ValueV:(BOOL)arg2 ValueX:(BOOL)arg3 forUUID:(id)arg4;
- (void)setAreLocationAccessoriesEnabled:(BOOL)arg1;
- (BOOL)areLocationAccessoriesEnabled;
- (void)accessibilitySystemPropertyRequest:(id)arg1;
- (void)accessibilitySystemPropertyChange:(id)arg1;
- (void)accessibilityItemPropertyRequest:(id)arg1;
- (void)accessibilityContextChange:(id)arg1;
- (void)accessibilityAction:(id)arg1;
- (void)setShouldAllowCppRuntime:(BOOL)arg1;
- (BOOL)shouldAllowCppRuntime;
- (void)setShouldAllowInternalProtocols:(BOOL)arg1;
- (BOOL)shouldAllowInternalProtocols;
- (id)_connectedAccessories;
- (BOOL)appDeclaresProtocol:(id)arg1;
- (void)wakeAccessoryWithToken:(id)arg1;
- (void)endSession:(unsigned int)arg1 forConnectionID:(unsigned int)arg2;
- (void)openCompleteForSession:(unsigned int)arg1 connectionID:(unsigned int)arg2;
- (void)_timeSyncInfoUpdated:(id)arg1;
- (void)_handleAccessoryNotificationTimeout:(id)arg1;
- (void)_integrateSequesteredAccessories;
- (void)_cameraInfoUpdated:(id)arg1;
- (void)_vehicleDataUpdated:(id)arg1;
- (void)_gpsTimeRequested:(id)arg1;
- (void)_nmeaFilteringSupportChanged:(id)arg1;
- (void)_ephemerisURLAvailable:(id)arg1;
- (void)_locationPointDataAvailable:(id)arg1;
- (void)_locationNmeaDataAvailable:(id)arg1;
- (id)availableAccessories;
- (void)_externalAccessoryDisconnected:(id)arg1;
- (void)_OOBBTPairingCompletionStatusReceived:(id)arg1;
- (void)_pointOfInterestStatusReceived:(id)arg1;
- (void)_externalAccessoryUpdated:(id)arg1;
- (void)_externalAccessoryConnected:(id)arg1;
- (void)_externalAccessoryConnectedNotificationHandler:(id)arg1;
- (void)_removeAlliAPAccessoriesFromArray:(id)arg1 notifyClients:(BOOL)arg2;
- (void)_externalAccessoryReconnected:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_findExtraAccessoriesContainedOnlyInEA:(id)arg1;
- (id)_findExtraAccessoriesContainedOnlyIniAP:(id)arg1;
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)arg1;
- (void)unregisterForLocalNotifications;
- (void)registerForLocalNotifications;
@property(readonly, nonatomic) NSArray *connectedAccessories;
- (void)updateAccessoryInfo:(id)arg1;
- (void)vehicleStatusUpdate:(id)arg1 forAccessoryUUID:(id)arg2;
- (void)nmeaSentenceArrived:(id)arg1 forAccessoryUUID:(id)arg2;
- (void)destinationSharingStatus:(BOOL)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4;
- (void)stopDestinationSharingForUUID:(id)arg1;
- (void)startDestinationSharingForUUID:(id)arg1 options:(unsigned long long)arg2;
- (void)initialEAAccessoriesAttachedAfterClientConnection:(id)arg1;
- (void)EAAccessoryLeft:(id)arg1;
- (void)EAAccessoryArrived:(id)arg1;
- (void)dealloc;
- (id)_initFromSingletonCreationMethod;
- (id)init;

@end


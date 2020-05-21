//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLHeading, CLLocation, NSSet, NSString;

@interface CLLocationManager : NSObject
{
    id _internal;
    BOOL _allowsAlteredAccessoryLocations;
}

+ (BOOL)bundleSupported:(id)arg1;
+ (BOOL)shutdownDaemon;
+ (BOOL)dumpLogsWithMessage:(id)arg1;
+ (void)setDefaultEffectiveBundle:(id)arg1;
+ (void)setDefaultEffectiveBundleIdentifier:(id)arg1;
+ (void)setBackgroundIndicatorEnabled:(BOOL)arg1 forBundle:(id)arg2;
+ (void)setBackgroundIndicatorEnabled:(BOOL)arg1 forBundleIdentifier:(id)arg2;
+ (void)setTemporaryAuthorizationGranted:(BOOL)arg1 forBundle:(id)arg2;
+ (void)setTemporaryAuthorizationGranted:(BOOL)arg1 forBundleIdentifier:(id)arg2;
+ (void)setAuthorizationStatusByType:(int)arg1 forBundle:(id)arg2;
+ (void)setAuthorizationStatusByType:(int)arg1 forBundleIdentifier:(id)arg2;
+ (void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(BOOL)arg2 forBundleIdentifier:(id)arg3;
+ (void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(BOOL)arg2 forBundle:(id)arg3;
+ (void)setAuthorizationStatus:(BOOL)arg1 forBundle:(id)arg2;
+ (void)setAuthorizationStatus:(BOOL)arg1 forBundleIdentifier:(id)arg2;
+ (int)authorizationStatus;
+ (int)_authorizationStatus;
+ (int)authorizationStatusForBundle:(id)arg1;
+ (int)authorizationStatusForBundleIdentifier:(id)arg1;
+ (int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (id)_applyArchivedAuthorizationDecisions:(id)arg1;
+ (id)_archivedAuthorizationDecisionsWithError:(id *)arg1;
+ (id)appsUsingLocationWithInfo;
+ (BOOL)isPeerRangingAvailable;
+ (BOOL)deferredLocationUpdatesAvailable;
+ (BOOL)_checkAndExerciseAuthorizationForBundle:(id)arg1 error:(id *)arg2;
+ (BOOL)_checkAndExerciseAuthorizationForBundleID:(id)arg1 error:(id *)arg2;
+ (BOOL)mapCorrectionAvailable;
+ (BOOL)isRangingAvailable;
+ (BOOL)regionMonitoringEnabled;
+ (BOOL)regionMonitoringAvailable;
+ (BOOL)isMonitoringAvailableForClass:(Class)arg1;
+ (BOOL)significantLocationChangeMonitoringAvailable;
+ (BOOL)headingAvailable;
+ (void)setLocationServicesEnabled:(BOOL)arg1;
+ (BOOL)locationServicesEnabled:(BOOL)arg1;
+ (BOOL)locationServicesEnabled;
+ (void)resetLocationWarningsWithAuthorization:(id)arg1;
+ (void)setLocationServicesEnabled:(BOOL)arg1 withAuthorization:(id)arg2;
+ (BOOL)locationServicesCapable;
+ (id)sharedManager;
+ (void)setEntityAuthorized:(BOOL)arg1 forLocationDictionary:(id)arg2;
+ (BOOL)isEntityAuthorizedForLocationDictionary:(id)arg1;
+ (BOOL)hasUsedBackgroundLocationServices:(id)arg1;
+ (id)dateLocationLastUsedForLocationDictionary:(id)arg1;
+ (unsigned long long)activeLocationServiceTypesForLocationDictionary:(id)arg1;
+ (BOOL)isLocationActiveForLocationDictionary:(id)arg1;
+ (unsigned long long)entityClassesForLocationDictionary:(id)arg1;
+ (unsigned long long)primaryEntityClassForLocationDictionary:(id)arg1;
+ (BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned long long)arg1;
+ (void)setStatusBarIconEnabled:(BOOL)arg1 forLocationEntityClass:(unsigned long long)arg2;
@property(nonatomic) BOOL allowsAlteredAccessoryLocations; // @synthesize allowsAlteredAccessoryLocations=_allowsAlteredAccessoryLocations;
- (void)setIsActuallyAWatchKitExtension:(BOOL)arg1;
- (void)registerAsLocationClient;
@property(nonatomic, getter=isDynamicAccuracyReductionEnabled) BOOL dynamicAccuracyReductionEnabled;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
- (void)requestAlwaysAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)requestWhenInUseAuthorization;
- (void)onClientEventVehicleHeading:(id)arg1;
- (void)onClientEventVehicleSpeed:(id)arg1;
- (void)onClientEventInterrupted:(id)arg1;
- (void)onClientEventBatch:(id)arg1;
- (void)onClientEventAutopauseStatus:(id)arg1;
- (void)onDidBecomeActive:(id)arg1;
- (void)pauseLocationUpdates:(BOOL)arg1;
- (void)resumeLocationUpdates;
- (void)onClientEventRegionSetupCompleted:(id)arg1;
- (void)onClientEventRegionResponseDelayed:(id)arg1;
- (void)onClientEventPeerRangingError:(id)arg1;
- (void)onClientEventPeerRangingRequestProcessed:(id)arg1;
- (void)onClientEventPeerRanging:(id)arg1;
- (void)onClientEventRangingError:(id)arg1;
- (void)onClientEventRanging:(id)arg1;
- (void)onClientEventRegionError:(id)arg1;
- (void)onClientEventRegionState:(id)arg1;
- (void)onClientEventRegion:(id)arg1;
- (void)onClientEventError:(id)arg1;
- (void)callPlaceInferenceHandlerWithResult:(id)arg1 error:(id)arg2;
- (void)onClientEventPlaceInferenceError:(id)arg1;
- (void)onClientEventPlaceInferenceResult:(id)arg1;
- (void)onClientEventHeadingCalibration:(id)arg1;
- (void)onClientEventHeading:(id)arg1;
- (void)onClientEventLocationUnavailable:(id)arg1;
- (void)onClientEventLocation:(id)arg1;
- (void)onClientEventAuthStatus:(id)arg1;
- (void)onClientEvent:(int)arg1 supportInfo:(id)arg2;
- (void)onRangingRequestTimeout;
- (void)onLocationRequestTimeout;
- (id)technologiesInUse;
- (id)appsUsingLocationWithDetails;
- (id)appsUsingLocation;
- (void)resetApps;
- (void)stopRangingFromPeers:(id)arg1;
- (void)startRangingFromPeers:(id)arg1;
- (void)stopRangingToPeers:(id)arg1;
- (void)startRangingToPeers:(id)arg1 intervalSeconds:(unsigned long long)arg2;
- (void)respondToRangingFromPeers:(id)arg1 timeoutSeconds:(double)arg2;
- (void)requestRangingToPeers:(id)arg1 timeoutSeconds:(double)arg2;
@property(readonly, copy, nonatomic) NSSet *rangedRegions;
@property(readonly, copy, nonatomic) NSSet *rangedBeaconConstraints;
- (void)stopRangingBeaconsSatisfyingConstraint:(id)arg1;
- (void)startRangingBeaconsSatisfyingConstraint:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *monitoredRegions;
@property(readonly, nonatomic) double maximumRegionMonitoringDistance;
- (void)requestStateForRegion:(id)arg1;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2;
- (void)stopMonitoringSignificantLocationChanges;
- (void)_startMonitoringSignificantLocationChangesOfDistance:(double)arg1 withPowerBudget:(int)arg2;
- (void)startMonitoringSignificantLocationChanges;
- (void)stopTechStatusUpdates;
- (void)startTechStatusUpdates;
- (void)stopAppStatusUpdates;
- (void)startAppStatusUpdates;
- (void)onEventAppStatus;
- (void)dismissHeadingCalibrationDisplay;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
@property(readonly, copy, nonatomic) CLHeading *heading;
@property(nonatomic) int headingOrientation;
@property(nonatomic) double headingFilter;
@property(readonly, nonatomic) BOOL headingAvailable;
- (void)disallowDeferredLocationUpdates;
- (void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2;
- (void)requestLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)startUpdatingLocationWithPrompt;
- (void)markAsHavingReceivedLocation;
@property(nonatomic) long long activityType;
@property(copy, nonatomic) NSString *purpose;
@property(nonatomic) BOOL privateMode;
@property(readonly, nonatomic) struct __CLClient *internalClient;
@property(nonatomic) BOOL supportInfo;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(readonly, nonatomic) BOOL locationServicesApproved;
@property(readonly, nonatomic) BOOL locationServicesEnabled;
@property(readonly, nonatomic) BOOL locationServicesAvailable;
@property(readonly, copy, nonatomic) CLLocation *location;
@property(nonatomic) BOOL showsBackgroundLocationIndicator;
@property(nonatomic) BOOL allowsBackgroundLocationUpdates;
@property(nonatomic) BOOL pausesLocationUpdatesAutomatically;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
@property(nonatomic) __weak id <CLLocationManagerDelegate> delegate;
- (void)dealloc;
- (id)_initWithDelegate:(id)arg1 onQueue:(id)arg2;
- (id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
- (id)initWithEffectiveBundle:(id)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)init;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 silo:(id)arg4;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)_setGroundAltitudeEnabled:(BOOL)arg1;
- (BOOL)_isGroundAltitudeEnabled;
- (void)_startLeechingVisits;
- (void)stopMonitoringVisits;
- (void)startMonitoringVisits;
- (void)_fetchPlaceInferencesWithFidelityPolicy:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_updateLSLHeadingEstimation:(id)arg1;
- (void)_updateARSessionState:(unsigned long long)arg1;
- (void)_updateVIOEstimation:(id)arg1;

@end


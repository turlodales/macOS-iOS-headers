//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSFeatureAvailability.h"

@class NSObject<OS_dispatch_queue>, STManagementState;

@interface FeatureAvailability : WBSFeatureAvailability
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    STManagementState *_managementState;
    NSObject<OS_dispatch_queue> *_screenTimeUserStateQueue;
    BOOL _threadUnsafeUserSignedIntoICloud;
    BOOL _threadUnsafeSafariSyncEnabled;
    BOOL _threadUnsafeKeychainSyncEnabled;
    BOOL _threadUnsafeUserUsingManagedAppleID;
    long long _cachedScreenTimeUserState;
}

+ (void)executeBlockAfterScreenTimeUserStateDetermined:(CDUnknownBlockType)arg1;
+ (void)determineIfScreenTimeUserIsRestrictedWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (BOOL)isScreenTimeUserRestricted;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;
+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)_shouldShowChineseFeatures;
+ (id)_sharedInstance;
+ (BOOL)safariIsInRecoverySystem;
+ (BOOL)supportsCVV;
+ (BOOL)_hasSecureEnclaveCoprocessor;
+ (BOOL)isTouchIDToAutoFillEnabledInUserDefaults;
+ (BOOL)isAirDropPasswordsAvailable;
+ (BOOL)isApplePayAvailable;
+ (BOOL)isPerSitePopUpBlockingPreferenceAvailable;
+ (BOOL)isUserAllowedToToggleMiscellaneousFormsAutoFillEnabledState;
+ (BOOL)isMiscellaneousFormsAutoFillEnabled;
+ (BOOL)isUserAllowedToTogglePasswordsAutoFillEnabledState;
+ (BOOL)isPasswordAutoFillEnabled;
+ (BOOL)isUserAllowedToToggleAddressBookAutoFillEnabledState;
+ (BOOL)isAddressBookAutoFillEnabled;
+ (BOOL)canShowParsecITunesResults;
+ (BOOL)isCloudKitBookmarksAvailable;
+ (BOOL)isCloudTabsAvailable;
+ (BOOL)isUserAllowedToEditCreditCardInformation;
+ (BOOL)isUserAllowedToToggleCreditCardAutoFillEnabledState;
+ (BOOL)isCreditCardAutoFillEnabled;
+ (BOOL)isKeychainSyncEnabled;
+ (BOOL)isUserUsingManagedAppleID;
+ (BOOL)isSafariSyncEnabled;
+ (BOOL)isUserSignedIntoICloud;
+ (void)startMonitoringForAvailabilityChanges;
- (void).cxx_destruct;
@property long long cachedScreenTimeUserState; // @synthesize cachedScreenTimeUserState=_cachedScreenTimeUserState;
@property(getter=isUserUsingManagedAppleID) BOOL userUsingManagedAppleID; // @synthesize userUsingManagedAppleID=_threadUnsafeUserUsingManagedAppleID;
@property(getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled; // @synthesize keychainSyncEnabled=_threadUnsafeKeychainSyncEnabled;
@property(getter=isUserSignedIntoICloud) BOOL userSignedIntoICloud; // @synthesize userSignedIntoICloud=_threadUnsafeUserSignedIntoICloud;
- (void)_executeBlockAfterScreenTimeUserStateDetermined:(CDUnknownBlockType)arg1;
- (void)isScreenTimeUserRestrictedWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(getter=isSafariSyncEnabled) BOOL safariSyncEnabled; // @synthesize safariSyncEnabled=_threadUnsafeSafariSyncEnabled;
- (void)_updateKeychainSyncingStatus;
- (void)_iCloudServiceStatusChanged:(id)arg1;
- (void)_iCloudLoggedInStateDidChange:(id)arg1;
- (id)init;

@end


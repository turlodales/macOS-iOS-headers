//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSPerSitePreferenceManager.h>

#import "WBSCoalescedAsynchronousWriterDelegate.h"
#import "WBSPerSitePreferenceManagerDefaultsDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, WBSCoalescedAsynchronousWriter, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSUserMediaPermissionController : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSCoalescedAsynchronousWriterDelegate>
{
    NSMutableDictionary *_cachedSettings;
    WBSCoalescedAsynchronousWriter *_saveUserMediaPermissionsWriter;
    NSObject<OS_dispatch_queue> *_internalQueue;
    // Error parsing type: {atomic<LoadingStatus>="__a_"{__cxx_atomic_impl<LoadingStatus, std::__1::__cxx_atomic_base_impl<LoadingStatus> >="__a_value"Aq}}, name: _savedStateLoadStatus
    NSURL *_userMediaPermissionsFileURL;
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSPerSitePreference *_cameraMediaCapturePreference;
    WBSPerSitePreference *_microphoneMediaCapturePreference;
    WBSPerSitePreference *_screenCapturePreference;
}

+ (id)localizedStringForPerSitePreferenceValue:(id)arg1;
+ (id)sharedController;
- (void).cxx_destruct;
@property(readonly, nonatomic) WBSPerSitePreference *screenCapturePreference; // @synthesize screenCapturePreference=_screenCapturePreference;
@property(readonly, nonatomic) WBSPerSitePreference *microphoneMediaCapturePreference; // @synthesize microphoneMediaCapturePreference=_microphoneMediaCapturePreference;
@property(readonly, nonatomic) WBSPerSitePreference *cameraMediaCapturePreference; // @synthesize cameraMediaCapturePreference=_cameraMediaCapturePreference;
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore; // @synthesize perSitePreferencesStore=_perSitePreferencesStore;
- (void)_dispatchSyncOnInternalQueue:(CDUnknownBlockType)arg1;
- (void)_dispatchAsyncOnInternalQueue:(CDUnknownBlockType)arg1;
- (void)_invalidateAllPermissionsForDomain:(id)arg1;
- (id)_standardizedURLForDomain:(id)arg1;
- (BOOL)_isPreferenceValid:(id)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
- (BOOL)_removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)permissionForDomain:(id)arg1;
- (unsigned long long)_permissionByApplyingDefaultsForMissingValuesInPermission:(unsigned long long)arg1;
- (unsigned long long)userMediaPermissionForDefaultPreferenceValues;
- (unsigned long long)_userMediaPermissionForMediaCaptureType:(long long)arg1 mediaCaptureSetting:(long long)arg2;
- (long long)_mediaCaptureSettingForMediaCaptureType:(long long)arg1 userMediaPermission:(unsigned long long)arg2;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (BOOL)_setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)valuesForPreference:(id)arg1;
- (id)preferences;
- (unsigned long long)_permissionMaskForMediaCaptureType:(long long)arg1;
- (long long)_mediaCaptureTypeForPreference:(id)arg1;
- (void)checkUserMediaPermissionForURL:(id)arg1 mainFrameURL:(id)arg2 frameIdentifier:(unsigned long long)arg3 decisionHandler:(CDUnknownBlockType)arg4;
- (void)_cachedSettingsDidChange;
- (BOOL)_captureDevicesAreAllDefaultsGivenPermission:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
- (void)didCommitLoadForFrameWithIdentifier:(unsigned long long)arg1;
- (void)_loadSavedPermissions;
- (void)resetOriginPermissions;
- (void)removeAllOriginsAddedAfterDate:(id)arg1;
- (id)_saltWithPolicyEntry:(id)arg1 computedPermission:(unsigned long long)arg2 frameIdentifier:(unsigned long long)arg3;
- (id)_saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3;
- (id)saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3;
- (unsigned long long)_permissionByRemovingDefaultPermissionFlagsInPermission:(unsigned long long)arg1;
- (void)_setPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4;
- (void)setPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4;
- (unsigned long long)permissionForNonHTTPSOriginFromPermission:(unsigned long long)arg1;
- (id)_policyForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (id)_validPolicyForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (id)_validPolicyForDomainWithOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (unsigned long long)_permissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (void)getPermissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)permissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (void)_invalidateCachedSettingsForOriginHash:(id)arg1;
- (void)savePendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)reloadPreferences;
- (void)performDelayedLaunchOperations;
- (id)_init;
- (id)initWithUserMediaPermissionsFileURL:(id)arg1 perSitePreferencesStore:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, NSUndoManager, NSUserDefaults, VSDevice;

@interface VSPreferences : NSObject
{
    NSUndoManager *_undoManager;
    NSUserDefaults *_userDefaults;
    NSUserDefaults *_globalUserDefaults;
    VSDevice *_device;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSUserDefaults *globalUserDefaults; // @synthesize globalUserDefaults=_globalUserDefaults;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (id)metricUserIDLastGenerated;
- (void)setMetricUserID:(id)arg1;
- (id)metricUserID;
- (BOOL)ignoreSetTopBoxProfile;
- (void)setIgnoreSetTopBoxProfile:(BOOL)arg1;
- (id)setTopBoxInfoBundleIdentifierOverride;
- (id)setTopBoxInfoAppAdamIdOverride;
- (id)setTopBoxInfoProviderDisplayNameOverride;
- (id)setTopBoxInfoProviderIdOverride;
- (BOOL)setTopBoxInfoIsSetTopBoxOverride;
- (void)noteIsInSTBMode:(BOOL)arg1;
- (BOOL)allowInsecureAuthContext;
- (BOOL)shouldIgnoreExtendedValidation;
- (BOOL)isInSTBMode;
- (void)noteDesiredApp:(id)arg1;
- (BOOL)hasChosenDesiredApp;
- (void)noteDidSendWelcomeMessage;
@property(readonly, nonatomic) BOOL hasSentWelcomeMessage;
@property(nonatomic) long long cachedStoreProviderStatus;
@property(nonatomic) long long cachedDeveloperProviderStatus;
@property(nonatomic) long long cachedAvailabilityStatus;
- (void)removeSkipSetupPreset;
- (void)noteShouldSkipSetup;
- (void)_updateShouldSkipSetupWithNumber:(id)arg1;
- (void)_updateValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) BOOL shouldSkipSetup;
@property(readonly, nonatomic) BOOL shouldAlwaysAllowRemoteInspection;
@property(readonly, nonatomic) BOOL shouldDisableRequestTimeouts;
@property(readonly, copy, nonatomic) NSURL *overridingAppBootURL;

@end


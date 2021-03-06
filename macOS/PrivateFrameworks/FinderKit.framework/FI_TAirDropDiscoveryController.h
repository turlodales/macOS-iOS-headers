//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/SFAirDropDiscoveryControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TAirDropDiscoveryController : NSObject <SFAirDropDiscoveryControllerDelegate>
{
    struct TNSRef<SFAirDropDiscoveryController, void> _discoveryController;
    _Bool _isLegacyMachine;
    long long _discoverableMode;
    _Bool _isLegacyModeEnabled;
    _Bool _isLegacyModeSettable;
    _Bool _isLegacyModeSupported;
}

+ (id)controller;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isLegacyModeSupported) _Bool legacyModeSupported; // @synthesize legacyModeSupported=_isLegacyModeSupported;
@property(readonly, nonatomic, getter=isLegacyModeSettable) _Bool legacyModeSettable; // @synthesize legacyModeSettable=_isLegacyModeSettable;
@property(nonatomic, getter=isLegacyModeEnabled) _Bool legacyModeEnabled; // @synthesize legacyModeEnabled=_isLegacyModeEnabled;
@property(nonatomic) long long discoverableMode; // @synthesize discoverableMode=_discoverableMode;
@property(readonly, nonatomic, getter=isLegacyMachine) _Bool legacyMachine; // @synthesize legacyMachine=_isLegacyMachine;
- (void)discoveryControllerLegacyModePropertiesDidChange:(id)arg1;
- (void)discoveryControllerVisibilityDidChange:(id)arg1;
- (void)discoveryControllerSettingsDidChange:(id)arg1;
- (void)updateState;
- (void)_setLegacyModeSettableForUpdateState:(_Bool)arg1;
- (void)_setLegacyMachineForUpdateState:(_Bool)arg1;
- (void)_setLegacyModeEnabledForUpdateState:(_Bool)arg1;
- (void)_setDiscoverableModeForUpdateState:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


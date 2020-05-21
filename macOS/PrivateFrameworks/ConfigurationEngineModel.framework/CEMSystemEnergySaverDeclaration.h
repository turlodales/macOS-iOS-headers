//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class CEMSystemEnergySaverDeclaration_EnergySaverSchedule, CEMSystemEnergySaverDeclaration_PowerSettings, NSNumber, NSString;

@interface CEMSystemEnergySaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    CEMSystemEnergySaverDeclaration_PowerSettings *_payloadComappleEnergySaverdesktopACPower;
    CEMSystemEnergySaverDeclaration_PowerSettings *_payloadComappleEnergySaverportableACPower;
    CEMSystemEnergySaverDeclaration_PowerSettings *_payloadComappleEnergySaverportableBatteryPower;
    CEMSystemEnergySaverDeclaration_EnergySaverSchedule *_payloadComappleEnergySaverdesktopSchedule;
    NSNumber *_payloadSleepDisabled;
    NSNumber *_payloadDestroyFVKeyOnStandby;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withComappleEnergySaverdesktopACPower:(id)arg2 withComappleEnergySaverportableACPower:(id)arg3 withComappleEnergySaverportableBatteryPower:(id)arg4 withComappleEnergySaverdesktopSchedule:(id)arg5 withSleepDisabled:(id)arg6 withDestroyFVKeyOnStandby:(id)arg7;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *payloadDestroyFVKeyOnStandby; // @synthesize payloadDestroyFVKeyOnStandby=_payloadDestroyFVKeyOnStandby;
@property(copy, nonatomic) NSNumber *payloadSleepDisabled; // @synthesize payloadSleepDisabled=_payloadSleepDisabled;
@property(copy, nonatomic) CEMSystemEnergySaverDeclaration_EnergySaverSchedule *payloadComappleEnergySaverdesktopSchedule; // @synthesize payloadComappleEnergySaverdesktopSchedule=_payloadComappleEnergySaverdesktopSchedule;
@property(copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableBatteryPower; // @synthesize payloadComappleEnergySaverportableBatteryPower=_payloadComappleEnergySaverportableBatteryPower;
@property(copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableACPower; // @synthesize payloadComappleEnergySaverportableACPower=_payloadComappleEnergySaverportableACPower;
@property(copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverdesktopACPower; // @synthesize payloadComappleEnergySaverdesktopACPower=_payloadComappleEnergySaverdesktopACPower;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


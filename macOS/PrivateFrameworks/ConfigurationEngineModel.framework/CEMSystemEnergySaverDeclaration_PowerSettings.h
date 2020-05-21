//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMSystemEnergySaverDeclaration_PowerSettings : CEMPayloadBase
{
    NSNumber *_payloadDisplaySleepTimer;
    NSNumber *_payloadDiskSleepTimer;
    NSNumber *_payloadSystemSleepTimer;
    NSNumber *_payloadReduceProcessorSpeed;
    NSNumber *_payloadDynamicPowerStep;
    NSNumber *_payloadWakeOnLAN;
    NSNumber *_payloadWakeOnModemRing;
    NSNumber *_payloadAutomaticRestartOnPowerLoss;
}

+ (id)buildRequiredOnly;
+ (id)buildWithDisplaySleepTimer:(id)arg1 withDiskSleepTimer:(id)arg2 withSystemSleepTimer:(id)arg3 withReduceProcessorSpeed:(id)arg4 withDynamicPowerStep:(id)arg5 withWakeOnLAN:(id)arg6 withWakeOnModemRing:(id)arg7 withAutomaticRestartOnPowerLoss:(id)arg8;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *payloadAutomaticRestartOnPowerLoss; // @synthesize payloadAutomaticRestartOnPowerLoss=_payloadAutomaticRestartOnPowerLoss;
@property(copy, nonatomic) NSNumber *payloadWakeOnModemRing; // @synthesize payloadWakeOnModemRing=_payloadWakeOnModemRing;
@property(copy, nonatomic) NSNumber *payloadWakeOnLAN; // @synthesize payloadWakeOnLAN=_payloadWakeOnLAN;
@property(copy, nonatomic) NSNumber *payloadDynamicPowerStep; // @synthesize payloadDynamicPowerStep=_payloadDynamicPowerStep;
@property(copy, nonatomic) NSNumber *payloadReduceProcessorSpeed; // @synthesize payloadReduceProcessorSpeed=_payloadReduceProcessorSpeed;
@property(copy, nonatomic) NSNumber *payloadSystemSleepTimer; // @synthesize payloadSystemSleepTimer=_payloadSystemSleepTimer;
@property(copy, nonatomic) NSNumber *payloadDiskSleepTimer; // @synthesize payloadDiskSleepTimer=_payloadDiskSleepTimer;
@property(copy, nonatomic) NSNumber *payloadDisplaySleepTimer; // @synthesize payloadDisplaySleepTimer=_payloadDisplaySleepTimer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end


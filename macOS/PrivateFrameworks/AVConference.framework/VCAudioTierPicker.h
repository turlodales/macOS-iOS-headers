//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BitrateLimits, NSMutableDictionary, VCAudioTier;

__attribute__((visibility("hidden")))
@interface VCAudioTierPicker : NSObject
{
    NSMutableDictionary *tierTablesForRedNumPayloads;
    VCAudioTier *defaultTier;
    VCAudioTier *fallbackTier;
    BOOL usingCellular;
    BOOL useCaseWatchContinuity;
    int operatingMode;
    BitrateLimits *bitrateLimits;
    BOOL _alwaysOnAudioRedundancyEnabled;
    BOOL _cellularAllowRedLowBitratesEnabled;
    BOOL _wifiAllowRedLowBitratesEnabled;
}

+ (id)valueForNetworkBitrate:(id)arg1 networkBitrate:(unsigned int)arg2;
+ (BOOL)shouldFilterTierForPayloadConfig:(id)arg1 bitRate:(unsigned int)arg2 packetsPerBundle:(unsigned int)arg3 operatingMode:(int)arg4 redNumPayloads:(unsigned int)arg5 cellular:(BOOL)arg6;
+ (id)selectHighestQualityAudioTiers:(id)arg1 forBitrateLimits:(id)arg2 isHardLimit:(BOOL)arg3;
+ (id)allPossibleCombinations:(id)arg1 supportedPacketsPerBundle:(id)arg2 redNumPayloads:(unsigned int)arg3 headerSize:(unsigned int)arg4 operatingMode:(int)arg5 usingCellular:(BOOL)arg6 useCaseWatchContinuity:(BOOL)arg7;
+ (BOOL)arrayHasObject:(id)arg1 withPayloadType:(int)arg2;
@property(readonly) VCAudioTier *defaultTier; // @synthesize defaultTier;
- (id)allAudioTiers;
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withRedNumPayloads:(unsigned long long)arg2;
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withLegacyDuplication:(int)arg2;
- (void)printCreatedAudioTiers:(id)arg1;
- (void)dealloc;
- (id)initWithOperatingMode:(int)arg1 payloadConfigs:(id)arg2 packetsPerBundle:(id)arg3 supportedRedNumPayloads:(id)arg4 headerSize:(unsigned long long)arg5 usingCellular:(BOOL)arg6 useCaseWatchContinuity:(BOOL)arg7 defaultMaxCap:(unsigned long long)arg8 alwaysOnAudioRedundancyEnabled:(BOOL)arg9 cellularAllowRedLowBitratesEnabled:(BOOL)arg10 wifiAllowRedLowBitratesEnabled:(BOOL)arg11;

@end


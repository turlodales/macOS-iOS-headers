//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSData, NSNumber, NSString, NSUUID;

@interface HAPBLEPeripheral : HMFObject
{
    NSString *_accessoryName;
    NSUUID *_peripheralUUID;
    NSNumber *_hkType;
    NSNumber *_advInterval;
    NSNumber *_pairingStatusFlag;
    NSString *_pairingIdentifier;
    NSNumber *_category;
    NSNumber *_stateNumber;
    NSNumber *_configNumber;
    NSNumber *_compatibleVersion;
    NSData *_setupHash;
    NSData *_encryptedPayload;
    double _lastSeen;
    NSNumber *_averageRSSI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *averageRSSI; // @synthesize averageRSSI=_averageRSSI;
@property(nonatomic) double lastSeen; // @synthesize lastSeen=_lastSeen;
@property(copy, nonatomic) NSData *encryptedPayload; // @synthesize encryptedPayload=_encryptedPayload;
@property(readonly, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(retain, nonatomic) NSNumber *compatibleVersion; // @synthesize compatibleVersion=_compatibleVersion;
@property(retain, nonatomic) NSNumber *configNumber; // @synthesize configNumber=_configNumber;
@property(retain, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(retain, nonatomic) NSNumber *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(retain, nonatomic) NSNumber *pairingStatusFlag; // @synthesize pairingStatusFlag=_pairingStatusFlag;
@property(retain, nonatomic) NSNumber *advInterval; // @synthesize advInterval=_advInterval;
@property(retain, nonatomic) NSNumber *hkType; // @synthesize hkType=_hkType;
@property(retain, nonatomic) NSUUID *peripheralUUID; // @synthesize peripheralUUID=_peripheralUUID;
@property(retain, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
- (void)_resetAverageRSSI;
- (BOOL)updateWithPeripheral:(id)arg1;
- (void)updateStateNumber:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 peripheralUUID:(id)arg2 hkType:(id)arg3 advInterval:(id)arg4 pairingStatusFlag:(id)arg5 pairingIdentifier:(id)arg6 category:(id)arg7 stateNumber:(id)arg8 configNumber:(id)arg9 hapBLECompatibleVersion:(id)arg10 setupHash:(id)arg11 encryptedPayload:(id)arg12;

@end


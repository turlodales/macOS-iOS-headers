//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFMerging.h"

@class CBCharacteristic, HAPCharacteristicMetadata, HAPService, HMFUnfairLock, NSDate, NSNumber, NSString;

@interface HAPCharacteristic : HMFObject <HMFMerging>
{
    HMFUnfairLock *_lock;
    BOOL _eventNotificationsEnabled;
    BOOL _shouldValidateValueAfterReading;
    NSDate *_valueUpdatedTime;
    id _value;
    NSNumber *_stateNumber;
    NSString *_type;
    NSNumber *_instanceID;
    HAPService *_service;
    unsigned long long _properties;
    HAPCharacteristicMetadata *_metadata;
    HAPCharacteristicMetadata *_accessoryMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HAPCharacteristicMetadata *accessoryMetadata; // @synthesize accessoryMetadata=_accessoryMetadata;
@property(nonatomic) BOOL shouldValidateValueAfterReading; // @synthesize shouldValidateValueAfterReading=_shouldValidateValueAfterReading;
@property(copy, nonatomic) HAPCharacteristicMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL eventNotificationsEnabled; // @synthesize eventNotificationsEnabled=_eventNotificationsEnabled;
@property(nonatomic) unsigned long long properties; // @synthesize properties=_properties;
@property(nonatomic) __weak HAPService *service; // @synthesize service=_service;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (BOOL)mergeObject:(id)arg1;
- (BOOL)shouldMergeObject:(id)arg1;
@property(readonly, nonatomic) BOOL supportsAdditionalAuthorizationData;
@property(retain, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;
@property(readonly, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
- (void)setStateNumber:(id)arg1;
@property(copy, nonatomic, setter=setValue:) id value; // @synthesize value=_value;
- (id)propertiesDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualToCharacteristic:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 stateNumber:(id)arg4 properties:(unsigned long long)arg5 eventNotificationsEnabled:(BOOL)arg6 metadata:(id)arg7;
@property(retain, nonatomic, setter=setCBCharacteristic:) CBCharacteristic *cbCharacteristic;
- (id)validateValue:(id)arg1 outValue:(id *)arg2;
- (id)_generateValidMetadata:(id)arg1;
- (void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFMerging.h"

@class CBService, HAPAccessory, NSArray, NSNumber, NSString;

@interface HAPService : HMFObject <HMFMerging>
{
    NSString *_type;
    NSNumber *_instanceID;
    HAPAccessory *_accessory;
    NSArray *_characteristics;
    NSArray *_linkedServices;
    unsigned long long _serviceProperties;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long serviceProperties; // @synthesize serviceProperties=_serviceProperties;
@property(retain, nonatomic) NSArray *linkedServices; // @synthesize linkedServices=_linkedServices;
@property(retain, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(nonatomic) __weak HAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (BOOL)mergeObject:(id)arg1;
- (BOOL)shouldMergeObject:(id)arg1;
- (id)characteristicsOfType:(id)arg1;
- (BOOL)_validateMandatoryCharacteristics;
- (BOOL)_validateServiceCharacteristics;
- (BOOL)_updateCharacteristic:(id)arg1;
- (BOOL)_updateAndValidateCharacteristics;
- (id)propertiesDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualToService:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithType:(id)arg1 instanceID:(id)arg2;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5;
@property(retain, nonatomic, setter=setCBService:) CBService *cbService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


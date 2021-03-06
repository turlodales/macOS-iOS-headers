//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFQuantityFieldParameter.h>

@class NSArray, NSDictionary, NSString, NSUnit;

@interface WFUnitQuantityFieldParameter : WFQuantityFieldParameter
{
    BOOL _fallbackToAllSupportedUnits;
    NSArray *_possibleUnits;
    NSString *_unitType;
    NSUnit *_defaultUnit;
    NSDictionary *_unitSymbolMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *unitSymbolMap; // @synthesize unitSymbolMap=_unitSymbolMap;
@property(nonatomic) BOOL fallbackToAllSupportedUnits; // @synthesize fallbackToAllSupportedUnits=_fallbackToAllSupportedUnits;
@property(retain, nonatomic) NSUnit *defaultUnit; // @synthesize defaultUnit=_defaultUnit;
@property(copy, nonatomic) NSString *unitType; // @synthesize unitType=_unitType;
- (void)setPossibleUnits:(id)arg1;
- (id)possibleUnits;
- (id)defaultSerializedRepresentation;
- (BOOL)parameterStateIsValid:(id)arg1;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (void)updatePossibleUnits;
- (id)availableUnitForStringValue:(id)arg1;
- (id)initWithDefinition:(id)arg1;

@end


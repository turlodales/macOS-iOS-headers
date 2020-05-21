//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class HMCharacteristic, NSDictionary, NSString;

@interface WFHMCharacteristicSubstitutableState : WFVariableSubstitutableParameterState
{
    HMCharacteristic *_characteristic;
    NSString *_homeIdentifier;
    NSDictionary *_serializedCharacteristic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *serializedCharacteristic; // @synthesize serializedCharacteristic=_serializedCharacteristic;
@property(readonly, nonatomic) NSString *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;
- (id)containedVariables;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithCharacteristic:(id)arg1 homeIdentifier:(id)arg2;

@end


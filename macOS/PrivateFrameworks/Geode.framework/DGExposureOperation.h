//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Geode/DGOperation.h>

#import <Geode/DGAutoCalculable-Protocol.h>

@class NSNumber, NSString;

@interface DGExposureOperation : DGOperation <DGAutoCalculable>
{
    BOOL _inputIsDefaults;
    NSNumber *_inputBias;
    NSNumber *_inputEV;
    NSNumber *_inputRecoveryEV;
    NSNumber *_inputBrightness;
}

+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;
+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *inputBrightness; // @synthesize inputBrightness=_inputBrightness;
@property(copy, nonatomic) NSNumber *inputRecoveryEV; // @synthesize inputRecoveryEV=_inputRecoveryEV;
@property(copy, nonatomic) NSNumber *inputEV; // @synthesize inputEV=_inputEV;
- (void)_applyAutoSettings:(id)arg1;
- (BOOL)applySettingsDictionary:(id)arg1;
- (id)defaultValueForInputKey:(id)arg1;
- (void)setOperationDefaults;
- (BOOL)isEqualToOperation:(id)arg1;
@property(copy, nonatomic) NSNumber *inputBias;
- (id)initWithOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


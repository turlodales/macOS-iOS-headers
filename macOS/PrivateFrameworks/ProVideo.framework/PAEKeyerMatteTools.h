//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAEKeyerMatteTools : NSObject
{
}

- (BOOL)doMatteManipulationWithInfo:(CDStruct_f5b31fc1)arg1 pixelAspectRatio:(float)arg2 fieldHeight:(float)arg3 doInvertMatte:(BOOL)arg4 inputIsInverted:(BOOL)arg5 fillHoles:(BOOL)arg6 scaling:(BOOL)arg7 blendingGamma:(float)arg8 blackLevel:(double)arg9 whiteLevel:(double)arg10 gammaLevel:(double)arg11 preKeyedInputNode:(HGRef_265f9e4c *)arg12 outputNode:(HGRef_265f9e4c *)arg13;
- (BOOL)doMatteManipulationWithParamAPI:(id)arg1 withPrivateParamAPI:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3 pixelAspectRatio:(float)arg4 fieldHeight:(float)arg5 doInvertMatte:(BOOL)arg6 inputIsInverted:(BOOL)arg7 fillHoles:(BOOL)arg8 scaling:(BOOL)arg9 blendingGamma:(float)arg10 preKeyedInputNode:(HGRef_265f9e4c *)arg11 outputNode:(HGRef_265f9e4c *)arg12;
- (BOOL)addAdvancedParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned int)arg2;
- (BOOL)addLevelsParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned int)arg2;
- (BOOL)addParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned int)arg2 isLumaKey:(BOOL)arg3;
- (id)init;

@end


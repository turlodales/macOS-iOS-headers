//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying>
{
    CDStruct_31142d93 fGravity;
    CDStruct_31142d93 fUserAcceleration;
    CDStruct_31142d93 fRotationRate;
    CMAttitude *fAttitude;
    CDStruct_31142d93 fMagneticField;
    int fMagneticFieldCalibrationLevel;
    _Bool fDoingYawCorrection;
    _Bool fDoingBiasEstimation;
    float fHeading;
    float fHeadingAccuracy;
}

- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDeviceMotion:(CDStruct_981b33bd)arg1 internal:(CDStruct_37a3040a)arg2;
- (void)setDeviceMotion:(CDStruct_981b33bd)arg1 internal:(CDStruct_37a3040a)arg2;

@end


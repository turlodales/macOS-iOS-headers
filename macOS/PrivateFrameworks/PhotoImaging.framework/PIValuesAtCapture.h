//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface PIValuesAtCapture : NSObject
{
    float _aperture;
    float _portraitStrength;
    NSNumber *_minimumAperture;
    NSNumber *_maximumAperture;
    unsigned long long _portraitMajorVersion;
    unsigned long long _portraitMinorVersion;
    CDStruct_6ed351db _versionInfo;
}

+ (id)valuesAtCaptureFromImageProperties:(id)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_6ed351db versionInfo; // @synthesize versionInfo=_versionInfo;
@property(nonatomic) unsigned long long portraitMinorVersion; // @synthesize portraitMinorVersion=_portraitMinorVersion;
@property(nonatomic) unsigned long long portraitMajorVersion; // @synthesize portraitMajorVersion=_portraitMajorVersion;
@property(retain, nonatomic) NSNumber *maximumAperture; // @synthesize maximumAperture=_maximumAperture;
@property(retain, nonatomic) NSNumber *minimumAperture; // @synthesize minimumAperture=_minimumAperture;
@property(nonatomic) float portraitStrength; // @synthesize portraitStrength=_portraitStrength;
@property(nonatomic) float aperture; // @synthesize aperture=_aperture;
- (id)description;

@end


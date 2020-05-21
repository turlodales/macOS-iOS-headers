//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IPAAutoSettings.h"

@class NSColor;

@interface PAWhiteBalanceAutoSettings : IPAAutoSettings
{
    BOOL _useFace;
    float _faceI;
    float _faceQ;
    float _faceStrength;
    long long _colorType;
    double _faceWarmth;
    double _temperature;
    double _tint;
    NSColor *_grayColor;
    double _grayWarmth;
}

- (void).cxx_destruct;
@property(nonatomic) double grayWarmth; // @synthesize grayWarmth=_grayWarmth;
@property(retain, nonatomic) NSColor *grayColor; // @synthesize grayColor=_grayColor;
@property(nonatomic) double tint; // @synthesize tint=_tint;
@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
@property(nonatomic) double faceWarmth; // @synthesize faceWarmth=_faceWarmth;
@property(nonatomic) float faceStrength; // @synthesize faceStrength=_faceStrength;
@property(nonatomic) float faceQ; // @synthesize faceQ=_faceQ;
@property(nonatomic) float faceI; // @synthesize faceI=_faceI;
@property(nonatomic) BOOL useFace; // @synthesize useFace=_useFace;
@property(nonatomic) long long colorType; // @synthesize colorType=_colorType;
- (BOOL)_applyArchiveDictionary:(id)arg1;
- (void)_archiveIntoDictionary:(id)arg1;

@end


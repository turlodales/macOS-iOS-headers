//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PIPhotoEditAdjustmentsVersion : NSObject
{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    unsigned long long _subMinorVersion;
    NSString *_platform;
}

+ (id)versionFromString:(id)arg1;
+ (id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 platform:(id)arg4;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) unsigned long long subMinorVersion; // @synthesize subMinorVersion=_subMinorVersion;
@property(readonly, nonatomic) unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly, nonatomic) unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
- (id)description;
- (BOOL)isEqualToAdjustmentVersion:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (long long)asOrderedInteger;
@property(readonly, nonatomic) __weak NSString *string;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 platform:(id)arg4;
- (id)init;

@end


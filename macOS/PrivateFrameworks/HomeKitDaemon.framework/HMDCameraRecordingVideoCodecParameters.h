//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import "HMDTLVCreateParse.h"
#import "NSSecureCoding.h"

@class NSArray, NSNumber;

@interface HMDCameraRecordingVideoCodecParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSArray *_profiles;
    NSArray *_levels;
    NSNumber *_bitRate;
    NSNumber *_iFrameInterval;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *iFrameInterval; // @synthesize iFrameInterval=_iFrameInterval;
@property(readonly, copy, nonatomic) NSNumber *bitRate; // @synthesize bitRate=_bitRate;
@property(readonly, copy, nonatomic) NSArray *levels; // @synthesize levels=_levels;
@property(readonly, copy, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithProfiles:(id)arg1 levels:(id)arg2 bitRate:(id)arg3 iFrameInterval:(id)arg4;

@end


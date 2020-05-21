//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDNumberParser.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface HMDCameraRecordingAudioBitRateMode : HMDNumberParser <NSCopying, NSSecureCoding>
{
    long long _type;
}

+ (id)arrayWithBitRateModes:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBitRateMode:(long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


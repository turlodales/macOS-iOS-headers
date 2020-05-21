//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import "HMDTLVCreateParse.h"
#import "NSSecureCoding.h"

@class HMDVideoCodec, HMDVideoCodecParameters, NSArray;

@interface HMDVideoCodecConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    HMDVideoCodec *_videoCodec;
    HMDVideoCodecParameters *_codecParameters;
    NSArray *_videoAttributes;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *videoAttributes; // @synthesize videoAttributes=_videoAttributes;
@property(readonly, copy, nonatomic) HMDVideoCodecParameters *codecParameters; // @synthesize codecParameters=_codecParameters;
@property(readonly, copy, nonatomic) HMDVideoCodec *videoCodec; // @synthesize videoCodec=_videoCodec;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithCodec:(id)arg1 codecParameters:(id)arg2 attributes:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TCMPSConvolutionDescriptor, TCMPSInstanceNormalizationDescriptor, TCMPSUpsamplingDescriptor;

__attribute__((visibility("hidden")))
@interface TCMPSDecodingDescriptor : NSObject
{
    TCMPSConvolutionDescriptor *_conv;
    TCMPSInstanceNormalizationDescriptor *_inst;
    TCMPSUpsamplingDescriptor *_upsample;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TCMPSUpsamplingDescriptor *upsample; // @synthesize upsample=_upsample;
@property(retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst; // @synthesize inst=_inst;
@property(retain, nonatomic) TCMPSConvolutionDescriptor *conv; // @synthesize conv=_conv;
- (id)init;

@end


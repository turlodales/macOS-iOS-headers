//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapSmoothing : CIFilter
{
    CIImage *inputImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputScale;
    NSNumber *inputDraftMode;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property(retain) NSNumber *inputScale; // @synthesize inputScale;
@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)performPass:(id)arg1 reference:(id)arg2 values:(id)arg3 rect:(struct CGRect)arg4;
- (id)_kernelV;
- (id)_kernelH;

@end


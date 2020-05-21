//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGuidedFilter : CIFilter
{
    CIImage *inputImage;
    CIImage *inputGuideImage;
    NSNumber *inputRadius;
    NSNumber *inputEpsilon;
}

+ (id)customAttributes;
@property(copy) NSNumber *inputEpsilon; // @synthesize inputEpsilon;
@property(copy) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain) CIImage *inputGuideImage; // @synthesize inputGuideImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)computeAB:(id)arg1;
- (id)_swizzleImageYZZ1:(id)arg1;
- (id)_swizzleImageYYZ1:(id)arg1;
- (id)_swizzleImageXXX1:(id)arg1;
- (id)_combineRGB_and_A;
- (id)_finalResult;
- (id)_computeABKernel;
- (id)subtract:(id)arg1 minus:(id)arg2;
- (id)multiplyImages:(id)arg1 imageB:(id)arg2;
- (id)_multiplyImagesKernel;
- (id)_boxFilter:(id)arg1 fullFloat:(BOOL)arg2;
- (id)_fullFloatBoxFilter;
- (id)_upsampleImage:(id)arg1 targetImageSize:(struct CGSize)arg2;
- (id)_downsampledColorImage:(id)arg1;

@end


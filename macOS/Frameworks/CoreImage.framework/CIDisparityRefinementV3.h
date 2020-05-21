//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinementV3 : CIFilter
{
    NSNumber *inputScale;
    CIImage *inputImage;
    CIImage *inputMainImage;
    CIImage *inputMatteImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputDraftMode;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputMainImage; // @synthesize inputMainImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
@property(copy) NSNumber *inputScale; // @synthesize inputScale;
- (id)outputImage;
- (id)alphaImageForMainImage:(id)arg1 disparity:(id)arg2;

@end


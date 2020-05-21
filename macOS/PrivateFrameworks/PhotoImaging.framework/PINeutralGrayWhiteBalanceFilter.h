//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

@interface PINeutralGrayWhiteBalanceFilter : CIFilter
{
    CIImage *_inputImage;
    NSNumber *_strength;
    NSNumber *_warmth;
    NSNumber *_y;
    NSNumber *_i;
    NSNumber *_q;
}

+ (id)whiteBalanceKernel;
+ (id)PPtogHDRKernel;
+ (id)gHDRtoPPKernel;
+ (id)YIQToRGBKernel;
+ (id)RGBToYIQKernel;
+ (id)colorBalanceKernels;
+ (id)customAttributes;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *q; // @synthesize q=_q;
@property(retain, nonatomic) NSNumber *i; // @synthesize i=_i;
@property(retain, nonatomic) NSNumber *y; // @synthesize y=_y;
@property(retain, nonatomic) NSNumber *warmth; // @synthesize warmth=_warmth;
@property(retain, nonatomic) NSNumber *strength; // @synthesize strength=_strength;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;
- (BOOL)isDefaultWarmth:(double)arg1;
- (id)applyOutputConversion:(id)arg1;
- (id)applyInputConversion:(id)arg1;

@end


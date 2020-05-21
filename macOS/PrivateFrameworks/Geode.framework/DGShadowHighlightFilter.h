//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

@interface DGShadowHighlightFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputShadowAmount;
    NSNumber *inputShadowTonalWidth;
    NSNumber *inputRadius;
    NSNumber *inputHighlightAmount;
    NSNumber *inputHighlightTonalWidth;
    NSNumber *inputColorCorrection;
    NSNumber *inputMidtoneContrast;
    NSNumber *inputVersion;
}

+ (id)filterWithName:(id)arg1;
+ (void)initialize;
- (void)setDefaults;
- (id)outputImage;
- (id)customAttributes;

@end


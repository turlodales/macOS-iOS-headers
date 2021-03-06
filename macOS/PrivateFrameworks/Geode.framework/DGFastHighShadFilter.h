//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface DGFastHighShadFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputHighlightAmount;
    NSNumber *inputShadowAmount;
    NSNumber *inputRadius;
}

+ (id)filterWithName:(id)arg1;
+ (void)initialize;
- (void)setDefaults;
- (id)outputImage;
- (struct CGRect)expandByOneROI:(long long)arg1 destRect:(struct CGRect)arg2;
- (id)customAttributes;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

@interface KHProSharpenFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputFalloff;
    NSNumber *inputSharpness;
    NSNumber *inputEdgeScale;
}

+ (id)filter;
- (id)outputImage;
- (struct CGRect)vertBlur4ROI:(int)arg1 destRect:(struct CGRect)arg2;
- (struct CGRect)horizBlur4ROI:(int)arg1 destRect:(struct CGRect)arg2;
- (struct CGRect)vertBlur2ROI:(int)arg1 destRect:(struct CGRect)arg2;
- (struct CGRect)horizBlur2ROI:(int)arg1 destRect:(struct CGRect)arg2;
- (struct CGRect)vertBlur1ROI:(int)arg1 destRect:(struct CGRect)arg2;
- (struct CGRect)horizBlur1ROI:(int)arg1 destRect:(struct CGRect)arg2;
- (struct CGRect)expandByOneROI:(int)arg1 destRect:(struct CGRect)arg2;
- (id)customAttributes;
- (id)init;

@end


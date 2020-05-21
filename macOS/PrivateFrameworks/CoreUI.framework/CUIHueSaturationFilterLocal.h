//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIHueSaturationFilterLocal : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputCenterAngle;
    NSNumber *inputAngleWidth;
    CIColor *inputTintColor;
}

+ (id)customAttributes;
+ (id)filterWithName:(id)arg1;
@property(copy, nonatomic) CIColor *inputTintColor; // @synthesize inputTintColor;
@property(copy, nonatomic) NSNumber *inputAngleWidth; // @synthesize inputAngleWidth;
@property(copy, nonatomic) NSNumber *inputCenterAngle; // @synthesize inputCenterAngle;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;
- (struct CGColor *)_newColorByProcessingColor:(struct CGColor *)arg1;
- (void)dealloc;

@end


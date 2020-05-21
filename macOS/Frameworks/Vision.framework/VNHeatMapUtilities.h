//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VNHeatMapUtilities : NSObject
{
}

+ (id)boundingBoxesFromFloat32PixelBuffer:(struct __CVBuffer *)arg1 thresholds:(id)arg2 relativeToMaximum:(BOOL)arg3 applySmoothing:(BOOL)arg4 originalImageSize:(struct CGSize)arg5 sigmaX:(float)arg6 sigmaY:(float)arg7 nStd:(float)arg8 error:(id *)arg9;
+ (id)boundingBoxesFromFloat32ImageBuffer:(struct vImage_Buffer)arg1 thresholds:(id)arg2 relativeToMaximum:(BOOL)arg3 applySmoothing:(BOOL)arg4 originalImageSize:(struct CGSize)arg5 sigmaX:(float)arg6 sigmaY:(float)arg7 nStd:(float)arg8 error:(id *)arg9;
+ (id)boundingBoxesFromFloat32ImageBuffer:(struct vImage_Buffer)arg1 thresholds:(id)arg2 error:(id *)arg3;
+ (id)significantRegionsFromFloat32PixelBuffer:(struct __CVBuffer *)arg1 threshold:(float)arg2 relativeToMaximum:(BOOL)arg3 error:(id *)arg4;
+ (id)significantRegionsFromFloat32ImageBuffer:(struct vImage_Buffer)arg1 threshold:(float)arg2 relativeToMaximum:(BOOL)arg3;
+ (id)significantRegionsFromFloat32ImageBuffer:(struct vImage_Buffer)arg1 threshold:(float)arg2;
+ (float)maximumValueFromFloat32ImageBuffer:(struct vImage_Buffer)arg1;
+ (BOOL)smoothedFloat32ImageBuffer:(struct vImage_Buffer)arg1 fromImageBuffer:(struct vImage_Buffer)arg2 originalImageSize:(struct CGSize)arg3 sigmaX:(float)arg4 sigmaY:(float)arg5 nStd:(float)arg6;

@end


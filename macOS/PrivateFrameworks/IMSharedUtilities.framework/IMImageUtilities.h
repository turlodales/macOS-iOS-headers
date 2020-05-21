//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMImageUtilities : NSObject
{
}

+ (double)scaleFactorForThumbnailWithSize:(struct CGSize)arg1 constraints:(struct IMPreviewConstraints)arg2 targetPxSize:(struct CGSize)arg3 shouldScaleUpPreview:(BOOL)arg4 maxUpScale:(double)arg5;
+ (struct CGImage *)newThumbnailForTargetSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 imageSource:(struct CGImageSource *)arg3 atIndex:(unsigned long long)arg4 mode:(long long)arg5 scale:(double)arg6;
+ (struct CGImage *)newThumbnailForTargetSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 imageSource:(struct CGImageSource *)arg3 mode:(long long)arg4 scale:(double)arg5;
+ (BOOL)persistCPBitmapWithImage:(struct CGImage *)arg1 url:(id)arg2;
+ (void)sampleImageEdges:(char *)arg1 usingRect:(struct CGRect)arg2 forMostlyWhitePixels:(unsigned long long *)arg3 otherPixels:(unsigned long long *)arg4 bytesPerRow:(long long)arg5;
+ (struct CGSize)imageRefPxSize:(struct CGImage *)arg1;
+ (struct CGSize)imageSourcePxSize:(struct CGImageSource *)arg1;

@end


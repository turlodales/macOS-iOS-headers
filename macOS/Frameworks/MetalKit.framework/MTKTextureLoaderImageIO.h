//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalKit/MTKTextureLoaderData.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderImageIO : MTKTextureLoaderData
{
    struct CGImageBlockSet *_blockSet;
    struct __CFData *_cfData;
    struct MTLPixelFormatInfo _pixelFormatInfo;
    unsigned long long _bytesPerRow;
    NSData *_imageData;
    BOOL _expandRGBToRGBA;
}

- (BOOL)determineCGImageBlockFormatWithComponentType:(int)arg1 alphaInfo:(unsigned int)arg2 andPixelSizeBytes:(unsigned long long)arg3 andColorSpace:(struct CGColorSpace *)arg4 isOptimized:(BOOL)arg5 options:(id)arg6;
- (BOOL)decodeCGImageDataProvider:(struct CGImage *)arg1 options:(id)arg2;
- (BOOL)decodeCGImageImageProvider:(struct CGImage *)arg1 CGImageProvider:(struct CGImageProvider *)arg2 options:(id)arg3;
- (BOOL)decodeCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end


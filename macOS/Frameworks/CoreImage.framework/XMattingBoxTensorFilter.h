//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPSImageBox;

__attribute__((visibility("hidden")))
@interface XMattingBoxTensorFilter : NSObject
{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    MPSImageBox *_boxfilter;
    unsigned int _radius;
    unsigned int _depthRadius;
    BOOL _supportsReadWriteTextures;
    id <MTLTexture> _tmpTexture;
    id <MTLComputePipelineState> _depthFilterSeparableSlidingStacks_arrayKernel;
    id <MTLComputePipelineState> _renormalizeFromMPSImageEdgeModeZeroKernel;
}

+ (id)supportedPixelFormats;
- (void).cxx_destruct;
- (int)encodeOnCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (int)encodeSeparableSlidingStackOnCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (int)_compileShadersWithLibrary:(id)arg1;
- (void)releaseResources;
- (int)allocateResources:(CDStruct_c0454aff)arg1;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsDevice.h>

@class NSMutableSet;

@interface MTLDebugDevice : MTLToolsDevice
{
    BOOL _prevResourceTrackingEnabled;
    NSMutableSet *_buffersAlreadyChecksummedInFrame;
    struct MTLSamplerDescriptorHashMap _argumentBufferSamplers;
    BOOL _resourceTrackingEnabled;
    BOOL _resourceTrackingChecksummingEnabled;
    BOOL _resourceTrackingChecksummingForceAll;
    unsigned int _frameNum;
}

+ (BOOL)complainAboutSloppyTextureUsage;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL resourceTrackingChecksummingForceAll; // @synthesize resourceTrackingChecksummingForceAll=_resourceTrackingChecksummingForceAll;
@property(readonly, nonatomic) BOOL resourceTrackingChecksummingEnabled; // @synthesize resourceTrackingChecksummingEnabled=_resourceTrackingChecksummingEnabled;
@property(nonatomic) unsigned int frameNum; // @synthesize frameNum=_frameNum;
@property(readonly, nonatomic) BOOL resourceTrackingEnabled; // @synthesize resourceTrackingEnabled=_resourceTrackingEnabled;
- (id)newRemoteTextureView:(id)arg1 parentTexture:(id)arg2;
- (id)newRemoteBufferView:(id)arg1 parentBuffer:(id)arg2;
- (void)eventSignaled:(id)arg1 value:(unsigned long long)arg2;
- (id)newSharedEventWithHandle:(id)arg1;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;
- (id)_newSharedEventWithParent:(id)arg1;
- (id)newSharedEvent;
- (id)newEvent;
- (id)newCounterSampleBufferWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newMotionEstimationPipelineWithDescriptor:(id)arg1;
- (id)newTiledTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;
- (id)newTiledTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 offset:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5;
- (id)newRasterizationRateMapWithDescriptor:(id)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (const struct MTLTargetDeviceArch *)targetDeviceInfo;
- (unsigned int)checksumBuffer:(id)arg1;
- (void)_resourceTrackingChecksummingEndOfFrame;
- (void)bufferChecksummedInFrame:(id)arg1;
- (BOOL)restoreResourceTrackingEnabled;
- (BOOL)overrideResourceTrackingEnabled:(BOOL)arg1;
- (void)resourceTrackingEndOfFrame;
- (id)newBufferWithIOSurface:(struct __IOSurface *)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)validateTraceBuffer:(unsigned long long)arg1 maxBufferCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newDynamicLibrary:(id)arg1 error:(id *)arg2;
- (id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id *)arg3;
- (id)newDynamicLibraryFromURL:(id)arg1 error:(id *)arg2;
- (id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id *)arg3;
- (id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;
- (void)notifySamplerStateDeallocated:(id)arg1;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newTextureWithSurface:(unsigned long long)arg1 buffer:(unsigned long long)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)validateNewBufferArgs:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)validateResourceOptions:(unsigned long long)arg1 isTexture:(BOOL)arg2 isIOSurface:(BOOL)arg3;
- (id)newSharedTextureWithHandle:(id)arg1;
- (id)newSharedTextureWithDescriptor:(id)arg1;
- (id)newHeapWithDescriptor:(id)arg1;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id)newCommandQueue;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

@end


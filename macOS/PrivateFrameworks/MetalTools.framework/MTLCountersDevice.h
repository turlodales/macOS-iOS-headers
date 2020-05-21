//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsDevice.h>

@interface MTLCountersDevice : MTLToolsDevice
{
}

- (id)newTiledTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;
- (id)newTiledTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 offset:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5;
- (id)newBufferWithIOSurface:(struct __IOSurface *)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;
- (id)newDefaultLibrary;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newTextureWithSurface:(unsigned long long)arg1 buffer:(unsigned long long)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newFence;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id)newCommandQueue;
- (id)newFunctionWithGLIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newFunctionWithGLIR:(void *)arg1 functionType:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

@end


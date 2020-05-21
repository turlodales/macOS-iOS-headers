//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLDeserializationContext.h"
#import "MTLDeserializer.h"

@class MTLSharedEventListener, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface _MTLDeserializer : NSObject <MTLDeserializer, MTLDeserializationContext>
{
    NSObject<OS_dispatch_queue> *submissionQueue;
    NSObject<OS_dispatch_queue> *completionQueue;
    id <MTLCommandQueue> commandQueue;
    id <MTLDevice> device;
    NSMutableDictionary *_librarys;
    NSMutableDictionary *_commandQueues;
    NSMutableDictionary *_functions;
    NSMutableDictionary *_computePipelines;
    NSMutableDictionary *_renderPipelines;
    NSMutableDictionary *_buffers;
    NSMutableDictionary *_textures;
    NSMutableDictionary *_samplers;
    NSMutableDictionary *_depthStencils;
    NSMutableDictionary *_fences;
    NSMutableDictionary *_argumentBufferLayouts;
    NSMutableDictionary *_argumentEncoders;
    NSMutableDictionary *_heaps;
    NSMutableDictionary *_events;
    MTLSharedEventListener *eventListener;
    BOOL _generateResourceRefs;
    NSObject<OS_dispatch_queue> *_resourceMapQueue;
    struct MTLDeserializerObjectMap *_libraryMap;
    struct MTLDeserializerObjectMap *_commandQueueMap;
    struct MTLDeserializerObjectMap *_functionMap;
    struct MTLDeserializerObjectMap *_computePipelineMap;
    struct MTLDeserializerObjectMap *_renderPipelineMap;
    struct MTLDeserializerObjectMap *_bufferMap;
    struct MTLDeserializerObjectMap *_textureMap;
    struct MTLDeserializerObjectMap *_samplerMap;
    struct MTLDeserializerObjectMap *_depthStencilMap;
    struct MTLDeserializerObjectMap *_fenceMap;
    struct MTLDeserializerObjectMap *_argumentBufferLayoutMap;
    struct MTLDeserializerObjectMap *_argumentEncoderMap;
    struct MTLDeserializerObjectMap *_heapMap;
    struct MTLDeserializerObjectMap *_eventMap;
}

@property(readonly) BOOL generateResourceRefs; // @synthesize generateResourceRefs=_generateResourceRefs;
@property(readonly) id <MTLDevice> device; // @synthesize device;
- (id)functionWithFunctionRef:(unsigned long long)arg1;
- (BOOL)newLibraryWithData:(id)arg1 libraryRef:(unsigned int)arg2 allocator:(id)arg3;
- (id)getResourceForReference:(unsigned int)arg1;
- (void)submitCommandSegmentsTimed:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5 commandQueueRef:(unsigned int)arg6;
- (void)submitCommandSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5 commandQueueRef:(unsigned int)arg6;
- (void)submitCommandSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5;
- (id)decodeSegmentWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2 withDecoder:(id)arg3 into:(id)arg4;
- (id)newObjectCommandWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;
- (void)deleteObjectWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;
- (void)deleteResource:(unsigned int)arg1;
- (void)notifyListenerForEventWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 allocator:(id)arg4;
- (void)newTextureWithIOSurface:(struct __IOSurface *)arg1 serializedData:(const char *)arg2 serializedDataSize:(unsigned long long)arg3 allocator:(id)arg4;
- (BOOL)newObjectWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)operationWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (void)getBytes:(void *)arg1 dataSize:(unsigned long long)arg2 command:(const CDStruct_c0454aff *)arg3;
- (id)replaceRegion:(const CDStruct_c0454aff *)arg1;
- (BOOL)newSharedEvent:(CDStruct_6238c8e0 *)arg1 allocator:(id)arg2;
- (BOOL)newFence:(CDStruct_6238c8e0 *)arg1 allocator:(id)arg2;
- (BOOL)newFunctionWithLibraryFunctionName:(CDStruct_32a7f38a *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)newFunctionWithSerializedMetallib:(id)arg1 commandData:(const char *)arg2 commandDataSize:(unsigned long long)arg3 overrideTargetTriple:(id)arg4 allocator:(id)arg5;
- (BOOL)newTiledTextureViewWithBuffer:(CDStruct_199767e7 *)arg1 allocator:(id)arg2;
- (BOOL)newTextureViewWithBuffer:(CDStruct_199767e7 *)arg1 allocator:(id)arg2;
- (BOOL)newTextureViewWithSwizzle:(CDStruct_f41d351c *)arg1 allocator:(id)arg2;
- (BOOL)newTextureViewWithTextureType:(CDStruct_9da0e9c0 *)arg1 allocator:(id)arg2;
- (BOOL)newTextureViewWithPixelFormat:(CDStruct_1ab23c75 *)arg1 allocator:(id)arg2;
- (BOOL)makeAliasiableResource:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)heapBufferSizeAndAlign:(CDStruct_5e0ae671 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)heapTextureSizeAndAlign:(CDStruct_d55b6325 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)argumentEncoderSetValues:(CDStruct_091769f4 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)setSignaledValue:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)doResourcesAlias:(CDStruct_eb9e20c8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)argumentEncoderConstantAtIndex:(CDStruct_b92aab1b *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)argumentBufferLayoutConstantAtIndex:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)newArgumentEncoderWithBufferLayout:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)newArgumentBufferLayoutWithStructType:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)newRenderPipelineStateWithDescriptor:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)uniqueIdentifier:(CDStruct_1e94be47 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)newComputePipelineStateWithDescriptor:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)heapMaxAvailableSizeWithAlignment:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)computeInfo:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)minimumTextureBufferAlignment:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)minimumLinearTextureAlignment:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)bufferGPUAddress:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)sizeInfoForHeap:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (BOOL)newBufferWithHeap:(CDStruct_e833742d *)arg1 allocator:(id)arg2;
- (BOOL)newTextureWithHeap:(CDStruct_ab6bd9ea *)arg1 allocator:(id)arg2;
- (BOOL)newHeapWithDescriptor:(CDStruct_1ffa15be *)arg1 allocator:(id)arg2;
- (id)newHeapWithDescriptor:(CDStruct_1ffa15be *)arg1;
- (BOOL)newDepthStencilStateWithDescriptor:(CDStruct_db93b3bd *)arg1 allocator:(id)arg2;
- (id)newDepthStencilStateWithDescriptor:(CDStruct_db93b3bd *)arg1;
- (BOOL)newSamplerStateWithDescriptor:(CDStruct_36a1713d *)arg1 allocator:(id)arg2;
- (id)newSamplerStateWithDescriptor:(CDStruct_36a1713d *)arg1;
- (BOOL)newTextureWithDescriptor:(CDStruct_161c8b3b *)arg1 allocator:(id)arg2;
- (id)newTextureWithDescriptor:(CDStruct_161c8b3b *)arg1;
- (void)deleteEventForReference:(unsigned int)arg1;
- (id)getEventForReference:(unsigned int)arg1;
- (unsigned int)registerEvent:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerEvent:(id)arg1;
- (void)registerEventForReference:(unsigned int)arg1 event:(id)arg2;
- (void)deleteHeapForReference:(unsigned int)arg1;
- (id)getHeapForReference:(unsigned int)arg1;
- (unsigned int)registerHeap:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerHeap:(id)arg1;
- (void)registerHeapForReference:(unsigned int)arg1 heap:(id)arg2;
- (void)deleteArgumentEncoderForReference:(unsigned int)arg1;
- (id)getArgumentEncoderForReference:(unsigned int)arg1;
- (unsigned int)registerArgumentEncoder:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerArgumentEncoder:(id)arg1;
- (void)registerArgumentEncoderForReference:(unsigned int)arg1 argumentEncoder:(id)arg2;
- (void)deleteArgumentBufferLayoutForReference:(unsigned int)arg1;
- (id)getArgumentBufferLayoutForReference:(unsigned int)arg1;
- (unsigned int)registerArgumentBufferLayout:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerArgumentBufferLayout:(id)arg1;
- (void)registerArgumentBufferLayoutForReference:(unsigned int)arg1 argumentBufferLayout:(id)arg2;
- (void)deleteFenceForReference:(unsigned int)arg1;
- (id)getFenceForReference:(unsigned int)arg1;
- (unsigned int)registerFence:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerFence:(id)arg1;
- (void)registerFenceForReference:(unsigned int)arg1 fence:(id)arg2;
- (void)deleteDepthStencilStateForReference:(unsigned int)arg1;
- (id)getDepthStencilStateForReference:(unsigned int)arg1;
- (unsigned int)registerDepthStencilState:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerDepthStencilState:(id)arg1;
- (void)registerDepthStencilStateForReference:(unsigned int)arg1 depthStencil:(id)arg2;
- (void)deleteSamplerStateForReference:(unsigned int)arg1;
- (id)getSamplerStateForReference:(unsigned int)arg1;
- (unsigned int)registerSamplerState:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerSamplerState:(id)arg1;
- (void)registerSamplerStateForReference:(unsigned int)arg1 sampler:(id)arg2;
- (void)deleteTextureForReference:(unsigned int)arg1;
- (id)getTextureForReference:(unsigned int)arg1;
- (unsigned int)registerTexture:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerTexture:(id)arg1;
- (void)registerTextureForReference:(unsigned int)arg1 texture:(id)arg2;
- (void)deleteBufferForReference:(unsigned int)arg1;
- (id)getBufferForReference:(unsigned int)arg1;
- (unsigned int)registerBuffer:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerBuffer:(id)arg1;
- (void)registerBufferForReference:(unsigned int)arg1 buffer:(id)arg2;
- (void)deleteRenderPipelineStateForReference:(unsigned int)arg1;
- (id)getRenderPipelineStateForReference:(unsigned int)arg1;
- (unsigned int)registerRenderPipelineState:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerRenderPipelineState:(id)arg1;
- (void)registerRenderPipelineStateForReference:(unsigned int)arg1 renderPipeline:(id)arg2;
- (void)deleteComputePipelineStateForReference:(unsigned int)arg1;
- (id)getComputePipelineStateForReference:(unsigned int)arg1;
- (unsigned int)registerComputePipelineState:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerComputePipelineState:(id)arg1;
- (void)registerComputePipelineStateForReference:(unsigned int)arg1 computePipeline:(id)arg2;
- (void)deleteFunctionForReference:(unsigned int)arg1;
- (id)getFunctionForReference:(unsigned int)arg1;
- (unsigned int)registerFunction:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerFunction:(id)arg1;
- (void)registerFunctionForReference:(unsigned int)arg1 function:(id)arg2;
- (void)deleteCommandQueueForReference:(unsigned int)arg1;
- (id)getCommandQueueForReference:(unsigned int)arg1;
- (unsigned int)registerCommandQueue:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerCommandQueue:(id)arg1;
- (void)registerCommandQueueForReference:(unsigned int)arg1 commandQueue:(id)arg2;
- (void)deleteLibraryForReference:(unsigned int)arg1;
- (id)getLibraryForReference:(unsigned int)arg1;
- (unsigned int)registerLibrary:(id)arg1 objectRef:(unsigned int)arg2;
- (unsigned int)registerLibrary:(id)arg1;
- (void)registerLibraryForReference:(unsigned int)arg1 library:(id)arg2;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 generateResourceRefs:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


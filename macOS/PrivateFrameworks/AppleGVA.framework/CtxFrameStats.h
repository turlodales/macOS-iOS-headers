//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CtxFrameStats : NSObject
{
    int _width;
    int _height;
    int _scdBlockCountHrz;
    int _scdBlockCountVrt;
    int _missCount;
    int _hitCount;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _pipeState;
    id <MTLLibrary> _mtlLibrary;
    id <MTLFunction> _kernel;
    id <MTLTexture> _srcCur;
    id <MTLTexture> _srcPrev;
    id <MTLBuffer> _dest;
    id <MTLBuffer> _args;
    id <MTLCommandBuffer> _commandBuffer;
    unsigned int *_destHost;
    unsigned int *_argsHost;
    CDStruct_04e2e6f3 *_texturePool;
    CDStruct_da2e99ad _threadsPerGroup;
    CDStruct_da2e99ad _numThreadgroups;
}

- (void).cxx_destruct;
@property int hitCount; // @synthesize hitCount=_hitCount;
@property int missCount; // @synthesize missCount=_missCount;
@property CDStruct_04e2e6f3 *texturePool; // @synthesize texturePool=_texturePool;
@property unsigned int *argsHost; // @synthesize argsHost=_argsHost;
@property unsigned int *destHost; // @synthesize destHost=_destHost;
@property int scdBlockCountVrt; // @synthesize scdBlockCountVrt=_scdBlockCountVrt;
@property int scdBlockCountHrz; // @synthesize scdBlockCountHrz=_scdBlockCountHrz;
@property int height; // @synthesize height=_height;
@property int width; // @synthesize width=_width;
@property(retain) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property CDStruct_da2e99ad numThreadgroups; // @synthesize numThreadgroups=_numThreadgroups;
@property CDStruct_da2e99ad threadsPerGroup; // @synthesize threadsPerGroup=_threadsPerGroup;
@property(retain) id <MTLBuffer> args; // @synthesize args=_args;
@property(retain) id <MTLBuffer> dest; // @synthesize dest=_dest;
@property(retain) id <MTLTexture> srcPrev; // @synthesize srcPrev=_srcPrev;
@property(retain) id <MTLTexture> srcCur; // @synthesize srcCur=_srcCur;
@property(retain) id <MTLFunction> kernel; // @synthesize kernel=_kernel;
@property(retain) id <MTLLibrary> mtlLibrary; // @synthesize mtlLibrary=_mtlLibrary;
@property(retain) id <MTLComputePipelineState> pipeState; // @synthesize pipeState=_pipeState;
@property(retain) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain) id <MTLDevice> device; // @synthesize device=_device;
- (id)init:(int)arg1 height:(int)arg2 metalId:(unsigned long long)arg3 metalIdIsValid:(_Bool)arg4;
- (void)deleteMetalContext;
- (void)execute:(struct __IOSurface *)arg1 prevBuffer:(struct __IOSurface *)arg2 syncMode:(_Bool)arg3;
- (void)waitForComplete;
- (int)returnNumberOfBlocks;
- (void *)returnDestination;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKMetalBuffer;

@interface PKMetalPaintRenderCacheBuffer : NSObject
{
    PKMetalBuffer *_pkUniformsBuffer;
    PKMetalBuffer *_pkStrokePointBuffer;
    unsigned long long _uniformsBufferOffset;
    unsigned long long _strokePointBufferOffset;
    unsigned long long _numVertices;
    unsigned long long _numPoints;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long numPoints; // @synthesize numPoints=_numPoints;
@property(readonly, nonatomic) unsigned long long numVertices; // @synthesize numVertices=_numVertices;
@property(readonly, nonatomic) unsigned long long strokePointBufferOffset; // @synthesize strokePointBufferOffset=_strokePointBufferOffset;
@property(readonly, nonatomic) unsigned long long uniformsBufferOffset; // @synthesize uniformsBufferOffset=_uniformsBufferOffset;
- (BOOL)lockPurgeableResourcesAddToSet:(id)arg1;
@property(readonly, nonatomic) id <MTLBuffer> strokePointBuffer; // @dynamic strokePointBuffer;
@property(readonly, nonatomic) id <MTLBuffer> uniformsBuffer; // @dynamic uniformsBuffer;
- (id)initWithUniforms:(const struct PKMetalPaintKernelUniforms *)arg1 points:(const struct PKMetalPaintStrokePoint *)arg2 numPoints:(unsigned long long)arg3 numVertices:(unsigned long long)arg4 resourceHandler:(id)arg5;
- (id)init;

@end


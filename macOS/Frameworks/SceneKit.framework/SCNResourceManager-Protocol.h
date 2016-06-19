//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCNResourceManager <NSObject>
- (struct __C3DEngineStats *)stats;
- (void)flush;
- (void)removeAllShaders;
-     // Error parsing type: @24@0:8^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}II^{__C3DMeshElement}CCC{?=c^{__CFData}I}{?=c^{__CFData}I}^v^{__C3DMeshSource}[2]}16, name: renderResourceForMeshElement:
- (id)renderResourceForMeshSource:(struct __C3DMeshSource *)arg1;
- (id)renderResourceForMaterial:(struct __C3DMaterial *)arg1 geometry:(struct __C3DGeometry *)arg2 renderPipeline:(id)arg3 engineContext:(struct __C3DEngineContext *)arg4;
- (id)renderResourceForSampler:(struct __C3DTextureSampler *)arg1;
- (id)renderResourceForImageProxy:(struct __C3DImageProxy *)arg1 sampler:(struct __C3DTextureSampler *)arg2 engineContext:(struct __C3DEngineContext *)arg3;
- (id)renderResourceForImage:(struct __C3DImage *)arg1 sampler:(struct __C3DTextureSampler *)arg2 options:(int)arg3;
- (id)renderResourceForMorph:(struct __C3DMorph *)arg1 baseMesh:(struct __C3DMesh *)arg2;
- (id)renderResourceForMesh:(struct __C3DMesh *)arg1;
- (id)renderResourceForRasterizerState:(struct __C3DRasterizerStates *)arg1;
@end


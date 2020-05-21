//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTKViewDelegate.h"
#import "PXGMetalTextureConverterDelegate.h"
#import "PXGRenderer.h"

@class MTKView, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, PXGMetalRenderTextureStore, PXGMetalTextureConverter;

@interface PXGMetalRenderer : NSObject <MTKViewDelegate, PXGMetalTextureConverterDelegate, PXGRenderer>
{
    struct os_unfair_lock_s _metalLock;
    id <MTLDevice> _device;
    MTKView *_metalView;
    id <MTLLibrary> _library;
    id <MTLCommandQueue> _commandQueue;
    id <MTLBuffer> _squareGeometryBuffer;
    unsigned long long _lastOffscreenRender;
    id <MTLTexture> _offscreenTexture;
    BOOL _isCreatingOffscreenTexture;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <MTLSamplerState> _mirrorRepeatSampler;
    id <MTLSamplerState> _clampToZeroSampler;
    id <MTLDepthStencilState> _depthStencil;
    struct os_unfair_lock_s _pipelinesLock;
    CDStruct_39b4dbd3 *_pipelines;
    long long _pipelinesCount;
    long long _pipelinesCapacity;
    NSObject<OS_dispatch_queue> *_compilationQueue;
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    NSMutableArray *_reusableRenderStates;
    long long _frameId;
    double _lastTime;
    PXGMetalRenderTextureStore *_opaqueTextures;
    PXGMetalRenderTextureStore *_translucentTextures;
    PXGMetalTextureConverter *_textureConverter;
    BOOL _isInvertColorsEnabled;
    CDUnknownBlockType _test_renderSnapshotHandler;
    id <PXGRendererDelegate> _delegate;
    struct CGRect _visibleRect;
    CDStruct_efb11229 _interactionState;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isInvertColorsEnabled; // @synthesize isInvertColorsEnabled=_isInvertColorsEnabled;
@property(readonly, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property(nonatomic) CDStruct_efb11229 interactionState; // @synthesize interactionState=_interactionState;
@property(nonatomic) __weak id <PXGRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType test_renderSnapshotHandler; // @synthesize test_renderSnapshotHandler=_test_renderSnapshotHandler;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (void)metalTextureConverter:(id)arg1 didCreateTexture:(id)arg2;
- (long long)_drawRenderTexture:(CDStruct_dcc83465 *)arg1 withCommandEncoder:(id)arg2;
- (void)_drawSpriteTextures:(id)arg1 renderState:(id)arg2 withCommandEncoder:(id)arg3 passingTest:(CDUnknownBlockType)arg4;
- (void)drawInMTKView:(id)arg1;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)_parseSpriteTextures:(id)arg1 willPerformOffscreenPass:(BOOL)arg2 renderState:(id)arg3;
- (void)_render:(id)arg1 withCompletionCompletion:(CDUnknownBlockType)arg2;
- (void)_configureCaptureSpriteTextures:(id)arg1 renderState:(id)arg2 withOffscreenTexture:(id)arg3;
- (id)_currentOffscreenTexture;
- (void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;
- (void)updateWithChangeDetails:(id)arg1;
- (void)setNeedsRender;
@property(readonly, nonatomic) id <PXGTextureConverter> textureConverter;
- (id)view;
@property(readonly, nonatomic) int presentationType;
- (double)_screenScale;
-     // Error parsing type: v24@0:8^{?={?=[4]}{?=[4]}{?=[4]}{?=[4]}f}16, name: _configureMatricesInUniforms:
@property(readonly, nonatomic) CDStruct_183601bc camera;
@property(readonly, nonatomic) struct CGRect visibleRectInRenderCoordinates;
- (void)_clearPipelines;
- (void)_pipelinesLock_resizePipelinesStorageIfNeeded;
- (id)_createPipelineStateForColorProgram:(id)arg1 shaderFlags:(int)arg2 colorPixelFormat:(unsigned long long)arg3;
- (CDStruct_39b4dbd3)_handleCompiledRenderPipelineState:(id)arg1 forColorProgram:(id)arg2 shaderFlags:(int)arg3 colorPixelFormat:(unsigned long long)arg4 pipelineIndex:(long long)arg5;
- (CDStruct_39b4dbd3)_pipelineForRenderTexture:(const CDStruct_dcc83465 *)arg1 waitForCompilation:(BOOL)arg2;
- (void)_checkinRenderState:(id)arg1;
- (id)_checkoutRenderState;
@property(readonly, nonatomic) unsigned long long destinationColorSpaceName;
- (void)_setupBuffers;
- (void)_setupMetalIfNeeded;
- (void)_handleScreenChanges:(id)arg1;
- (void)_registerForDisplayChangeNotifications;
- (void)_loadOffscreenTexture:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GGLLayerDelegate.h"
#import "MDRenderTarget.h"

@class CALayer, CALayer<GGLLayer>, NSString, VKSharedResources;

__attribute__((visibility("hidden")))
@interface MDDisplayLayer : NSObject <GGLLayerDelegate, MDRenderTarget>
{
    CALayer<GGLLayer> *_layer;
    id <GGLRenderQueueSource> _renderSource;
    shared_ptr_e963992e _taskContext;
    struct RenderQueue *_activeRenderQueue;
    struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKSharedResources *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _sharedResources;
    struct deque<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()>>> _completionHandlers;
    struct RenderTargetFormat _format;
    struct Device {
        int;
        struct shared_ptr<ggl::Device>;
        struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources>>;
    } *_device;
    struct Renderer {
        CDUnknownFunctionPointerType *;
        struct Device *;
        unsigned long long;
        unsigned long long;
        unsigned long long;
        _Bool;
        float;
        unsigned long long;
        struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator>>;
        struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue>>;
        struct shared_ptr<ggl::CommonLibrary>;
        struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences>>;
        struct Texture2D *;
        struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer>>;
    } *_renderer;
    struct mutex _debugConsoleManagerCreationLock;
    struct unique_ptr<md::DebugConsoleManager, std::__1::default_delete<md::DebugConsoleManager>> _debugConsoleManager;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _renderTarget;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _depthStencil;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _msaaTexture;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _colorTextures[3];
    BOOL _useMultisampling;
    BOOL _requiresMultisampling;
    struct CGContext *_snapshotContext;
    BOOL _readPixels;
    BOOL _shouldRasterize;
    struct CGRect _bounds;
    double _contentsScale;
    unsigned long long _signpostId;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property(readonly, nonatomic) BOOL multiSample; // @synthesize multiSample=_useMultisampling;
@property(nonatomic) id <GGLRenderQueueSource> renderSource; // @synthesize renderSource=_renderSource;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (struct DebugConsole *)debugConsoleForId:(int)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
@property(readonly, nonatomic) float averageFPS;
- (void)renderWithTimestamp:(double)arg1 completion:(function_d3afe2e2)arg2;
- (BOOL)hasRenderTarget;
- (void)destroyRenderTarget;
- (void)createRenderTarget;
@property(readonly, nonatomic) struct RenderTarget *finalRenderTarget;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) const struct RenderTargetFormat *format;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) double contentScale;
@property(nonatomic) struct CGSize size;
- (void)didEnterBackground;
- (void)didReceiveMemoryWarning;
- (shared_ptr_fa6aa836)bitmapData;
- (void)_didReadPixels:(shared_ptr_fa6aa836 *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)expandedPerformanceHUD:(id)arg1;
- (void)disablePerformanceHUD:(id)arg1;
- (void)enablePerformanceHUD:(id)arg1;
@property(readonly, nonatomic) struct Renderer *renderer;
- (void)didPresent;
- (void)willPresent;
- (void)didUpdateFrameTexture;
- (void)willUpdateFrameTexture;
- (void)drawToTexture:(struct Texture *)arg1 withRenderQueue:(struct RenderQueue *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)drawToTexture:(struct Texture *)arg1 withRenderQueue:(struct RenderQueue *)arg2;
- (struct RenderQueue *)_renderQueueForTimestamp:(double)arg1 prepareHandler:(CDUnknownBlockType)arg2;
- (struct RenderQueue *)renderQueueForTimestamp:(double)arg1;
- (BOOL)isDelayedRenderQueueConsumptionSupported;
- (void)prepareTexture:(struct Texture *)arg1;
- (void)dealloc;
- (id)initWithContentScale:(double)arg1 shouldRasterize:(BOOL)arg2 taskContext:(const shared_ptr_e963992e *)arg3 device:(struct Device *)arg4 sharedResources:(id)arg5 signpostId:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


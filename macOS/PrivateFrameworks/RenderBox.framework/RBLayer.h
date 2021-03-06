//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSTimer, RBDevice;

@interface RBLayer : CALayer
{
    struct objc_ptr<RBDevice *> _device;
    _Bool _disableAsync;
    _Bool _pendingFlush;
    _Bool _pendingCollection;
    NSTimer *_collectionTimer;
    struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable>> _drawable;
    struct objc_ptr<NSObject<OS_dispatch_semaphore>*> _semaphore;
    struct cf_ptr<_CAImageQueue *> _imageQueue;
    struct vector<RB::refcounted_ptr<(anonymous namespace)::Surface>, std::__1::allocator<RB::refcounted_ptr<(anonymous namespace)::Surface>>> _surfaces;
    BOOL _rendersAsynchronously;
    BOOL _clearsBackground;
    int _colorMode;
    CDStruct_0b1c536a _clearColor;
}

+ (id)defaultValueForKey:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_0b1c536a clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) BOOL clearsBackground; // @synthesize clearsBackground=_clearsBackground;
@property(nonatomic) int colorMode; // @synthesize colorMode=_colorMode;
@property(nonatomic) BOOL rendersAsynchronously; // @synthesize rendersAsynchronously=_rendersAsynchronously;
- (void)setBounds:(struct CGRect)arg1;
- (void)waitUntilAsyncRenderingCompleted;
- (void)_scheduleCollection;
- (void)drawInDisplayList:(id)arg1;
- (void)display;
@property(readonly, nonatomic, getter=isDrawableAvailable) BOOL drawableAvailable;
@property(retain, nonatomic) RBDevice *device;
- (void)dealloc;
- (void)rb_init;
- (id)initWithLayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


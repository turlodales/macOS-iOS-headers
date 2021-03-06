//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSOpenGLLayer.h>

@class NSOpenGLContext, SKView;

__attribute__((visibility("hidden")))
@interface SKOpenGLLayer : NSOpenGLLayer
{
    SKView *_skView;
    NSOpenGLContext *_context;
}

- (void).cxx_destruct;
@property(retain) NSOpenGLContext *context; // @synthesize context=_context;
@property(nonatomic) __weak SKView *skView; // @synthesize skView=_skView;
- (void)drawInOpenGLContext:(id)arg1 pixelFormat:(id)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (id)openGLPixelFormatForDisplayMask:(unsigned int)arg1;
- (double)NS_suggestedContentsScale;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (id)openGLContextForPixelFormat:(id)arg1;

@end


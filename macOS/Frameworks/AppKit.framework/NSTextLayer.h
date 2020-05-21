//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "CALayerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSTextLayer : CALayer <CALayerDelegate>
{
    CALayer *_foregroundLayer;
    CALayer *_bezelLayer;
}

@property(retain) CALayer *bezelLayer;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)_renderForegroundInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setSublayerTransform:(struct CATransform3D)arg1;
- (void)_appkitViewBackingLayerUniqueMethod;
- (void)_NS_invalidateSuggestedContentsScale;
- (void)NS_didChangeDefaultContentsScale:(double)arg1;
- (void)display;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


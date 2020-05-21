//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSMutableArray, NSString, PKPeerPayment3DScene, PKPeerPayment3DStore, SCNView;

@interface PKPeerPayment3DTextView : NSView
{
    SCNView *_sceneView;
    PKPeerPayment3DScene *_scene;
    double _sceneWidthUnits;
    double _sceneHeightUnits;
    NSMutableArray *_performHandlers;
    double _dynamicRollPitchMix;
    double _startAnimationTime;
    double _animationDuration;
    double _lastRenderTime;
    BOOL _liveMotionEnabled;
    BOOL _willAnimate;
    BOOL _snapshotRequested;
    BOOL _usedForSnapshotting;
    unsigned long long _framesFullyRendered;
    PKPeerPayment3DStore *_3DStore;
    BOOL _layoutRequested;
    NSMutableArray *_charactersToDraw;
    unsigned long long _renderStyle;
    NSString *_text;
}

+ (id)supportedCharacterSet;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) unsigned long long renderStyle; // @synthesize renderStyle=_renderStyle;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)performPostRender:(CDUnknownBlockType)arg1;
- (void)setMotionEffectEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (id)generatedSnapshot;
- (void)renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)layoutText;
- (void)loadCharactersAndLayout;
- (BOOL)setText:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)updateSceneUnits;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 renderStyle:(unsigned long long)arg2 usedForSnapshotting:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "PXChangeObserver.h"

@class CALayer, NSString, PXTitleSubtitleCALayerPromise, PXTitleSubtitleLabelSpec;

@interface PXTitleSubtitleNSLabel : NSView <PXChangeObserver>
{
    BOOL _needsUpdateLayerPromise;
    BOOL _rendersTextAsynchronously;
    NSString *_titleText;
    NSString *_subtitleText;
    PXTitleSubtitleLabelSpec *_spec;
    long long _typesettingMode;
    PXTitleSubtitleCALayerPromise *__layerPromise;
    CALayer *__contentLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setContentLayer:) CALayer *_contentLayer; // @synthesize _contentLayer=__contentLayer;
@property(retain, nonatomic, setter=_setLayerPromise:) PXTitleSubtitleCALayerPromise *_layerPromise; // @synthesize _layerPromise=__layerPromise;
@property(nonatomic) BOOL rendersTextAsynchronously; // @synthesize rendersTextAsynchronously=_rendersTextAsynchronously;
@property(nonatomic) long long typesettingMode; // @synthesize typesettingMode=_typesettingMode;
@property(retain, nonatomic) PXTitleSubtitleLabelSpec *spec; // @synthesize spec=_spec;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateContentLayer;
- (void)_updateLayerPromiseIfNeeded;
- (void)_updateLayerPromiseWithChanges:(CDUnknownBlockType)arg1;
- (void)_invalidateLayerPromise;
- (BOOL)mouseDownCanMoveWindow;
- (void)layout;
- (struct CGRect)contentBounds;
- (void)forceTextRendering;
- (void)_configureLayerPromise:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)viewDidChangeBackingProperties;
- (void)_handleChangeFromBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_PXTitleSubtitleNSLabelCommonInitialization;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


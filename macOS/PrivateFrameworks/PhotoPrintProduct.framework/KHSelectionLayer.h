//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHBaseShapeLayer.h>

@class KHRelatedPhotosButtonLayer, KHSelection, KHSimilarPhotosButtonLayer, NSMutableArray;

@interface KHSelectionLayer : KHBaseShapeLayer
{
    KHSelection *_selection;
    NSMutableArray *_resizeDotLayers;
    KHSimilarPhotosButtonLayer *_similarPhotosButtonLayer;
    KHRelatedPhotosButtonLayer *_relatedPhotosButtonLayer;
}

+ (id)layerWithSelection:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) KHRelatedPhotosButtonLayer *relatedPhotosButtonLayer; // @synthesize relatedPhotosButtonLayer=_relatedPhotosButtonLayer;
@property(retain, nonatomic) KHSimilarPhotosButtonLayer *similarPhotosButtonLayer; // @synthesize similarPhotosButtonLayer=_similarPhotosButtonLayer;
@property(retain, nonatomic) NSMutableArray *resizeDotLayers; // @synthesize resizeDotLayers=_resizeDotLayers;
@property(retain, nonatomic) KHSelection *selection; // @synthesize selection=_selection;
- (unsigned long long)selectionResizeTypeForPoint:(struct CGPoint)arg1;
- (void)layoutSublayers;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGRect)selectionSafeFrameForRect:(struct CGRect)arg1;
- (void)setPosition:(struct CGPoint)arg1 withInset:(BOOL)arg2;
- (void)setBounds:(struct CGRect)arg1 withInset:(BOOL)arg2;
- (void)_updateRelatedPhotosButton;
- (void)_updateSimilarPhotosButton;
- (struct CGPoint)_drawingOffset;
- (void)updateDisplay;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end


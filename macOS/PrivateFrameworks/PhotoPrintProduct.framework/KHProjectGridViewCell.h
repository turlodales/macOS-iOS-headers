//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHGridViewCell.h>

#import <PhotoPrintProduct/NSDraggingDestination-Protocol.h>
#import <PhotoPrintProduct/NSDraggingSource-Protocol.h>
#import <PhotoPrintProduct/NSPasteboardItemDataProvider-Protocol.h>

@class KHFrame, NSMutableArray, NSMutableDictionary, NSString, UXLabel, UXView;

@interface KHProjectGridViewCell : KHGridViewCell <NSDraggingSource, NSDraggingDestination, NSPasteboardItemDataProvider>
{
    struct CGRect _initialPhotoDraggingFrame;
    KHFrame *_sourceFrame;
    KHFrame *_destinationFrame;
    UXLabel *_pageNumberLabel;
    UXView *_draggingSelectionView;
    NSMutableDictionary *_photoFramesByRectValue;
    NSMutableArray *_dragRectsInReverseDrawingOrder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *dragRectsInReverseDrawingOrder; // @synthesize dragRectsInReverseDrawingOrder=_dragRectsInReverseDrawingOrder;
@property(retain, nonatomic) NSMutableDictionary *photoFramesByRectValue; // @synthesize photoFramesByRectValue=_photoFramesByRectValue;
@property(retain, nonatomic) UXView *draggingSelectionView; // @synthesize draggingSelectionView=_draggingSelectionView;
@property(retain, nonatomic) UXLabel *pageNumberLabel; // @synthesize pageNumberLabel=_pageNumberLabel;
@property(retain, nonatomic) KHFrame *destinationFrame; // @synthesize destinationFrame=_destinationFrame;
@property(retain, nonatomic) KHFrame *sourceFrame; // @synthesize sourceFrame=_sourceFrame;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityChildren;
- (struct CGRect)accessibilityFrame;
- (void)getLayoutInfo:(id)arg1;
- (void)showLayoutInspector:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)prepareForReuse;
- (void)didHideHoverState;
- (void)didShowHoverState;
- (struct CGRect)hoverStateTrackingRect;
- (void)setLayoutObject:(id)arg1;
- (void)_calculateDragFrameRectsForLayout:(id)arg1;
- (id)_frameRectValueAtLocation:(struct CGPoint)arg1;
- (void)_updateTitleTextForLayout:(id)arg1;
- (void)_handleLongClickGesture:(id)arg1;
- (void)_pageDragHandleClicked:(id)arg1;
- (id)frameAtLocation:(struct CGPoint)arg1;
- (void)layout;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


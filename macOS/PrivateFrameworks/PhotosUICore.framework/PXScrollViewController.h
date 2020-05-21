//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXTilingScrollController.h"

@class NSHashTable, NSObject<PXAnonymousScrollView>, NSString, NSView<PXAnonymousCoordinateSpace>, PXTilingScrollInfo;

@interface PXScrollViewController : NSObject <PXTilingScrollController>
{
    NSHashTable *_willLayoutSubviewsObservers;
    NSHashTable *_didLayoutSubviewsObservers;
    NSHashTable *_didScrollObservers;
    BOOL _isDecelerating;
    BOOL _isDragging;
    BOOL _isTracking;
    BOOL _isScrubbing;
    BOOL _isManuallyChanging;
    BOOL _deferContentOffsetUpdates;
    id <PXTilingScrollControllerUpdateDelegate> _updateDelegate;
    PXTilingScrollInfo *_scrollInfo;
    NSObject<PXAnonymousScrollView> *_scrollView;
    NSView<PXAnonymousCoordinateSpace> *_contentCoordinateSpace;
    NSHashTable *__observers;
    long long _activeScrollAnimations;
    struct CGSize _scrollViewContentSize;
    struct NSEdgeInsets _contentInset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize scrollViewContentSize; // @synthesize scrollViewContentSize=_scrollViewContentSize;
@property(readonly, nonatomic) long long activeScrollAnimations; // @synthesize activeScrollAnimations=_activeScrollAnimations;
@property(readonly, nonatomic) NSHashTable *_observers; // @synthesize _observers=__observers;
@property(nonatomic) BOOL deferContentOffsetUpdates; // @synthesize deferContentOffsetUpdates=_deferContentOffsetUpdates;
@property(nonatomic) struct NSEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) NSView<PXAnonymousCoordinateSpace> *contentCoordinateSpace; // @synthesize contentCoordinateSpace=_contentCoordinateSpace;
@property(readonly, nonatomic) BOOL isManuallyChanging; // @synthesize isManuallyChanging=_isManuallyChanging;
@property(readonly, nonatomic) BOOL isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(readonly, nonatomic) BOOL isTracking; // @synthesize isTracking=_isTracking;
@property(readonly, nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@property(readonly, nonatomic) BOOL isDecelerating; // @synthesize isDecelerating=_isDecelerating;
@property(readonly, nonatomic) NSObject<PXAnonymousScrollView> *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) PXTilingScrollInfo *scrollInfo; // @synthesize scrollInfo=_scrollInfo;
@property(nonatomic) __weak id <PXTilingScrollControllerUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic) struct CGRect contentBounds;
@property(nonatomic) struct CGPoint visibleOrigin;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
@property(readonly, nonatomic) struct CGRect targetRect;
@property(readonly, nonatomic) struct CGRect constrainedVisibleRect;
@property(readonly, nonatomic) struct CGRect visibleRect;
@property(readonly, nonatomic) struct CGRect activeRect;
@property(readonly, nonatomic) struct CGSize referenceSize;
- (void)performManualChange:(CDUnknownBlockType)arg1;
- (void)applyScrollInfo:(id)arg1;
@property(nonatomic) struct CGRect scrollViewContentBounds;
@property(readonly, nonatomic) struct CGRect scrollViewTargetRect;
@property(readonly, nonatomic) struct CGRect scrollViewConstrainedVisibleRect;
@property(readonly, nonatomic) struct CGRect scrollViewVisibleRect;
@property(readonly, nonatomic) struct CGRect scrollViewActiveRect;
@property(readonly, nonatomic) struct CGSize scrollViewReferenceSize;
- (void)scrollViewLayoutIfNeeded;
- (void)setScrollViewNeedsLayout;
- (void)scrollRectToVisible:(struct CGRect)arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (BOOL)isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (void)scrollToEdge:(unsigned int)arg1;
- (void)addSubviewToScrollView:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation;
- (void)scrollViewWillBeginScrollingAnimationTowardsContentEdges:(unsigned long long)arg1;
- (BOOL)scrollViewShouldScrollToTop;
- (void)scrollViewContentBoundsDidChange;
- (void)scrollViewDidEndScrolling;
- (void)willEndScrollingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (void)scrollViewDidScroll;
- (void)scrollViewWillBeginScrolling;
- (void)scrollViewDidLayout;
- (void)scrollViewWillLayout;
@property(readonly, nonatomic) BOOL hasWindow;
@property(readonly, nonatomic) BOOL isAnimatingScroll;
- (void)setActiveScrollAnimations:(long long)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


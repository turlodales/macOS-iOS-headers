//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "PXMemoriesFeedScrollFilterDelegate.h"
#import "PXMemoriesFeedTilingLayoutDelegate.h"
#import "PXSectionedDataSourceManagerObserver.h"
#import "PXSectionedLayoutEngineDelegate.h"
#import "PXTilingControllerScrollDelegate.h"
#import "PXTilingControllerTransitionDelegate.h"

@class NSDate, NSString, PHPhotoLibrary, PXExtendedTraitCollection, PXMemoriesFeedDataSourceManager, PXMemoriesFeedScrollFilter, PXMemoriesFeedTilingLayout, PXMemoriesFeedTransitionAnimationCoordinator, PXMemoriesSpec, PXMemoriesSpecManager, PXScrollViewController, PXSectionedLayoutEngine, PXSectionedObjectReference, PXSectionedSelectionManager, PXTilingController;

@interface PXMemoriesFeedViewControllerHelper : PXObservable <PXSectionedDataSourceManagerObserver, PXSectionedLayoutEngineDelegate, PXMemoriesFeedScrollFilterDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXMemoriesFeedTilingLayoutDelegate>
{
    struct {
        char layoutEngine;
    } _needsToUpdate;
    struct {
        char feedIsVisible;
        char reloadedTileKindsOnObjectChanged;
        char configureMetrics;
    } _delegateRespondsTo;
    id _refreshResetNotification;
    BOOL _hasAppeared;
    BOOL _hasKickedOffBatchGeneration;
    BOOL __requestingNewMemories;
    PXTilingController *_tilingController;
    PXMemoriesFeedDataSourceManager *_dataSourceManager;
    PXMemoriesSpecManager *_specManager;
    PXSectionedSelectionManager *_selectionManager;
    PHPhotoLibrary *_photoLibrary;
    PXScrollViewController *_scrollViewController;
    PXExtendedTraitCollection *_traitCollection;
    id <PXMemoriesFeedViewControllerHelperDelegate> _delegate;
    PXSectionedObjectReference *_highlightedMemoryReference;
    PXSectionedObjectReference *_activatedMemoryReference;
    PXSectionedObjectReference *_lastActionPresentationMemoryReference;
    NSString *_scrollTargetMemoryUUID;
    NSDate *__lastUserMemoryGenerationRequestDate;
    PXSectionedObjectReference *__memoryReferenceToScrollToVisible;
    PXSectionedObjectReference *_anchorMemoryReference;
    PXSectionedLayoutEngine *__layoutEngine;
    PXMemoriesFeedScrollFilter *__scrollFilter;
    PXMemoriesSpec *__spec;
    PXMemoriesFeedTransitionAnimationCoordinator *__transitionAnimationCoordinator;
    long long __refreshRetryCount;
    CDUnknownBlockType __newMemoriesRequestCompletion;
    struct CGPoint _anchorMemoryOrigin;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setNewMemoriesRequestCompletion:) CDUnknownBlockType _newMemoriesRequestCompletion; // @synthesize _newMemoriesRequestCompletion=__newMemoriesRequestCompletion;
@property(nonatomic, getter=_isRequestingNewMemories, setter=_setRequestingNewMemories:) BOOL _requestingNewMemories; // @synthesize _requestingNewMemories=__requestingNewMemories;
@property(nonatomic, setter=_setRefreshRetryCount:) long long _refreshRetryCount; // @synthesize _refreshRetryCount=__refreshRetryCount;
@property(readonly, nonatomic) PXMemoriesFeedTransitionAnimationCoordinator *_transitionAnimationCoordinator; // @synthesize _transitionAnimationCoordinator=__transitionAnimationCoordinator;
@property(retain, nonatomic, setter=_setSpec:) PXMemoriesSpec *_spec; // @synthesize _spec=__spec;
@property(readonly, nonatomic) PXMemoriesFeedScrollFilter *_scrollFilter; // @synthesize _scrollFilter=__scrollFilter;
@property(readonly, nonatomic) PXSectionedLayoutEngine *_layoutEngine; // @synthesize _layoutEngine=__layoutEngine;
@property(nonatomic, setter=_setAnchorMemoryOrigin:) struct CGPoint anchorMemoryOrigin; // @synthesize anchorMemoryOrigin=_anchorMemoryOrigin;
@property(retain, nonatomic, setter=_setAnchorMemoryReference:) PXSectionedObjectReference *anchorMemoryReference; // @synthesize anchorMemoryReference=_anchorMemoryReference;
@property(retain, nonatomic, setter=_setMemoryReferenceToScrollToVisible:) PXSectionedObjectReference *_memoryReferenceToScrollToVisible; // @synthesize _memoryReferenceToScrollToVisible=__memoryReferenceToScrollToVisible;
@property(retain, nonatomic, setter=_setLastUserMemoryGenerationRequestDate:) NSDate *_lastUserMemoryGenerationRequestDate; // @synthesize _lastUserMemoryGenerationRequestDate=__lastUserMemoryGenerationRequestDate;
@property(retain, nonatomic, setter=setScrollTargetMemoryUUID:) NSString *scrollTargetMemoryUUID; // @synthesize scrollTargetMemoryUUID=_scrollTargetMemoryUUID;
@property(retain, nonatomic) PXSectionedObjectReference *lastActionPresentationMemoryReference; // @synthesize lastActionPresentationMemoryReference=_lastActionPresentationMemoryReference;
@property(retain, nonatomic) PXSectionedObjectReference *activatedMemoryReference; // @synthesize activatedMemoryReference=_activatedMemoryReference;
@property(retain, nonatomic) PXSectionedObjectReference *highlightedMemoryReference; // @synthesize highlightedMemoryReference=_highlightedMemoryReference;
@property(nonatomic) __weak id <PXMemoriesFeedViewControllerHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) PXMemoriesSpecManager *specManager; // @synthesize specManager=_specManager;
@property(readonly, nonatomic) PXMemoriesFeedDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PXTilingController *tilingController; // @synthesize tilingController=_tilingController;
- (void)_scrollToTargetMemoryUUIDWhenReady:(id)arg1;
- (id)memoriesFeedTilingLayout:(id)arg1 titleFontNameForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct CGRect)memoriesFeedTilingLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
- (struct CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint)arg3;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (void)scrollFilterShouldRequestAdditionalContent:(id)arg1;
- (void)layoutEngine:(id)arg1 willGenerateLayoutWithGenerator:(id)arg2 forSection:(unsigned long long)arg3;
- (void)layoutEngineDidUpdateLayoutSnapshot:(id)arg1;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_configureLayout:(id)arg1;
- (void)_handleNewLayoutSnapshot:(id)arg1;
- (void)_handleTraitCollectionChange:(unsigned long long)arg1;
- (void)_updateHighlightedIndexPathInLayout:(id)arg1;
- (void)_updateHighlightedIndexPathInLayout;
- (void)_updateSelectedIndexPathsInLayout:(id)arg1;
- (void)_updateSelectedIndexPathsInLayout;
- (void)_handleDataSourceChange;
- (void)saveAnchorMemory;
- (void)scrollMemoryReferenceToVisible:(id)arg1 animated:(BOOL)arg2;
- (void)_configureMetrics:(id)arg1;
- (void)_updateLayoutEngineIfNeeded;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_invalidateLayoutEngine;
- (void)_enumerateInsertedItemsInChangeDetails:(id)arg1 withDataSource:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_memoryReferenceInsertedOnChangeToDataSource:(id)arg1 withChangeDetails:(id)arg2;
- (void)_handleFinishedRequestingNewMemoriesWithSuccess:(BOOL)arg1 reason:(unsigned long long)arg2 error:(id)arg3;
- (void)_handleRefreshCompletionWithResultInformation:(id)arg1 reason:(unsigned long long)arg2 error:(id)arg3;
- (void)_startRefreshForReason:(unsigned long long)arg1;
- (void)_generateMemoriesForReason:(unsigned long long)arg1;
- (void)_generateMemoriesForReason:(unsigned long long)arg1 contextualMemoriesSettings:(id)arg2;
- (void)invalidateMetrics;
- (void)feedViewControllerDidDisappear;
- (void)feedViewControllerDidAppear:(BOOL)arg1;
- (void)feedViewControllerWillLayoutSubviews;
@property(readonly, nonatomic) PXMemoriesFeedTilingLayout *targetLayout;
@property(readonly, nonatomic) PXMemoriesFeedTilingLayout *currentLayout;
- (struct PXSimpleIndexPath)indexPathForMemoryObjectReference:(id)arg1;
- (id)memoryInfoAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForMemoryInScrollViewAtPoint:(struct CGPoint)arg1;
- (id)memoryInfoForMemoryObjectReference:(id)arg1;
- (id)memoryInfoInScrollViewAtPoint:(struct CGPoint)arg1;
- (id)memoryObjectReferenceInScrollViewAtPoint:(struct CGPoint)arg1;
- (void)didChangeTilingControllerLayout;
- (void)requestNewMemoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestNewMemoriesForReason:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)canRequestNewMemories;
- (BOOL)canRequestNewMemoriesForReason:(unsigned long long)arg1;
- (void)_handleChangeFromDataSource:(id)arg1 toDataSource:(id)arg2 withChangeDetails:(id)arg3;
- (void)prepare;
- (id)initWithScrollViewController:(id)arg1 photoLibrary:(id)arg2 traitCollection:(id)arg3 memoriesStyle:(unsigned long long)arg4 tilingControllerConfigurationBlock:(CDUnknownBlockType)arg5;
- (id)initWithScrollViewController:(id)arg1 photoLibrary:(id)arg2 traitCollection:(id)arg3 tilingControllerConfigurationBlock:(CDUnknownBlockType)arg4;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)mutableChangeObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


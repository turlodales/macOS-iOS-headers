//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXCollectionViewController.h"

#import "KHPhotoBinDragViewDelegate.h"
#import "KHPhotoBinPhotoCellAccessibilitySelectionDelegate.h"
#import "UXCollectionViewAccessibilityDelegate.h"
#import "UXCollectionViewDelegateFlowLayout.h"

@class KHPhotoBinDragView, KHProjectPhoto, NSArray, NSIndexPath, NSLayoutConstraint, NSMutableArray, NSString, UXLabel;

@interface KHPhotoBinViewController : UXCollectionViewController <KHPhotoBinPhotoCellAccessibilitySelectionDelegate, UXCollectionViewAccessibilityDelegate, KHPhotoBinDragViewDelegate, UXCollectionViewDelegateFlowLayout>
{
    double _anchoredScrollFactor;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    BOOL _canDeleteContents;
    BOOL _shouldHandleDraggingEvents;
    BOOL _selectionShouldStealFocus;
    BOOL _updatingSelection;
    BOOL _updatingContent;
    BOOL _requiresContentUpdateOnAppear;
    NSArray *_photos;
    id <KHPhotoBinViewControllerDelegate> _delegate;
    NSString *_emptyDescription;
    KHPhotoBinDragView *_photoBinDraggingView;
    KHProjectPhoto *_draggingPhoto;
    NSIndexPath *_clickedIndexPath;
    id _observationObject;
    NSString *_observationKeyPath;
    NSArray *_delayedPhotoSelection;
    NSMutableArray *_pendingGhostedPhotos;
    UXLabel *_emptyBinLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UXLabel *emptyBinLabel; // @synthesize emptyBinLabel=_emptyBinLabel;
@property(nonatomic) BOOL requiresContentUpdateOnAppear; // @synthesize requiresContentUpdateOnAppear=_requiresContentUpdateOnAppear;
@property(nonatomic) BOOL updatingContent; // @synthesize updatingContent=_updatingContent;
@property(nonatomic) BOOL updatingSelection; // @synthesize updatingSelection=_updatingSelection;
@property(retain, nonatomic) NSMutableArray *pendingGhostedPhotos; // @synthesize pendingGhostedPhotos=_pendingGhostedPhotos;
@property(retain, nonatomic) NSArray *delayedPhotoSelection; // @synthesize delayedPhotoSelection=_delayedPhotoSelection;
@property(retain, nonatomic) NSString *observationKeyPath; // @synthesize observationKeyPath=_observationKeyPath;
@property(retain) id observationObject; // @synthesize observationObject=_observationObject;
@property(nonatomic) BOOL selectionShouldStealFocus; // @synthesize selectionShouldStealFocus=_selectionShouldStealFocus;
@property(retain, nonatomic) NSIndexPath *clickedIndexPath; // @synthesize clickedIndexPath=_clickedIndexPath;
@property(retain, nonatomic) KHProjectPhoto *draggingPhoto; // @synthesize draggingPhoto=_draggingPhoto;
@property(retain) KHPhotoBinDragView *photoBinDraggingView; // @synthesize photoBinDraggingView=_photoBinDraggingView;
@property(copy, nonatomic) NSString *emptyDescription; // @synthesize emptyDescription=_emptyDescription;
@property(nonatomic) BOOL shouldHandleDraggingEvents; // @synthesize shouldHandleDraggingEvents=_shouldHandleDraggingEvents;
@property(nonatomic) BOOL canDeleteContents; // @synthesize canDeleteContents=_canDeleteContents;
@property __weak id <KHPhotoBinViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)photoBinPhotoCellWasPicked:(id)arg1;
- (void)photoBinPhotoCellWasPressed:(id)arg1;
- (id)collectionViewAccessibilityRoleDescription:(id)arg1;
- (struct CGSize)photoBinDragView:(id)arg1 itemSizeForAspectRatio:(double)arg2;
- (void)photoId:(id)arg1 droppedOnPhotoView:(id)arg2;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (unsigned long long)collectionView:(id)arg1 draggingSession:(id)arg2 sourceOperationMaskForDraggingContext:(long long)arg3;
- (void)collectionView:(id)arg1 createdDraggingSession:(id)arg2 forItemsAtIndexPaths:(id)arg3;
- (id)collectionView:(id)arg1 draggingItemForIndexPath:(id)arg2 proposedDraggingItem:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldBeginDraggingSessionWithClickedItemAtIndexPath:(id)arg2;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetOnResizeForProposedContentOffset:(struct CGPoint)arg2;
- (void)collectionViewDidEndScrolling:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct NSEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupObservationForPhotos;
- (void)removeObservationForPhotos;
- (struct CGSize)_imageSizeForProjectPhoto:(id)arg1;
- (struct CGSize)_imageSizeForAspectRatio:(double)arg1;
- (void)_contentUpdated;
- (void)_updatePhotos:(id)arg1;
- (void)_reloadData;
- (void)_updateCellForPhoto:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) NSArray *photos; // @synthesize photos=_photos;
@property(readonly) NSArray *availablePhotos;
@property(readonly) BOOL isEmpty;
@property(nonatomic) double contentLength;
- (void)markPhoto:(id)arg1 transitioning:(BOOL)arg2;
- (struct CGRect)rectForPhoto:(id)arg1;
- (void)updateSelectionWithPhotos:(id)arg1 scroll:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setupObservationForObject:(id)arg1 keyPath:(id)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)viewDidLiveResize;
- (void)viewWillLiveResize;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


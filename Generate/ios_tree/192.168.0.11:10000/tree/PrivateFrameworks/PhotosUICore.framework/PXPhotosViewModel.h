/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosViewModel : PXObservable <PXAssetsDataSourceManagerObserver, PXMutablePhotosViewModel, PXUIKeyCommandNamespace> {
    bool  _allowsAddAction;
    bool  _allowsAspectFitToggle;
    bool  _allowsChromeManagementBehavior;
    bool  _allowsCopyAction;
    bool  _allowsEmptyPlaceholderBehavior;
    bool  _allowsGridAppearanceActions;
    bool  _allowsInlineAddBehavior;
    bool  _allowsInteractiveFavoriteBadges;
    bool  _allowsOneUpPresentation;
    bool  _allowsPickAssetAction;
    bool  _allowsPopOnContainerDeleteBehavior;
    bool  _allowsQuickLookAction;
    bool  _allowsSelectAllAction;
    bool  _allowsSelectModeToggle;
    bool  _allowsSelectSectionAction;
    bool  _allowsSelectionUserActivityBehavior;
    bool  _allowsShareAllAction;
    bool  _allowsShowDetails;
    bool  _allowsShowMapAction;
    bool  _allowsSlideshowAction;
    bool  _aspectFitContent;
    NSMutableSet * _aspectRatioTogglePreventedForReasons;
    PXAssetActionManager * _assetActionManager;
    PXAssetCollectionActionManager * _assetCollectionActionManager;
    bool  _captionsVisible;
    bool  _contentBelowTitle;
    long long  _contentMode;
    PXAssetsDataSource * _currentDataSource;
    PXAssetsDataSourceManager * _dataSourceManager;
    bool  _dismissRequested;
    NSSet * _draggedAssetReferences;
    PXAssetReference * _dropTargetAssetReference;
    NSMutableSet * _enterSelectModePreventedForReasons;
    PXContentFilterState * _filterState;
    <NSObject> * _filterTimeoutObserver;
    double  _floatingTitleOpacity;
    bool  _footerHasImportantInformation;
    NSString * _footerSubtitle;
    PXFooterViewModel * _footerViewModel;
    long long  _footerVisibilityStyle;
    unsigned long long  _forbiddenBadges;
    PXPhotosGridActionManager * _gridActionManager;
    bool  _hasScrollableContent;
    double  _headerTitleTopInset;
    bool  _hideFooterInSelectMode;
    NSMutableSet * _hideSurroundingContentForReasons;
    bool  _isAppearing;
    bool  _isInCompactMode;
    bool  _isInSelectMode;
    bool  _isInteractiveZooming;
    bool  _keepsTabBarAlwaysHidden;
    PXLoadingStatusManager * _loadingStatusManager;
    bool  _lowMemoryMode;
    PXMediaProvider * _mediaProvider;
    long long  _navBarStyle;
    long long  _numberOfZoomSteps;
    NSMutableSet * _oneUpPresentationPreventedForReasons;
    <PXPhotosGridOptionsController> * _optionsController;
    bool  _requiresLightTopBars;
    bool  _scrolledToTop;
    PXSectionedSelectionManager * _selectionManager;
    PXSelectionSnapshot * _selectionSnapshot;
    bool  _shouldAnimateZooming;
    bool  _showingAlternateContent;
    PXPhotosLayoutSpecManager * _specManager;
    bool  _supportsAspectRatioToggle;
    bool  _supportsZooming;
    NSString * _title;
    double  _topBarsAppearanceChangeAnimationDuration;
    PXUpdater * _updater;
    NSNumber * _userWantsAspectFitContent;
    bool  _viewBasedDecorationsEnabled;
    NSMutableOrderedSet * _visibleAssetCollections;
    bool  _wantsCPLStatus;
    bool  _wantsContentFilterIndicatorVisible;
    bool  _wantsContentFilterVisible;
    bool  _wantsDimmedSelectionStyle;
    bool  _wantsFloatingTitle;
    bool  _wantsFooterTransparent;
    bool  _wantsFooterVisible;
    bool  _wantsModernNavBarButtons;
    bool  _wantsTabBarVisible;
    bool  _wantsToolbarVisible;
    PXAssetReference * _zoomAnchorAssetReference;
    double  _zoomStep;
}

@property (nonatomic, readonly) bool allowsAddAction;
@property (nonatomic, readonly) bool allowsChromeManagementBehavior;
@property (nonatomic, readonly) bool allowsCopyAction;
@property (nonatomic, readonly) bool allowsEmptyPlaceholderBehavior;
@property (nonatomic, readonly) bool allowsGridAppearanceActions;
@property (nonatomic, readonly) bool allowsInlineAddBehavior;
@property (nonatomic, readonly) bool allowsInteractiveFavoriteBadges;
@property (nonatomic, readonly) bool allowsPickAssetAction;
@property (nonatomic, readonly) bool allowsPopOnContainerDeleteBehavior;
@property (nonatomic, readonly) bool allowsQuickLookAction;
@property (nonatomic, readonly) bool allowsSelectAllAction;
@property (nonatomic, readonly) bool allowsSelectModeToggle;
@property (nonatomic, readonly) bool allowsSelectSectionAction;
@property (nonatomic, readonly) bool allowsSelectionUserActivityBehavior;
@property (nonatomic, readonly) bool allowsShareAllAction;
@property (nonatomic, readonly) bool allowsShowDetails;
@property (nonatomic, readonly) bool allowsShowMapAction;
@property (nonatomic, readonly) bool allowsSlideshowAction;
@property (nonatomic) bool aspectFitContent;
@property (nonatomic, readonly) PXAssetActionManager *assetActionManager;
@property (nonatomic, readonly) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (nonatomic, readonly) bool canEnterSelectMode;
@property (nonatomic, readonly) bool canExitSelectMode;
@property (nonatomic, readonly) bool canFilterContent;
@property (nonatomic, readonly) bool canPresentOneUp;
@property (nonatomic, readonly) bool canSwipeSelect;
@property (nonatomic, readonly) bool captionsVisible;
@property (getter=isContentBelowTitle, nonatomic, readonly) bool contentBelowTitle;
@property (nonatomic, readonly) PXAssetsDataSource *currentDataSource;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dismissRequested;
@property (nonatomic, readonly, copy) NSSet *draggedAssetReferences;
@property (nonatomic, readonly) PXAssetReference *dropTargetAssetReference;
@property (nonatomic, readonly) PXContentFilterState *filterState;
@property (nonatomic, readonly) double floatingTitleOpacity;
@property (nonatomic, readonly) bool footerHasImportantInformation;
@property (nonatomic, readonly, copy) NSString *footerSubtitle;
@property (nonatomic, readonly) PXFooterViewModel *footerViewModel;
@property (nonatomic, readonly) unsigned long long forbiddenBadges;
@property (nonatomic, readonly) PXPhotosGridActionManager *gridActionManager;
@property (nonatomic, readonly) bool hasScrollableContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double headerTitleTopInset;
@property (nonatomic, readonly) bool hideFooterInSelectMode;
@property (nonatomic, readonly) bool hideSurroundingContent;
@property (nonatomic, readonly) bool isAppearing;
@property (nonatomic, readonly) bool isInCompactMode;
@property (nonatomic, readonly) bool isInSelectMode;
@property (nonatomic) bool isInteractiveZooming;
@property (nonatomic) bool keepsTabBarAlwaysHidden;
@property (nonatomic, readonly) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic, readonly) bool lowMemoryMode;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) NSString *namespaceIdentifier;
@property (nonatomic, readonly) long long navBarStyle;
@property (nonatomic, readonly) long long numberOfZoomSteps;
@property (nonatomic, readonly) <PXPhotosGridOptionsController> *optionsController;
@property (nonatomic, readonly) bool requiresLightTopBars;
@property (getter=isScrolledToTop, nonatomic, readonly) bool scrolledToTop;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic) bool shouldAnimateZooming;
@property (nonatomic, readonly) bool shouldAspectFitContentByDefault;
@property (getter=isShowingAlternateContent, nonatomic, readonly) bool showingAlternateContent;
@property (nonatomic, readonly) PXPhotosLayoutSpecManager *specManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAspectRatioToggle;
@property (nonatomic, readonly) bool supportsZooming;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) double topBarsAppearanceChangeAnimationDuration;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly, copy) NSNumber *userWantsAspectFitContent;
@property (nonatomic, readonly) bool viewBasedDecorationsEnabled;
@property (nonatomic, readonly) NSOrderedSet *visibleAssetCollections;
@property (nonatomic, readonly) bool wantsCPLStatus;
@property (nonatomic, readonly) bool wantsContentFilterIndicatorVisible;
@property (nonatomic, readonly) bool wantsContentFilterVisible;
@property (nonatomic, readonly) bool wantsDimmedSelectionStyle;
@property (nonatomic, readonly) bool wantsFloatingTitle;
@property (nonatomic) bool wantsFooterTransparent;
@property (nonatomic) bool wantsFooterVisible;
@property (nonatomic, readonly) bool wantsModernNavBarButtons;
@property (nonatomic) bool wantsTabBarVisible;
@property (nonatomic) bool wantsToolbarVisible;
@property (nonatomic, retain) PXAssetReference *zoomAnchorAssetReference;
@property (nonatomic) double zoomStep;

- (void).cxx_destruct;
- (void)_addActions:(id)arg1 actionManager:(id)arg2 intoArray:(id)arg3;
- (void)_addAssetCollectionActionShortcutsIntoArray:(id)arg1;
- (void)_addEnterOneUpShortcutIntoArray:(id)arg1;
- (void)_addGridActionShortcutsIntoArray:(id)arg1;
- (void)_addSelectionShortcutsIntoArray:(id)arg1 usingDelegate:(id)arg2;
- (id)_indexPathsForAssetCollectionReference:(id)arg1;
- (void)_invalidateAspectFitContent;
- (void)_invalidateAssetsDataSourceManager;
- (void)_invalidateChromeVisibility;
- (void)_invalidateDraggedAssetReferences;
- (void)_invalidateFooterVisibility;
- (void)_invalidateGridAppearance;
- (void)_invalidateTopBarsStyles;
- (void)_invalidateUserWantsAspectFitContent;
- (void)_invalidateWantsContentFilterIndicatorVisible;
- (bool)_performSelectionKeyCommand:(id)arg1 withDelegate:(id)arg2;
- (void)_setNeedsUpdate;
- (void)_updateAspectFitContent;
- (void)_updateAssetsDataSourceManager;
- (void)_updateChromeVisibility;
- (void)_updateDataSourceDependentProperties;
- (void)_updateDraggedAssetReferences;
- (void)_updateFilteringTimeoutObserver;
- (void)_updateFooterVisibility;
- (void)_updateGridAppearance;
- (void)_updateTopBarsStyles;
- (void)_updateUserWantsAspectFitContent;
- (void)_updateWantsContentFilterIndicatorVisible;
- (bool)allowsAddAction;
- (bool)allowsChromeManagementBehavior;
- (bool)allowsCopyAction;
- (bool)allowsEmptyPlaceholderBehavior;
- (bool)allowsGridAppearanceActions;
- (bool)allowsInlineAddBehavior;
- (bool)allowsInteractiveFavoriteBadges;
- (bool)allowsPickAssetAction;
- (bool)allowsPopOnContainerDeleteBehavior;
- (bool)allowsQuickLookAction;
- (bool)allowsSelectAllAction;
- (bool)allowsSelectModeToggle;
- (bool)allowsSelectSectionAction;
- (bool)allowsSelectionUserActivityBehavior;
- (bool)allowsShareAllAction;
- (bool)allowsShowDetails;
- (bool)allowsShowMapAction;
- (bool)allowsSlideshowAction;
- (bool)aspectFitContent;
- (id)assetActionManager;
- (id)assetCollectionActionManager;
- (bool)attemptSetInSelectMode:(bool)arg1;
- (bool)canEnterSelectMode;
- (bool)canExitSelectMode;
- (bool)canFilterContent;
- (bool)canPresentOneUp;
- (bool)canSwipeSelect;
- (bool)captionsVisible;
- (id)currentDataSource;
- (id)dataSourceManager;
- (void)didPerformChanges;
- (bool)dismissRequested;
- (id)draggedAssetReferences;
- (id)dropTargetAssetReference;
- (id)filterState;
- (double)floatingTitleOpacity;
- (bool)footerHasImportantInformation;
- (id)footerSubtitle;
- (id)footerViewModel;
- (unsigned long long)forbiddenBadges;
- (id)gridActionManager;
- (bool)hasScrollableContent;
- (double)headerTitleTopInset;
- (bool)hideFooterInSelectMode;
- (bool)hideSurroundingContent;
- (id)init;
- (id)initWithConfiguration:(id)arg1 specManager:(id)arg2;
- (bool)isAppearing;
- (bool)isContentBelowTitle;
- (bool)isInCompactMode;
- (bool)isInSelectMode;
- (bool)isInteractiveZooming;
- (bool)isScrolledToTop;
- (bool)isShowingAlternateContent;
- (bool)keepsTabBarAlwaysHidden;
- (id)loadingStatusManager;
- (bool)lowMemoryMode;
- (id)mediaProvider;
- (id)namespaceIdentifier;
- (long long)navBarStyle;
- (long long)numberOfZoomSteps;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)optionsController;
- (bool)performKeyCommand:(id)arg1 keyCommandDelegate:(id)arg2 directionalSelectionDelegate:(id)arg3;
- (bool)requiresLightTopBars;
- (id)selectionManager;
- (id)selectionSnapshot;
- (void)setAspectFitContent:(bool)arg1;
- (void)setAspectRatioToggleAllowed:(bool)arg1 forReason:(id)arg2;
- (void)setCaptionsVisible:(bool)arg1;
- (void)setContentBelowTitle:(bool)arg1;
- (void)setCurrentDataSource:(id)arg1;
- (void)setDismissRequested:(bool)arg1;
- (void)setDraggedAssetReferences:(id)arg1;
- (void)setDropTargetAssetReference:(id)arg1;
- (void)setEnterSelectModeAllowed:(bool)arg1 forReason:(id)arg2;
- (void)setFilterState:(id)arg1;
- (void)setFloatingTitleOpacity:(double)arg1;
- (void)setFooterHasImportantInformation:(bool)arg1;
- (void)setHasScrollableContent:(bool)arg1;
- (void)setHeaderTitleTopInset:(double)arg1;
- (void)setHideSurroundingContent:(bool)arg1 forReason:(id)arg2;
- (void)setIsAppearing:(bool)arg1;
- (void)setIsInCompactMode:(bool)arg1;
- (void)setIsInSelectMode:(bool)arg1;
- (void)setIsInteractiveZooming:(bool)arg1;
- (void)setKeepsTabBarAlwaysHidden:(bool)arg1;
- (void)setNumberOfZoomSteps:(long long)arg1;
- (void)setOneUpPresentationAllowed:(bool)arg1 forReason:(id)arg2;
- (void)setRequiresLightTopBars:(bool)arg1;
- (void)setScrolledToTop:(bool)arg1;
- (void)setSelectionSnapshot:(id)arg1;
- (void)setShouldAnimateZooming:(bool)arg1;
- (void)setShowingAlternateContent:(bool)arg1;
- (void)setSupportsAspectRatioToggle:(bool)arg1;
- (void)setUserWantsAspectFitContent:(id)arg1;
- (void)setViewBasedDecorationsEnabled:(bool)arg1;
- (void)setWantsContentFilterIndicatorVisible:(bool)arg1;
- (void)setWantsContentFilterVisible:(bool)arg1;
- (void)setWantsFooterTransparent:(bool)arg1;
- (void)setWantsFooterVisible:(bool)arg1;
- (void)setWantsTabBarVisible:(bool)arg1;
- (void)setWantsToolbarVisible:(bool)arg1;
- (void)setZoomAnchorAssetReference:(id)arg1;
- (void)setZoomStep:(double)arg1;
- (void)setZoomStep:(double)arg1 isInteractive:(bool)arg2 shouldAnimate:(bool)arg3 anchorAssetReference:(id)arg4;
- (bool)shouldAnimateZooming;
- (bool)shouldAspectFitContentByDefault;
- (id)specManager;
- (bool)supportsAspectRatioToggle;
- (bool)supportsZooming;
- (id)title;
- (void)toggleSelectionForAssetCollectionReference:(id)arg1;
- (void)toggleSelectionForAssetReference:(id)arg1;
- (void)toggleSelectionForAssetReference:(id)arg1 updateCursorIndexPath:(bool)arg2;
- (void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 updateCursorIndexPath:(bool)arg2;
- (double)topBarsAppearanceChangeAnimationDuration;
- (id)uiKeyCommandsUsingDelegate:(id)arg1;
- (id)updater;
- (id)userWantsAspectFitContent;
- (bool)viewBasedDecorationsEnabled;
- (id)visibleAssetCollections;
- (bool)wantsCPLStatus;
- (bool)wantsContentFilterIndicatorVisible;
- (bool)wantsContentFilterVisible;
- (bool)wantsDimmedSelectionStyle;
- (bool)wantsFloatingTitle;
- (bool)wantsFooterTransparent;
- (bool)wantsFooterVisible;
- (bool)wantsModernNavBarButtons;
- (bool)wantsTabBarVisible;
- (bool)wantsToolbarVisible;
- (id)zoomAnchorAssetReference;
- (double)zoomStep;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/ContinuousBrowserPageViewController.h>

#import "ReaderInstallationTarget.h"

@class ContinuousReadingListDataSource, NSMutableDictionary, NSSet, NSString, WebViewController;

__attribute__((visibility("hidden")))
@interface ContinuousReadingListViewController : ContinuousBrowserPageViewController <ReaderInstallationTarget>
{
    NSMutableDictionary *_continuousReadingListPageItemsToPageViewControllers;
    BOOL _inReaderMode;
    id _currentItemBeforeLoadingNewContinuousReadingListItem;
    ContinuousReadingListDataSource *_readingListDataSource;
}

+ (Class)_dataSourceClassForReadingListItem:(id)arg1;
+ (void)setLastShownReadingListPageItem:(id)arg1 forBackForwardListItem:(const struct BackForwardListItem *)arg2;
+ (id)lastShownReadingListPageItemForBackForwardListItem:(const struct BackForwardListItem *)arg1;
+ (id)continuousReadingListPageItemForReadingListItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ContinuousReadingListDataSource *readingListDataSource; // @synthesize readingListDataSource=_readingListDataSource;
@property(retain, nonatomic) id currentItemBeforeLoadingNewContinuousReadingListItem; // @synthesize currentItemBeforeLoadingNewContinuousReadingListItem=_currentItemBeforeLoadingNewContinuousReadingListItem;
@property(nonatomic, getter=isInReaderMode) BOOL inReaderMode; // @synthesize inReaderMode=_inReaderMode;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)_clearBottomOverhangImageForPageWithHeaderViewController:(id)arg1;
- (void)_clearTopOverhangImageForPageWithHeaderViewController:(id)arg1;
- (void)_setOverhangImagesForPageWithHeaderViewController:(id)arg1;
- (void)_setCurrentlyLoadedReadingListItem:(id)arg1 forPageWithHeaderViewController:(id)arg2;
- (void)_goBackFromAboutBlankIfNecessaryForPage:(struct Page)arg1;
- (id)_pageWithHeaderViewControllerForReaderContainerViewController:(id)arg1;
- (id)_pageWithHeaderViewControllerForNextItem;
- (id)_pageWithHeaderViewControllerForPreviousItem;
- (id)_pageWithHeaderViewControllerForFrame:(const struct Frame *)arg1;
- (id)_pageWithHeaderViewControllerForPage:(const struct Page *)arg1;
- (id)_continuousReadingListPageItemFollowingPageItem:(id)arg1;
- (id)_continuousReadingListPageItemPrecedingPageItem:(id)arg1;
- (id)_dataSourceForContinuousReadingListPageItem:(id)arg1;
- (id)_dataSourceForReadingListItem:(id)arg1;
- (void)_updateRubberBandingAttributesForPageItem:(id)arg1 headerViewController:(id)arg2;
- (void)_displayedContentDidChange:(id)arg1;
- (void)uninstallReaderContainerViewController:(id)arg1 closedByUser:(BOOL)arg2;
- (void)installReaderContainerViewController:(id)arg1;
- (BOOL)continuousPageView:(id)arg1 pageViewHasFooterBanner:(id)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(id)arg1 pageViewHasHeaderBanner:(id)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(id)arg1 canScrollDownPageView:(id)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(id)arg1 canScrollUpPageView:(id)arg2 pageItem:(id)arg3;
- (void)continuousPageView:(id)arg1 pageViewDidParticipateInTransition:(id)arg2 pageItem:(id)arg3;
- (void)continuousPageView:(id)arg1 pageViewWillParticipateInTransition:(id)arg2 pageItem:(id)arg3 role:(int)arg4;
- (void)continuousPageView:(id)arg1 didTransitionToPageView:(id)arg2 pageItem:(id)arg3 fromPageItem:(id)arg4 previousPageItem:(id)arg5 nextPageItem:(id)arg6;
- (void)continuousPageView:(id)arg1 willTransitionToPageView:(id)arg2 pageItem:(id)arg3;
- (id)continuousPageView:(id)arg1 itemAfter:(id)arg2;
- (id)continuousPageView:(id)arg1 itemBefore:(id)arg2;
- (void)_updateTopContentInsetOfAllWKViews;
- (void)resetAllPageWithHeaderViewControllers;
- (id)pageWithHeaderViewControllerForItem:(id)arg1;
- (void)removeTemporaryHeaderBannerViewForBrowserWKView:(id)arg1;
- (void)willReloadContinuousReadingViewPage:(struct Page)arg1;
- (void)didCreateSnapshotForRubberBandingArea:(const struct Image *)arg1 forPage:(struct Page)arg2;
- (void)didFinishLoadForMainFrameForPage:(struct Page)arg1 committedURL:(id)arg2;
- (void)addHistoryOperation:(id)arg1 forPage:(struct Page)arg2;
- (BOOL)shouldIgnoreHistoryForAboutBlankForPage:(struct Page)arg1;
- (BOOL)pageHasHeaderBanner:(struct Page)arg1;
- (void)stopLoadingPage:(struct Page)arg1;
- (BOOL)isCurrentContinuousReadingListPage:(struct Page)arg1;
- (id)currentContinuousReadingListPageItem;
- (void)loadContinuousReadingListPageItem:(id)arg1;
- (void)setTopContentInset:(double)arg1;
- (void)dealloc;
@property(readonly, copy, nonatomic) NSSet *allBrowserViewControllers;
@property(readonly, nonatomic) WebViewController *activeWebViewController;
- (void)close;
- (id)initWithTabContentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


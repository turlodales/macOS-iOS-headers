//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "PageWithHeaderViewDelegate.h"

@class BrowserViewController, ContinuousReadingBannerLayer, FlippedView, NSAttributedString, NSImage, NSMutableArray, NSString, NSTimer, ReaderViewController, WebViewController;

__attribute__((visibility("hidden")))
@interface PageWithHeaderViewController : NSViewController <PageWithHeaderViewDelegate>
{
    NSMutableArray *_historyOperations;
    ContinuousReadingBannerLayer *_headerBannerLayer;
    FlippedView *_headerBannerView;
    NSTimer *_removeHeaderBannerViewTimer;
    NSTimer *_createSnapshotForRubberBandingAreaTimer;
    BOOL _canTakeSnapshotForRubberBandingArea;
    BOOL _didStopLoadingPage;
    BOOL _canUseCredentialStorage;
    BOOL _hasDefaultSiteIcon;
    BOOL _hasFooterBanner;
    BOOL _footerBannerHasDefaultSiteIcon;
    BOOL _suppressBannerUpdatesOnPropertyChanges;
    BrowserViewController *_browserViewController;
    struct Image _snapshotForRubberBandingArea;
    NSImage *_icon;
    NSImage *_secondaryIcon;
    NSString *_urlString;
    NSAttributedString *_itemTitle;
    NSString *_itemDescription;
    NSImage *_footerBannerIcon;
    NSImage *_footerBannerSecondaryIcon;
    NSAttributedString *_footerBannerItemTitle;
    NSString *_footerBannerItemDescription;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) BOOL suppressBannerUpdatesOnPropertyChanges; // @synthesize suppressBannerUpdatesOnPropertyChanges=_suppressBannerUpdatesOnPropertyChanges;
@property(readonly, nonatomic) NSString *footerBannerItemDescription; // @synthesize footerBannerItemDescription=_footerBannerItemDescription;
@property(readonly, nonatomic) NSAttributedString *footerBannerItemTitle; // @synthesize footerBannerItemTitle=_footerBannerItemTitle;
@property(readonly, nonatomic) BOOL footerBannerHasDefaultSiteIcon; // @synthesize footerBannerHasDefaultSiteIcon=_footerBannerHasDefaultSiteIcon;
@property(readonly, nonatomic) NSImage *footerBannerSecondaryIcon; // @synthesize footerBannerSecondaryIcon=_footerBannerSecondaryIcon;
@property(readonly, nonatomic) NSImage *footerBannerIcon; // @synthesize footerBannerIcon=_footerBannerIcon;
@property(nonatomic) BOOL hasFooterBanner; // @synthesize hasFooterBanner=_hasFooterBanner;
@property(readonly, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly, nonatomic) NSAttributedString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) BOOL hasDefaultSiteIcon; // @synthesize hasDefaultSiteIcon=_hasDefaultSiteIcon;
@property(readonly, nonatomic) NSImage *secondaryIcon; // @synthesize secondaryIcon=_secondaryIcon;
@property(readonly, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(nonatomic) BOOL canUseCredentialStorage; // @synthesize canUseCredentialStorage=_canUseCredentialStorage;
@property(nonatomic) BOOL didStopLoadingPage; // @synthesize didStopLoadingPage=_didStopLoadingPage;
@property(nonatomic) struct Image snapshotForRubberBandingArea; // @synthesize snapshotForRubberBandingArea=_snapshotForRubberBandingArea;
@property(nonatomic) BOOL canTakeSnapshotForRubberBandingArea; // @synthesize canTakeSnapshotForRubberBandingArea=_canTakeSnapshotForRubberBandingArea;
@property(readonly, nonatomic) BrowserViewController *browserViewController; // @synthesize browserViewController=_browserViewController;
- (void)_removeFooterBanner;
- (void)_updateFooterBannerPropertiesForPage:(const struct Page *)arg1;
- (void)_updateFooterBannerSecondaryIconForPage:(const struct Page *)arg1;
- (void)_updateFooterBannerIconDrawsDropShadowAndMaskForPage:(const struct Page *)arg1;
- (void)_updateFooterBannerIconForPage:(const struct Page *)arg1;
- (void)_updateFooterBannerRepostedInfoForPage:(const struct Page *)arg1;
- (void)_updateFooterBannerScreenNameForPage:(const struct Page *)arg1;
- (void)_updateFooterBannerItemDescriptionForPage:(const struct Page *)arg1;
- (void)_updateFooterBannerItemTitleForPage:(const struct Page *)arg1;
- (void)_updateFooterBannerTypeForPage:(const struct Page *)arg1;
- (void)_updateHeaderBannerPropertiesForPage:(const struct Page *)arg1;
- (void)_updateHeaderBannerSecondaryIconForPage:(const struct Page *)arg1;
- (void)_updateHeaderBannerIconDrawsDropShadowAndMaskForPage:(const struct Page *)arg1;
- (void)_updateHeaderBannerIconForPage:(const struct Page *)arg1;
- (void)_updateHeaderBannerRepostedInfoForPage:(const struct Page *)arg1;
- (void)_updateHeaderBannerScreenNameForPage:(const struct Page *)arg1;
- (void)_updateHeaderBannerItemDescriptionForPage:(const struct Page *)arg1;
- (void)_updateHeaderBannerItemTitleForPage:(const struct Page *)arg1;
- (void)_updateHeaderBannerTypeForPage:(const struct Page *)arg1;
- (void)_cancelRemoveHeaderBannerViewTimer;
- (void)_installHeaderBannerView;
- (id)_newHeaderBannerView;
- (void)_clearHistoryOperations;
- (void)_cancelCreateSnapshotForRubberBandingAreaTimer;
- (void)_createSnapshotForRubberBandingArea;
- (id)_url;
- (BOOL)_isWebViewClosed;
- (id)_pageWithHeaderView;
- (struct Page)_readerPage;
- (struct Page)_browserPage;
- (void)deactivateReaderIfActive;
- (void)activateReaderIfAvailable;
- (id)readerContainerView;
- (void)uninstallReaderView:(id)arg1;
- (void)installReaderView:(id)arg1;
- (void)pageWithHeaderViewFrameSizeDidChange:(id)arg1;
- (void)setFooterBannerItemDescription:(id)arg1;
- (void)setFooterBannerItemTitle:(id)arg1;
- (void)setFooterBannerHasDefaultSiteIcon:(BOOL)arg1;
- (void)setFooterBannerSecondaryIcon:(id)arg1;
- (void)setFooterBannerIcon:(id)arg1;
- (void)setItemDescription:(id)arg1;
- (void)setItemTitle:(id)arg1;
- (void)setHasDefaultSiteIcon:(BOOL)arg1;
- (void)setSecondaryIcon:(id)arg1;
- (void)setIcon:(id)arg1;
@property(readonly, nonatomic) BOOL hasHeaderBanner;
- (void)createSnapshotForRubberBandingAreaSoon;
- (BOOL)goBackFromAboutBlankIfNecessary;
- (void)navigateToAboutBlankIfNecessary;
- (void)commitHistoryOperations;
- (void)addHistoryOperation:(id)arg1;
- (void)setViewControllerForFooterBanner:(id)arg1;
@property(readonly, nonatomic) WebViewController *activeWebViewController;
@property(readonly, nonatomic) ReaderViewController *readerViewController;
- (void)removeTemporaryHeaderBannerView;
- (void)removeTemporaryHeaderBannerViewSoon;
- (void)didEnterBackground;
- (void)didEnterForeground;
- (void)detachWebView;
- (void)attachWebView;
- (void)stopLoadingWebView;
- (void)willReloadWebView;
- (void)loadWebView;
- (void)close;
- (id)initWithContinuousReadingListPageItem:(id)arg1 browserDocument:(id)arg2;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


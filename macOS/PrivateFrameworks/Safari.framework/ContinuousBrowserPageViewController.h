//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "ContinuousPageViewDelegate.h"

@class ContinuousPageView, NSString, TabContentViewController;

__attribute__((visibility("hidden")))
@interface ContinuousBrowserPageViewController : NSViewController <ContinuousPageViewDelegate>
{
    TabContentViewController *_tabContentViewController;
    id _currentItem;
    double _topContentInset;
}

- (void).cxx_destruct;
@property(nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(retain, nonatomic) id currentItem; // @synthesize currentItem=_currentItem;
@property(readonly, nonatomic) __weak TabContentViewController *tabContentViewController; // @synthesize tabContentViewController=_tabContentViewController;
- (double)topContentInsetForContinuousPageView:(id)arg1;
- (BOOL)continuousPageView:(id)arg1 pageViewHasFooterBanner:(id)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(id)arg1 pageViewHasHeaderBanner:(id)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(id)arg1 canScrollDownPageView:(id)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(id)arg1 canScrollUpPageView:(id)arg2 pageItem:(id)arg3;
- (void)continuousPageView:(id)arg1 pageViewDidParticipateInTransition:(id)arg2 pageItem:(id)arg3;
- (void)continuousPageView:(id)arg1 pageViewWillParticipateInTransition:(id)arg2 pageItem:(id)arg3 role:(int)arg4;
- (void)continuousPageView:(id)arg1 didTransitionToPageView:(id)arg2 pageItem:(id)arg3 fromPageItem:(id)arg4 previousPageItem:(id)arg5 nextPageItem:(id)arg6;
- (void)continuousPageView:(id)arg1 transitionToPageViewWasCanceled:(id)arg2 pageItem:(id)arg3;
- (void)continuousPageView:(id)arg1 willTransitionToPageView:(id)arg2 pageItem:(id)arg3;
- (id)continuousPageView:(id)arg1 pageViewForItem:(id)arg2;
- (id)continuousPageView:(id)arg1 itemAfter:(id)arg2;
- (id)continuousPageView:(id)arg1 itemBefore:(id)arg2;
- (void)exitContinuousMode;
- (void)loadItem:(id)arg1;
- (void)resetAllPageWithHeaderViewControllers;
- (id)pageWithHeaderViewControllerForItem:(id)arg1;
@property(readonly, retain, nonatomic) ContinuousPageView *continuousPageView;
- (void)viewDidAppear;
- (void)loadView;
- (id)initWithTabContentViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


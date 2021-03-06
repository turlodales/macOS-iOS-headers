//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class FRViewNavigationController, NSURL;

@interface FRContentViewController : NSViewController
{
    FRViewNavigationController *_navigationController;
    NSURL *_activeURL;
    double _topContentInset;
}

- (void).cxx_destruct;
@property(nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(readonly, nonatomic) NSURL *activeURL; // @synthesize activeURL=_activeURL;
@property(nonatomic) __weak FRViewNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (unsigned long long)badgeCountForTab:(id)arg1;
- (BOOL)isTabEnabled:(id)arg1;
- (id)navigationTabs;
- (void)goBack;
- (void)goForward;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)clearHistory;
- (void)reload;
- (void)searchForString:(id)arg1;
- (BOOL)canSearchForString;
- (BOOL)loadURL:(id)arg1 referrer:(id)arg2;
- (BOOL)canLoadURL:(id)arg1;

@end


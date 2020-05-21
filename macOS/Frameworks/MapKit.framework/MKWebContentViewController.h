//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import "MKInfoCardThemeListener.h"
#import "MKModuleViewControllerProtocol.h"
#import "MKWebBridgeDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class MKWebBridge, MKWebViewFactoryItem, NSLayoutConstraint, NSProgressIndicator, NSString, NSURL, WKNavigation, WKWebView;

__attribute__((visibility("hidden")))
@interface MKWebContentViewController : MKPlaceSectionViewController <WKNavigationDelegate, WKUIDelegate, MKInfoCardThemeListener, MKWebBridgeDelegate, MKModuleViewControllerProtocol>
{
    NSLayoutConstraint *_heightConstraint;
    MKWebViewFactoryItem *_webViewFactoryItem;
    WKWebView *_webView;
    MKWebBridge *_bridge;
    NSProgressIndicator *_progressIndicator;
    NSURL *_resolvedURL;
    WKNavigation *_currentWebNavigation;
    BOOL _loading;
    id <MKWebContentViewControllerDelegate> _delegate;
    NSURL *_url;
}

+ (id)resolvedURLForRelativeURL:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <MKWebContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeModuleWithCallbackHandler:(CDUnknownBlockType)arg1;
- (void)_getAnalyticsShortSessionSnapshotWithCallbackHandler:(CDUnknownBlockType)arg1;
- (void)_setHeight:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;
- (void)_setHeight:(double)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)infoCardThemeChanged;
- (void)webBridgeDidConnect:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)_resetBridge;
- (void)_removeLoadingSpinner;
- (void)_addLoadingSpinner;
- (void)_cancel;
- (void)_finishLoading;
- (void)_startLoading;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


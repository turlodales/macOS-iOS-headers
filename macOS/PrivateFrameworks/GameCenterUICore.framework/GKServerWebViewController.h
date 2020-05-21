//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUICore/UXViewController.h>

#import "GKServerWebViewJSRootDelegate.h"
#import "WebDownloadDelegate.h"
#import "WebFrameLoadDelegate.h"
#import "WebPolicyDelegate.h"
#import "WebResourceLoadDelegate.h"
#import "WebUIDelegate.h"

@class GKAppearanceWebViewWrapper, GKMTextFieldPlus, GKServerWebViewJSRoot, NSArray, NSButton, NSData, NSDictionary, NSLayoutConstraint, NSScrollView, NSString, NSTextField, NSURL, NSURLRequest, WebView;

@interface GKServerWebViewController : UXViewController <WebResourceLoadDelegate, WebDownloadDelegate, WebFrameLoadDelegate, WebUIDelegate, WebPolicyDelegate, GKServerWebViewJSRootDelegate>
{
    BOOL _dismissOnAuthenticate;
    BOOL _showSpinner;
    BOOL _waitForLoad;
    BOOL _navbarSetupCompleted;
    WebView *_webView;
    NSString *_okCallback;
    NSString *_cancelCallback;
    NSString *_playerID;
    NSString *_authToken;
    NSURLRequest *_previousRequest;
    long long _status;
    NSData *_pushToken;
    CDUnknownBlockType _completionHandler;
    long long _alertTag;
    NSLayoutConstraint *_widthLayoutConstraint;
    NSDictionary *_buttonInfo;
    NSTextField *_errorTitle;
    GKMTextFieldPlus *_errorDescription;
    NSArray *_heightLayoutConstraints;
    NSURL *_url;
    NSButton *_innerLeftButton;
    NSButton *_outerLeftButton;
    NSButton *_innerRightButton;
    NSButton *_outerRightButton;
    NSString *_urlTypeRequested;
    NSScrollView *_scrollView;
    GKAppearanceWebViewWrapper *_webViewWrapper;
    double _contentWidth;
    GKServerWebViewJSRoot *_jsRoot;
}

+ (id)keyPathsForValuesAffectingContentWidth;
+ (id)keyPathsForValuesAffectingScrollView;
- (void).cxx_destruct;
@property(retain) GKServerWebViewJSRoot *jsRoot; // @synthesize jsRoot=_jsRoot;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(retain, nonatomic) GKAppearanceWebViewWrapper *webViewWrapper; // @synthesize webViewWrapper=_webViewWrapper;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property BOOL navbarSetupCompleted; // @synthesize navbarSetupCompleted=_navbarSetupCompleted;
@property(retain, nonatomic) NSString *urlTypeRequested; // @synthesize urlTypeRequested=_urlTypeRequested;
@property(retain, nonatomic) NSButton *outerRightButton; // @synthesize outerRightButton=_outerRightButton;
@property(retain, nonatomic) NSButton *innerRightButton; // @synthesize innerRightButton=_innerRightButton;
@property(retain, nonatomic) NSButton *outerLeftButton; // @synthesize outerLeftButton=_outerLeftButton;
@property(retain, nonatomic) NSButton *innerLeftButton; // @synthesize innerLeftButton=_innerLeftButton;
@property BOOL waitForLoad; // @synthesize waitForLoad=_waitForLoad;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSArray *heightLayoutConstraints; // @synthesize heightLayoutConstraints=_heightLayoutConstraints;
@property(retain, nonatomic) GKMTextFieldPlus *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSTextField *errorTitle; // @synthesize errorTitle=_errorTitle;
@property BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
@property(copy, nonatomic) NSDictionary *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
@property(nonatomic) NSLayoutConstraint *widthLayoutConstraint; // @synthesize widthLayoutConstraint=_widthLayoutConstraint;
@property(nonatomic) long long alertTag; // @synthesize alertTag=_alertTag;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) BOOL dismissOnAuthenticate; // @synthesize dismissOnAuthenticate=_dismissOnAuthenticate;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSURLRequest *previousRequest; // @synthesize previousRequest=_previousRequest;
@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) NSString *cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(retain, nonatomic) NSString *okCallback; // @synthesize okCallback=_okCallback;
@property(retain, nonatomic) WebView *webView; // @synthesize webView=_webView;
- (void)uploadContacts;
- (void)changePhoto;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)parseAlertURLString:(id)arg1;
- (void)showMessageForError:(id)arg1;
- (void)presentError:(id)arg1;
- (id)willPresentError:(id)arg1;
- (void)parseNavBarURLString:(id)arg1;
- (void)navButtonPressed:(id)arg1;
- (void)javaScriptAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)serverWebViewJSRoot:(id)arg1 changeNavBarWithButtons:(id)arg2 showSpinner:(BOOL)arg3;
- (void)serverWebViewJSRoot:(id)arg1 reauthenticateWithDisplayTitle:(id)arg2 displayString:(id)arg3 username:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)serverWebViewJSRoot:(id)arg1 presentAlert:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)serverWebViewJSRoot:(id)arg1 saveFile:(id)arg2 suggestedFilename:(id)arg3 mimeType:(id)arg4;
- (void)processGameKitURLComponents:(id)arg1;
- (id)decodeDashEncodedString:(id)arg1;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)makeCancellable:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (BOOL)shouldStartLoadWithURL:(id)arg1 request:(id)arg2 redirectTo:(id *)arg3;
- (void)authenticateAndTryURLRequestAgain:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (void)finish;
- (void)startLoadingURL:(id)arg1 forLocalPlayer:(id)arg2;
- (void)getAuthTokenForPlayer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getAccountURLsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadURL:(id)arg1;
- (void)_didBeginSheet;
- (void)viewDidAppear;
- (void)awakeFromNib;
- (void)dealloc;
- (void)loadView;
- (void)updateScrollView;
- (double)defaultWidth;
- (void)clearBackground;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


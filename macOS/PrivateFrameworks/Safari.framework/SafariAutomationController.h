//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_WKAutomationDelegate.h"
#import "_WKAutomationSessionDelegate.h"

@class NSString, WKPreferences, _WKAutomationSession;

__attribute__((visibility("hidden")))
@interface SafariAutomationController : NSObject <_WKAutomationDelegate, _WKAutomationSessionDelegate>
{
    BOOL _userInteractionAllowed;
    _WKAutomationSession *_automationSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _WKAutomationSession *automationSession; // @synthesize automationSession=_automationSession;
@property(nonatomic) BOOL userInteractionAllowed; // @synthesize userInteractionAllowed=_userInteractionAllowed;
- (long long)_automationSession:(id)arg1 currentPresentationForWebView:(id)arg2;
- (long long)_automationSession:(id)arg1 typeOfCurrentJavaScriptDialogForWebView:(id)arg2;
- (void)_automationSession:(id)arg1 setUserInput:(id)arg2 forCurrentJavaScriptDialogForWebView:(id)arg3;
- (id)_automationSession:(id)arg1 messageOfCurrentJavaScriptDialogForWebView:(id)arg2;
- (void)_automationSession:(id)arg1 acceptCurrentJavaScriptDialogForWebView:(id)arg2;
- (void)_automationSession:(id)arg1 dismissCurrentJavaScriptDialogForWebView:(id)arg2;
- (BOOL)_automationSession:(id)arg1 isShowingJavaScriptDialogForWebView:(id)arg2;
- (void)_automationSession:(id)arg1 requestMaximizeWindowOfWebView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_automationSession:(id)arg1 requestRestoreWindowOfWebView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_automationSession:(id)arg1 requestHideWindowOfWebView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_automationSession:(id)arg1 requestSwitchToWebView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_automationSession:(id)arg1 requestNewWebViewWithOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_automationSessionDidDisconnectFromRemote:(id)arg1;
- (void)_processPool:(id)arg1 didRequestAutomationSessionWithIdentifier:(id)arg2 configuration:(id)arg3;
- (BOOL)_processPoolAllowsRemoteAutomation:(id)arg1;
- (BOOL)window:(id)arg1 shouldProcessAction:(SEL)arg2 to:(id)arg3 from:(id)arg4;
- (BOOL)shouldWhitelistSynthesizedAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (BOOL)shouldWhitelistUserAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (BOOL)shouldAllowAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (void)_allowsRemoteAutomationChanged;
- (void)_webDriverSecurePreferencesDidUpdate;
@property(readonly, copy, nonatomic) WKPreferences *preferencesForAutomation;
@property(nonatomic) BOOL allowsRemoteAutomation;
- (BOOL)_uninstallAutomationSession;
- (void)terminateSession;
- (BOOL)createAutomationSessionWithIdentifier:(id)arg1 configuration:(id)arg2;
- (BOOL)createAutomationSessionWithIdentifier:(id)arg1;
- (void)_lockAllAutomationWindowsForUserInteraction;
- (void)_unlockAllAutomationWindowsForUserInteraction;
- (void)_closeAllAutomationWindowsSkippingInspected:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TabDialogPresenter.h"

@class BrowserViewController, NSString, TabDialogDimmingView, TabDialogInstaller, TabDialogViewController;

__attribute__((visibility("hidden")))
@interface TabDialogPresentationManager : NSObject <TabDialogPresenter>
{
    BrowserViewController *_browserViewController;
    TabDialogDimmingView *_dimmingView;
    TabDialogInstaller *_tabDialogInstallerForRedirection;
    TabDialogViewController *_tabDialogViewController;
    id <TabDialogPresentationManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TabDialogPresentationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TabDialogViewController *tabDialogViewController; // @synthesize tabDialogViewController=_tabDialogViewController;
- (void)transplantDialogToNewInstallationTarget;
- (void)_transplantDialogAndDimmingViewToTabContentViewIfNeeded;
- (BOOL)_shouldSkipAnimationsDuringDismissal;
- (long long)_tabDialogVerticalPlacementPolicyForViewController:(id)arg1;
- (id)_tabDialogViewControllerForConfiguration:(id)arg1;
- (void)_dismissRedirectedDialogWithResponseBlock:(CDUnknownBlockType)arg1;
- (void)_presentRedirectedDialogWithViewController:(id)arg1;
- (BOOL)_isRedirectingDialogPresentation;
- (void)_didDismissTabDialogs;
- (id)_ensureTabDialogInstallerForRedirection;
- (CDStruct_497cfc99)_tabDialogSlot;
- (void)showJavaScriptPromptWithMessage:(id)arg1 defaultResponse:(id)arg2 originStringForAccessibility:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)showJavaScriptConfirmWithMessage:(id)arg1 originStringForAccessibility:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)showJavaScriptAlertWithMessage:(id)arg1 originStringForAccessibility:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)cancelAllDialogsFromOwningWebViewOnCommittedNavigationWithURL:(id)arg1;
- (void)unblockWebProcess:(int)arg1;
- (void)cancelAllDialogsFromOwningWebView;
- (void)owningWebViewWillNavigate;
@property(readonly, nonatomic) long long currentTabDialogType;
@property(readonly, nonatomic, getter=isShowingTabDialog) BOOL showingTabDialog;
- (void)updateCurrentDialogWithConfiguration:(id)arg1;
- (void)dismissTabDialog;
- (void)presentTabDialogWithConfiguration:(id)arg1 dismissalBlock:(CDUnknownBlockType)arg2 blocksWebProcessUntilDismissed:(BOOL)arg3 cancellationExemptions:(id)arg4;
- (void)stopRedirectingTabDialogs;
- (void)startRedirectingTabDialogPresentationForBrowserViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


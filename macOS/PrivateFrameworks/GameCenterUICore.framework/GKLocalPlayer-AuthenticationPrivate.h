//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKLocalPlayer.h"

#import "GKLocalPlayerAuthenticationUIPersonality.h"
#import "GKRemoteSignInViewControllerDelegate.h"

@class GKGreenBuddyViewController, NSString, NSWindow;

@interface GKLocalPlayer (AuthenticationPrivate) <GKLocalPlayerAuthenticationUIPersonality, GKRemoteSignInViewControllerDelegate>
+ (id)sharedLocalPlayerAuthenticator;
+ (void)setAuthenticationPersonality:(id)arg1;
+ (id)authenticationPersonality;
- (void)startLegacyAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)validateAccountWithWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelAuthentication;
- (void)showOnboardingUI;
- (BOOL)shouldShowOnBoardingUI;
- (BOOL)shouldShowPersonalization;
- (BOOL)shouldShowPrivacyNotice;
- (void)authenticationDidCompleteWithError:(id)arg1;
- (void)authenticationShowSignInUIForLocalPlayer:(id)arg1;
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1;
- (void)startAuthenticationForExistingPrimaryPlayer;
- (void)handleAuthenticator:(id)arg1 result:(long long)arg2 localPlayer:(id)arg3 error:(id)arg4 response:(id)arg5;
- (void)_showWelcomeBanner;
- (BOOL)isAuthenticating;
- (void)authenticateCurrentAccountForWebViewWithWindow:(id)arg1 displayTitle:(id)arg2 displayString:(id)arg3 username:(id)arg4 usernameEditable:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (BOOL)alertUserInStoreDemoModeEnabled;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showAlertForTag:(unsigned long long)arg1;
- (void)showSignInAccountRestrictedAlert;
- (void)showEditAccountRestrictedAlert;
- (void)showCreateAccountRestrictedAlert;
- (void)showCancelledAlertForPlayer:(id)arg1;
- (void)onboardingFlowPersonalizationDidFinish;
- (void)onboardingFlowDidSignOut;
- (void)signInViewControllerDidCancel:(id)arg1;
- (void)signInViewController:(id)arg1 finishedAuthentiationWithError:(id)arg2;
- (void)cancelAuthenticate;
- (void)showGreenBuddyUIForLocalPlayer:(id)arg1 window:(id)arg2 mode:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)showGreenBuddyUIForAuthenticatedLocalPlayer:(id)arg1 window:(id)arg2 mode:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)authenticateLocalPlayer:(id)arg1 window:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)handleAuthenticateResult:(long long)arg1 authenticator:(id)arg2 localPlayer:(id)arg3 error:(id)arg4 window:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (id)authenticatorForLocalPlayer:(id)arg1 window:(id)arg2;
@property(retain) NSWindow *greenBuddyWindow;
@property(retain) NSWindow *signInWindow;
@property(retain) NSWindow *presentingWindow;
@property(retain) GKGreenBuddyViewController *greenBuddyViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


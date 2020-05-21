//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPaymentAuthorizationChildViewController.h>

#import "PKAuthenticatorDelegate.h"
#import "PKPaymentAuthorizationFooterViewControllerDelegate.h"
#import "PKPaymentAuthorizationItemsViewDelegate.h"
#import "PKPaymentAuthorizationPasswordEntryViewControllerDelegate.h"

@class CNContact, NSButton, NSImageView, NSLayoutConstraint, NSOcclusionDetectionView, NSString, NSView, PKAuthenticator, PKPaymentAuthorizationFooterViewController, PKPaymentAuthorizationItemsView;

@interface PKPaymentAuthorizationMainViewController : PKPaymentAuthorizationChildViewController <PKPaymentAuthorizationItemsViewDelegate, PKPaymentAuthorizationFooterViewControllerDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationPasswordEntryViewControllerDelegate>
{
    id <PKPaymentAuthorizationMainViewControllerDelegate> _delegate;
    PKPaymentAuthorizationFooterViewController *_footerViewController;
    PKPaymentAuthorizationItemsView *_paymentItemsView;
    NSOcclusionDetectionView *_occlusionDetectionView;
    NSLayoutConstraint *_viewBottomConstraint;
    NSImageView *_logoImageView;
    NSButton *_cancelButton;
    NSView *_separatorView;
    id _validationToken;
    PKAuthenticator *_authenticator;
    long long _authenticationState;
    CNContact *_lastSelectedShippingContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNContact *lastSelectedShippingContact; // @synthesize lastSelectedShippingContact=_lastSelectedShippingContact;
@property(nonatomic) long long authenticationState; // @synthesize authenticationState=_authenticationState;
@property(retain, nonatomic) PKAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(retain, nonatomic) id validationToken; // @synthesize validationToken=_validationToken;
@property(retain, nonatomic) NSView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) NSLayoutConstraint *viewBottomConstraint; // @synthesize viewBottomConstraint=_viewBottomConstraint;
@property(retain, nonatomic) NSOcclusionDetectionView *occlusionDetectionView; // @synthesize occlusionDetectionView=_occlusionDetectionView;
@property(retain, nonatomic) PKPaymentAuthorizationItemsView *paymentItemsView; // @synthesize paymentItemsView=_paymentItemsView;
@property(retain, nonatomic) PKPaymentAuthorizationFooterViewController *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(nonatomic) __weak id <PKPaymentAuthorizationMainViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_prepareConstraints;
- (void)_cancelMenuTracking;
- (void)_createSubviews;
- (void)_notifyViewDidBecomeUnoccluded:(id)arg1;
- (void)_notifyViewDidBecomeOccluded:(id)arg1;
- (id)_evaluationRequest;
- (long long)_authenticatorPolicy;
- (void)_startEvaluation;
- (void)_suspendAuthenticationUpdatingFooter:(BOOL)arg1;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1;
- (void)dismissPassphraseViewController;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (id)passphraseViewController;
- (void)dismissPasscodeViewController;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (id)passcodeViewController;
- (void)authenticatorDidDeactivateTouchID:(id)arg1 status:(long long)arg2;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)paymentAuthorizationPasswordEntryViewControllerDidVerifyPassword:(id)arg1;
- (void)paymentAuthorizationPasswordEntryViewController:(id)arg1 willVerifyPasswordWithExternalizedContextInReply:(CDUnknownBlockType)arg2;
- (id)paymentAuthorizationFooterViewControllerWillPresentPasswordEntry:(id)arg1;
- (void)paymentAuthorizationItemsView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)paymentAuthorizationItemsView:(id)arg1 willUnhighlightItemAtIndex:(unsigned long long)arg2;
- (void)paymentAuthorizationItemsView:(id)arg1 willHighlightItemAtIndex:(unsigned long long)arg2;
- (BOOL)paymentAuthorizationItemsView:(id)arg1 shouldHighlightItemAtIndex:(unsigned long long)arg2;
- (BOOL)handleTransitionToSuccessFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToFatalErrorFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToErrorFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToCancelFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToNonceFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToPrepareTransactionDetailsFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToClientCallbackFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToInactiveFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToAuthenticateFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToContinuitySendFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToInvalidDataFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (void)didDismiss;
- (void)didBecomeActiveViewController;
- (void)willBecomeActiveViewController;
- (void)willBecomeInactiveViewController;
- (void)dataModelDidUpdate;
- (BOOL)shouldDeactivateOnDidResign;
- (BOOL)shouldActivateOnDidBecomeActive;
- (void)cancelButtonClicked:(id)arg1;
@property(readonly, nonatomic) BOOL canSelectPaymentOptions;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


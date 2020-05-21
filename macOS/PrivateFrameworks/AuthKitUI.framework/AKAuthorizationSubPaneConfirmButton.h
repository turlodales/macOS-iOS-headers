//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationSubPane.h>

#import "LAUIAuthenticationDelegate.h"

@class AKAuthorizationButton, AKAuthorizationPaneContext, LAUIAuthenticationView, NSObject<OS_dispatch_group>, NSStackView, NSString, NSTextField, NSView;

@interface AKAuthorizationSubPaneConfirmButton : AKAuthorizationSubPane <LAUIAuthenticationDelegate>
{
    CDUnknownBlockType _processingStateCompletionHandler;
    NSObject<OS_dispatch_group> *_processingStateGroup;
    BOOL _hasTouchIDOnly;
    BOOL _canPerformBiometricValidation;
    NSString *_bioTextForInactiveState;
    AKAuthorizationButton *_authorizationButton;
    id <AKAuthorizationSubPaneConfirmButtonDelegate> _delegate;
    AKAuthorizationPaneContext *_context;
    NSStackView *_mainStackView;
    NSView *_authorizationButtonContainer;
    NSTextField *_bioLabel;
    LAUIAuthenticationView *_bioView;
}

+ (id)_createMainStackView;
- (void).cxx_destruct;
@property(retain) LAUIAuthenticationView *bioView; // @synthesize bioView=_bioView;
@property(retain) NSTextField *bioLabel; // @synthesize bioLabel=_bioLabel;
@property BOOL canPerformBiometricValidation; // @synthesize canPerformBiometricValidation=_canPerformBiometricValidation;
@property BOOL hasTouchIDOnly; // @synthesize hasTouchIDOnly=_hasTouchIDOnly;
@property(readonly) NSView *authorizationButtonContainer; // @synthesize authorizationButtonContainer=_authorizationButtonContainer;
@property(retain) NSStackView *mainStackView; // @synthesize mainStackView=_mainStackView;
@property(retain) AKAuthorizationPaneContext *context; // @synthesize context=_context;
@property __weak id <AKAuthorizationSubPaneConfirmButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) AKAuthorizationButton *authorizationButton; // @synthesize authorizationButton=_authorizationButton;
@property(copy) NSString *bioTextForInactiveState; // @synthesize bioTextForInactiveState=_bioTextForInactiveState;
- (void)_performPasscodeValidations:(CDUnknownBlockType)arg1;
- (id)_passcodeButtonTitle;
- (id)_passwordButtonTitle;
- (void)_switchToPasscode;
- (void)_setGlyphViewGestureRecognizerEnabled:(BOOL)arg1;
- (void)_waitForTimeInterval:(double)arg1 withGroup:(id)arg2;
- (void)invalidateProcessingState;
- (void)finishProcessingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_enterProcessingStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)callerIconBundlePath;
- (id)localizedCallerName;
- (void)processBiometricMatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)authenticationResult:(id)arg1 error:(id)arg2 context:(id)arg3;
- (BOOL)_hasTouchIDOnly;
- (void)_updateLabelWithTitle:(id)arg1;
- (void)_setupAlertImageWithConstraints:(id)arg1;
- (void)_setupBioButtonWithConstraints:(id)arg1;
- (void)_setupLabelWithTitle:(id)arg1 withConstraints:(id)arg2 animated:(BOOL)arg3;
- (void)_addArrangedSpaceToMainStackView:(double)arg1;
- (id)_spaceWithConstant:(double)arg1;
- (void)_enableLAUIAuthMechanism;
- (void)_switchToBioView:(BOOL)arg1 withEnabled:(BOOL)arg2 showAlert:(BOOL)arg3 alertString:(id)arg4;
- (void)showAlertAndContinueWithPassword:(BOOL)arg1;
- (void)enableAuthorizationCapability:(BOOL)arg1;
- (void)bioAuthFailWithAlertString:(id)arg1;
- (void)_disableBioView;
- (void)_authorizationWithPasscodeButtonSelected:(id)arg1;
- (void)_authorizationButtonBioSelected:(id)arg1;
- (void)_authorizationButtonWithAccountPasswordSelected:(id)arg1;
- (void)_authorizationButtonSkipBioSelected:(id)arg1;
- (BOOL)_delegate_validateReadyForAuthorization;
- (void)setUpButtonToPaneContext:(id)arg1;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (void)addToStackView:(id)arg1 context:(id)arg2;
@property(copy) NSString *buttonText;
- (id)initWithButtonText:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


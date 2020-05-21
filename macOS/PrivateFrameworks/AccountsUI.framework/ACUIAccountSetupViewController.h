//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

#import "ACUIAccountDataclassDelegate.h"
#import "ACUIWebAuthDelegate.h"
#import "NSControlTextEditingDelegate.h"

@class ACUIWebAuthViewController, NSArray, NSButton, NSLayoutConstraint, NSProgressIndicator, NSStackView, NSString, NSTextField, NSView, NSWindow;

@interface ACUIAccountSetupViewController : ACUIViewController <ACUIWebAuthDelegate, NSControlTextEditingDelegate, ACUIAccountDataclassDelegate>
{
    NSStackView *_stackView;
    NSWindow *_window;
    NSWindow *_sheet;
    CDUnknownBlockType _completion;
    NSProgressIndicator *_spinner;
    NSButton *_signInButton;
    NSButton *_alternateButton;
    NSButton *_cancelButton;
    NSTextField *_fullNameField;
    NSTextField *_userNameField;
    NSTextField *_dislaimerLabel;
    NSTextField *_emailAddressField;
    ACUIWebAuthViewController *_webLoginVC;
    NSLayoutConstraint *_dataclassTableViewHeight;
    NSString *_dataclassToAutoEnable;
    NSView *_logoSlice;
    NSView *_genericAccountHeaderSlice;
    NSView *_getStartedSlice;
    NSView *_dataclassConfigurationSlice;
    NSView *_disclaimerSlice;
    NSArray *_bottomButtonsConstraints;
}

- (void).cxx_destruct;
@property(retain) NSArray *bottomButtonsConstraints; // @synthesize bottomButtonsConstraints=_bottomButtonsConstraints;
@property(retain) NSView *disclaimerSlice; // @synthesize disclaimerSlice=_disclaimerSlice;
@property(retain) NSView *dataclassConfigurationSlice; // @synthesize dataclassConfigurationSlice=_dataclassConfigurationSlice;
@property(retain) NSView *getStartedSlice; // @synthesize getStartedSlice=_getStartedSlice;
@property(retain) NSView *genericAccountHeaderSlice; // @synthesize genericAccountHeaderSlice=_genericAccountHeaderSlice;
@property(retain) NSView *logoSlice; // @synthesize logoSlice=_logoSlice;
@property(retain) NSString *dataclassToAutoEnable; // @synthesize dataclassToAutoEnable=_dataclassToAutoEnable;
@property(retain) NSLayoutConstraint *dataclassTableViewHeight; // @synthesize dataclassTableViewHeight=_dataclassTableViewHeight;
@property(retain) ACUIWebAuthViewController *webLoginVC; // @synthesize webLoginVC=_webLoginVC;
@property(retain) NSTextField *emailAddressField; // @synthesize emailAddressField=_emailAddressField;
@property(retain) NSTextField *dislaimerLabel; // @synthesize dislaimerLabel=_dislaimerLabel;
@property(retain) NSTextField *userNameField; // @synthesize userNameField=_userNameField;
@property(retain) NSTextField *fullNameField; // @synthesize fullNameField=_fullNameField;
@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) NSButton *alternateButton; // @synthesize alternateButton=_alternateButton;
@property(retain) NSButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(readonly) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) NSWindow *sheet; // @synthesize sheet=_sheet;
@property(readonly) NSWindow *window; // @synthesize window=_window;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
- (BOOL)handleInsecureConnectionForAccount:(id)arg1 withSaveError:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (id)nibName;
- (void)constructViewStack;
- (void)addGetStartedSlice;
- (void)addErrorMessageSlice;
- (void)addDisclaimerSlice;
- (void)addDataclassConfigurationSlice;
- (void)addGenericHeaderSlice;
- (void)addLogoSlice;
- (void)addPasswordSlice;
- (void)addFullNameSlice;
- (void)addEmailAddressSlice;
- (void)addUserNameSliceWithLabel:(id)arg1;
- (BOOL)_accountTypeSupportsMail;
- (void)startWebAuthorization:(id)arg1;
- (BOOL)alternateButtonIsOnTheLeft;
- (BOOL)hasAlternateButton;
- (void)alternateButtonAction:(id)arg1;
- (void)cancel:(id)arg1;
- (void)next:(id)arg1;
- (void)didToggleDataclass:(id)arg1;
- (void)webAuthViewController:(id)arg1 loginEndedWithError:(id)arg2;
- (void)saveAccountSucceeded;
- (void)saveAccountFailedWithError:(id)arg1;
- (void)_animateNewConstructViewStack;
- (BOOL)willPersistVerifiedAccount;
- (BOOL)willSaveAccount;
- (void)_showDataclassSelectionScreen;
- (void)layoutDefaultBottomButtons;
- (void)layoutWebViewBottomButtons;
- (void)layoutWebAuthBottomButtons;
- (void)layoutBottomButtonsWithAlternativeButton;
- (void)_setBottomConstraints:(id)arg1;
- (void)layoutBottomButtons;
- (BOOL)disableAutoReload;
- (void)setSpinningAndDisabledInputControls:(BOOL)arg1;
- (void)_initFirstScreen;
- (void)_setInitialFocus;
- (void)beginSetupInSheet:(id)arg1 attachedToWindow:(id)arg2 verifyError:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginSetupInWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_performsChecksInWindow:(id)arg1;
- (id)initWithAccountType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


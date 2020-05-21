//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTouchBarProvider.h"

@class AKPaddedTextFieldCell, AKTouchBarController, NSButton, NSImage, NSImageCell, NSLayoutConstraint, NSProgressIndicator, NSString, NSTextField, NSTouchBar, NSView, OBPrivacyLinkController;

@interface AKSignInPromptController : NSViewController <NSTouchBarProvider>
{
    BOOL _isUsernameEditable;
    BOOL _isPasswordEditable;
    BOOL _alwaysShowUsernameField;
    BOOL _preventSignIn;
    BOOL _hideAlternativeButton;
    BOOL _hideReasonString;
    BOOL _showRememberPasswordCheckbox;
    BOOL _rememberPassswordCheckedByDefault;
    BOOL _userInteractionEnabled;
    BOOL _showReauthentication;
    long long _selectedButton;
    NSTextField *_titleField;
    NSTextField *_messageField;
    NSImageCell *_imageView;
    NSButton *_loginButton;
    NSButton *_otherButton;
    NSButton *_alternateButton;
    NSButton *_forgotButtonForStandardAuthentication;
    NSButton *_forgotButtonForReauthentication;
    NSButton *_helpButton;
    NSTextField *_usernameTitle;
    NSTextField *_usernameField;
    AKPaddedTextFieldCell *_paddedUsernameCell;
    NSTextField *_passwordTitle;
    NSTextField *_passwordFieldForStandardAuthentication;
    NSTextField *_passwordFieldForReauthentication;
    NSTextField *_errorField;
    NSButton *_rememberPasswordCheckbox;
    NSView *_standardAuthenticationLoginView;
    NSView *_reauthenticationLoginView;
    NSProgressIndicator *_progressIndicator;
    NSProgressIndicator *_progressIndicatorForStandarAuthentication;
    NSLayoutConstraint *_standardAuthenticationForgotPasswordBottom;
    NSLayoutConstraint *_titleToMessageConstraint;
    NSLayoutConstraint *_messageToErrorConstraint;
    NSLayoutConstraint *_titleWidthConstraint;
    NSLayoutConstraint *_usernameToForgotConstraint;
    NSView *_privacyView;
    NSView *_standardAuthenticationLoginUsernamePassword;
    NSLayoutConstraint *_messageToViewConstraint;
    NSLayoutConstraint *_titleToViewConstraint;
    NSLayoutConstraint *_titleToErrorConstraint;
    NSLayoutConstraint *_errorToViewConstraint;
    NSLayoutConstraint *_standardAuthenticationLoginViewHeight;
    NSView *_authenticationView;
    NSString *_header;
    NSString *_message;
    NSImage *_displayImage;
    NSString *_initialUsername;
    NSString *_initialPassword;
    long long _serviceType;
    NSString *_initialError;
    NSString *_alternativeButtonString;
    NSString *_otherButtonString;
    NSString *_loginButtonString;
    NSString *_helpAnchor;
    NSString *_helpBook;
    NSString *_rememberPasswordCheckboxString;
    NSString *_privacyBundleIdentifier;
    CDUnknownBlockType _loginButtonAction;
    CDUnknownBlockType _otherButtonAction;
    CDUnknownBlockType _alternativeButtonAction;
    CDUnknownBlockType _forgotButtonAction;
    OBPrivacyLinkController *_privacyController;
    AKTouchBarController *_touchBarController;
}

- (void).cxx_destruct;
@property(retain) AKTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(retain) OBPrivacyLinkController *privacyController; // @synthesize privacyController=_privacyController;
@property BOOL showReauthentication; // @synthesize showReauthentication=_showReauthentication;
@property(copy) CDUnknownBlockType forgotButtonAction; // @synthesize forgotButtonAction=_forgotButtonAction;
@property(copy) CDUnknownBlockType alternativeButtonAction; // @synthesize alternativeButtonAction=_alternativeButtonAction;
@property(copy) CDUnknownBlockType otherButtonAction; // @synthesize otherButtonAction=_otherButtonAction;
@property(copy) CDUnknownBlockType loginButtonAction; // @synthesize loginButtonAction=_loginButtonAction;
@property(retain) NSString *privacyBundleIdentifier; // @synthesize privacyBundleIdentifier=_privacyBundleIdentifier;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(retain) NSString *rememberPasswordCheckboxString; // @synthesize rememberPasswordCheckboxString=_rememberPasswordCheckboxString;
@property BOOL rememberPassswordCheckedByDefault; // @synthesize rememberPassswordCheckedByDefault=_rememberPassswordCheckedByDefault;
@property BOOL showRememberPasswordCheckbox; // @synthesize showRememberPasswordCheckbox=_showRememberPasswordCheckbox;
@property(retain) NSString *helpBook; // @synthesize helpBook=_helpBook;
@property(retain) NSString *helpAnchor; // @synthesize helpAnchor=_helpAnchor;
@property BOOL hideReasonString; // @synthesize hideReasonString=_hideReasonString;
@property BOOL hideAlternativeButton; // @synthesize hideAlternativeButton=_hideAlternativeButton;
@property(retain) NSString *loginButtonString; // @synthesize loginButtonString=_loginButtonString;
@property(retain) NSString *otherButtonString; // @synthesize otherButtonString=_otherButtonString;
@property(retain) NSString *alternativeButtonString; // @synthesize alternativeButtonString=_alternativeButtonString;
@property BOOL preventSignIn; // @synthesize preventSignIn=_preventSignIn;
@property(retain) NSString *initialError; // @synthesize initialError=_initialError;
@property long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain) NSString *initialPassword; // @synthesize initialPassword=_initialPassword;
@property(retain) NSString *initialUsername; // @synthesize initialUsername=_initialUsername;
@property BOOL alwaysShowUsernameField; // @synthesize alwaysShowUsernameField=_alwaysShowUsernameField;
@property(setter=setPasswordEditable:) BOOL isPasswordEditable; // @synthesize isPasswordEditable=_isPasswordEditable;
@property(setter=setUsernameEditable:) BOOL isUsernameEditable; // @synthesize isUsernameEditable=_isUsernameEditable;
@property(retain) NSImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) NSString *header; // @synthesize header=_header;
@property NSView *authenticationView; // @synthesize authenticationView=_authenticationView;
@property(retain) NSLayoutConstraint *standardAuthenticationLoginViewHeight; // @synthesize standardAuthenticationLoginViewHeight=_standardAuthenticationLoginViewHeight;
@property(retain) NSLayoutConstraint *errorToViewConstraint; // @synthesize errorToViewConstraint=_errorToViewConstraint;
@property(retain) NSLayoutConstraint *titleToErrorConstraint; // @synthesize titleToErrorConstraint=_titleToErrorConstraint;
@property(retain) NSLayoutConstraint *titleToViewConstraint; // @synthesize titleToViewConstraint=_titleToViewConstraint;
@property(retain) NSLayoutConstraint *messageToViewConstraint; // @synthesize messageToViewConstraint=_messageToViewConstraint;
@property(retain) NSView *standardAuthenticationLoginUsernamePassword; // @synthesize standardAuthenticationLoginUsernamePassword=_standardAuthenticationLoginUsernamePassword;
@property(retain) NSView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain) NSLayoutConstraint *usernameToForgotConstraint; // @synthesize usernameToForgotConstraint=_usernameToForgotConstraint;
@property(retain) NSLayoutConstraint *titleWidthConstraint; // @synthesize titleWidthConstraint=_titleWidthConstraint;
@property(retain) NSLayoutConstraint *messageToErrorConstraint; // @synthesize messageToErrorConstraint=_messageToErrorConstraint;
@property(retain) NSLayoutConstraint *titleToMessageConstraint; // @synthesize titleToMessageConstraint=_titleToMessageConstraint;
@property(retain) NSLayoutConstraint *standardAuthenticationForgotPasswordBottom; // @synthesize standardAuthenticationForgotPasswordBottom=_standardAuthenticationForgotPasswordBottom;
@property(retain) NSProgressIndicator *progressIndicatorForStandarAuthentication; // @synthesize progressIndicatorForStandarAuthentication=_progressIndicatorForStandarAuthentication;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSView *reauthenticationLoginView; // @synthesize reauthenticationLoginView=_reauthenticationLoginView;
@property(retain) NSView *standardAuthenticationLoginView; // @synthesize standardAuthenticationLoginView=_standardAuthenticationLoginView;
@property(retain) NSButton *rememberPasswordCheckbox; // @synthesize rememberPasswordCheckbox=_rememberPasswordCheckbox;
@property(retain) NSTextField *errorField; // @synthesize errorField=_errorField;
@property(retain) NSTextField *passwordFieldForReauthentication; // @synthesize passwordFieldForReauthentication=_passwordFieldForReauthentication;
@property(retain) NSTextField *passwordFieldForStandardAuthentication; // @synthesize passwordFieldForStandardAuthentication=_passwordFieldForStandardAuthentication;
@property(retain) NSTextField *passwordTitle; // @synthesize passwordTitle=_passwordTitle;
@property(retain) AKPaddedTextFieldCell *paddedUsernameCell; // @synthesize paddedUsernameCell=_paddedUsernameCell;
@property(retain) NSTextField *usernameField; // @synthesize usernameField=_usernameField;
@property(retain) NSTextField *usernameTitle; // @synthesize usernameTitle=_usernameTitle;
@property(retain) NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain) NSButton *forgotButtonForReauthentication; // @synthesize forgotButtonForReauthentication=_forgotButtonForReauthentication;
@property(retain) NSButton *forgotButtonForStandardAuthentication; // @synthesize forgotButtonForStandardAuthentication=_forgotButtonForStandardAuthentication;
@property(retain) NSButton *alternateButton; // @synthesize alternateButton=_alternateButton;
@property(retain) NSButton *otherButton; // @synthesize otherButton=_otherButton;
@property(retain) NSButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain) NSImageCell *imageView; // @synthesize imageView=_imageView;
@property(retain) NSTextField *messageField; // @synthesize messageField=_messageField;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(nonatomic) long long selectedButton; // @synthesize selectedButton=_selectedButton;
- (void)helpButtonPressed:(id)arg1;
- (void)forgotPasswordPressed:(id)arg1;
- (void)alternateButtonPressed:(id)arg1;
- (void)otherButtonPressed:(id)arg1;
- (void)defaultButtonPressed:(id)arg1;
- (id)passwordField;
- (id)forgotButton;
- (void)_addPrivacyView:(id)arg1;
- (void)_disableUserInteraction;
- (void)_allowUserInteraction;
- (void)_hideError;
- (void)showError:(id)arg1;
- (void)_stopSpinner;
- (void)_startSpinner;
- (void)_updatePlaceholderIfneeded;
- (BOOL)_isRememberPasswordSelected;
- (void)_setPasswordFieldHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)enablePasswordInputField;
- (void)controlTextDidChange:(id)arg1;
- (void)validateUserCredentials;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)awakeFromNib;
@property(readonly) NSTouchBar *touchBar;
- (id)initWithTitle:(id)arg1 andMessage:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


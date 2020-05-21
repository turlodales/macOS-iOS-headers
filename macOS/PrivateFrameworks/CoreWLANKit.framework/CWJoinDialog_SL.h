//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTextFieldDelegate.h"

@class CWDisplayedScanResult, NSButton, NSData, NSError, NSImageView, NSLayoutConstraint, NSPopUpButton, NSProgressIndicator, NSScrollView, NSSecureTextField, NSString, NSTextField, NSTextView, NSView, SFCertificateView;

@interface CWJoinDialog_SL : NSWindowController <NSTextFieldDelegate>
{
    CWDisplayedScanResult *_scanResult;
    NSString *_username;
    NSString *_password;
    NSData *_identityData;
    BOOL _remember;
    id _delegate;
    NSError *_previousError;
    NSString *_previousPassword;
    BOOL _supportsWiFiPasswordSharing;
    BOOL installerContext_;
    BOOL _showingOpen;
    BOOL _showingPassword;
    BOOL _showingPSK;
    BOOL _showingEnterprise;
    BOOL _showingCertificateSelector;
    BOOL _showingCertificate;
    BOOL _shouldShowCertificate;
    BOOL _showingAutomaticEAP;
    BOOL _showingEAPTLS;
    BOOL _certificatesAvailable;
    BOOL _joinInProgress;
    SFCertificateView *certificateView;
    NSTextField *windowTitleLabel;
    NSScrollView *windowDescScrollView;
    NSTextView *windowDescTextView;
    NSLayoutConstraint *windowDescScrollViewHeightConstraint;
    NSButton *okButton;
    NSButton *cancelButton;
    NSView *usernameView;
    NSTextField *usernameField;
    NSView *passwordView;
    NSSecureTextField *passwordField;
    NSTextField *revealedPasswordField;
    NSView *pskView;
    NSSecureTextField *pskField;
    NSTextField *revealedPSKField;
    NSView *certificateSelectorView;
    NSPopUpButton *certificatePopUpButton;
    NSView *eapModeView;
    NSPopUpButton *eapModePopUpButton;
    NSButton *certificateDetailButton;
    NSScrollView *certificateDetailView;
    NSTextField *statusMessageLabel;
    NSButton *warningButton;
    NSProgressIndicator *progressIndicator;
    NSView *rememberView;
    NSButton *rememberCheckboxButton;
    NSView *showPasswordView;
    NSButton *showPasswordCheckboxButton;
    NSButton *helpButton;
    NSImageView *imageView;
    NSTextField *pskHintText;
}

+ (id)joinDialogWithScanResult:(id)arg1 remember:(BOOL)arg2;
@property BOOL supportsWiFiPasswordSharing; // @synthesize supportsWiFiPasswordSharing=_supportsWiFiPasswordSharing;
@property(copy) NSString *previousPassword; // @synthesize previousPassword=_previousPassword;
@property(copy) NSError *previousError; // @synthesize previousError=_previousError;
@property(copy) NSData *identityData; // @synthesize identityData=_identityData;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
@property BOOL remember; // @synthesize remember=_remember;
@property(copy) CWDisplayedScanResult *scanResult; // @synthesize scanResult=_scanResult;
@property id delegate; // @synthesize delegate=_delegate;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)enterPasswordAndJoin:(id)arg1;
- (BOOL)eapCertificatesAvailable;
- (void)populateEAPModes;
- (long long)securityTagForNetwork:(id)arg1;
- (BOOL)validateSecurityTypeForTag:(long long)arg1;
- (BOOL)validateEntries;
- (id)errorStringForErrorCode:(long long)arg1;
- (void)resetSecurityEntries;
- (void)setSecurityTypeViewForTag:(long long)arg1;
- (void)populateCertificates;
- (id)localizedStringForKey:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)onEAPModePopUpButton:(id)arg1;
- (void)onCertificatePopUpButton:(id)arg1;
- (void)onCertificateDetailButton:(id)arg1;
- (void)onShowPasswordCheckboxButton:(id)arg1;
- (void)onCancelButton:(id)arg1;
- (void)onOKButton:(id)arg1;
- (void)onHelpButton:(id)arg1;
- (void)onRememberCheckboxButton:(id)arg1;
- (void)windowDidLoad;
- (void)close;
- (void)awakeFromNib;
- (void)__updateWindowFrame:(struct CGRect)arg1 complete:(CDUnknownBlockType)arg2;
- (void)removeEnterpriseViews:(struct CGRect *)arg1;
- (void)insertEnterpriseViews;
- (void)expandFrameForEnterpriseViews:(struct CGRect *)arg1;
- (void)removeCertificateDetailView:(struct CGRect *)arg1;
- (void)insertCertificateDetailView;
- (void)expandFrameForCertificateDetailView:(struct CGRect *)arg1;
- (void)removePSKView:(struct CGRect *)arg1;
- (void)insertPSKView;
- (void)expandFrameForPSKView:(struct CGRect *)arg1;
- (void)removePasswordView:(struct CGRect *)arg1;
- (void)insertPasswordView;
- (void)expandFrameForPasswordView:(struct CGRect *)arg1;
- (void)insertOpenView;
- (void)removeOpenView:(struct CGRect *)arg1;
- (void)expandFrameForOpenView:(struct CGRect *)arg1;
- (id)initWithScanResult:(id)arg1 remember:(BOOL)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


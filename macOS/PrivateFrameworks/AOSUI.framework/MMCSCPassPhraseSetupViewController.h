//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTouchBarProvider.h"

@class NSButton, NSImageView, NSSecureTextField, NSString, NSTextField, NSTouchBar, iCloudTouchBarController;

@interface MMCSCPassPhraseSetupViewController : NSViewController <NSTouchBarProvider>
{
    NSString *_initialPassPhrase;
    NSString *_confirmedPassPhrase;
    long long _currentState;
    BOOL _showChangeView;
    BOOL _showRandomView;
    id <MMCSCPassPhraseSetupViewControllerDelegate> _delegate;
    NSImageView *_passPhraseImageView;
    NSTextField *_passPhraseTitle;
    NSTextField *_passPhraseMessage;
    NSSecureTextField *_passPhraseSecurityCodeTextField;
    NSTextField *_passPhraseRandomCodeTextField;
    NSTextField *_passPhraseRandomCodeLabel;
    NSTextField *_passPhraseEntryLabel;
    NSButton *_passPhraseHelpButton;
    NSButton *_passPhraseCancelButton;
    NSButton *_passPhraseAlternateButton;
    NSButton *_passPhraseConfirmButton;
    iCloudTouchBarController *_touchBarController;
}

- (void).cxx_destruct;
@property(retain) iCloudTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(copy) NSString *confirmedPassPhrase; // @synthesize confirmedPassPhrase=_confirmedPassPhrase;
@property(copy) NSString *initialPassPhrase; // @synthesize initialPassPhrase=_initialPassPhrase;
@property __weak NSButton *passPhraseConfirmButton; // @synthesize passPhraseConfirmButton=_passPhraseConfirmButton;
@property __weak NSButton *passPhraseAlternateButton; // @synthesize passPhraseAlternateButton=_passPhraseAlternateButton;
@property __weak NSButton *passPhraseCancelButton; // @synthesize passPhraseCancelButton=_passPhraseCancelButton;
@property __weak NSButton *passPhraseHelpButton; // @synthesize passPhraseHelpButton=_passPhraseHelpButton;
@property __weak NSTextField *passPhraseEntryLabel; // @synthesize passPhraseEntryLabel=_passPhraseEntryLabel;
@property __weak NSTextField *passPhraseRandomCodeLabel; // @synthesize passPhraseRandomCodeLabel=_passPhraseRandomCodeLabel;
@property __weak NSTextField *passPhraseRandomCodeTextField; // @synthesize passPhraseRandomCodeTextField=_passPhraseRandomCodeTextField;
@property __weak NSSecureTextField *passPhraseSecurityCodeTextField; // @synthesize passPhraseSecurityCodeTextField=_passPhraseSecurityCodeTextField;
@property __weak NSTextField *passPhraseMessage; // @synthesize passPhraseMessage=_passPhraseMessage;
@property __weak NSTextField *passPhraseTitle; // @synthesize passPhraseTitle=_passPhraseTitle;
@property __weak NSImageView *passPhraseImageView; // @synthesize passPhraseImageView=_passPhraseImageView;
@property BOOL showRandomView; // @synthesize showRandomView=_showRandomView;
@property BOOL showChangeView; // @synthesize showChangeView=_showChangeView;
@property id <MMCSCPassPhraseSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controlTextDidChange:(id)arg1;
- (void)_showNormalMessage:(id)arg1;
- (void)_showErrorMessage:(id)arg1;
- (void)_showSecurityEntryErrorLabel;
- (void)_showSecurityCodeConfirmLabel;
- (void)_showSecurityCodeEntryLabel;
- (id)_securityCodeFromSecureEntryView;
- (void)_clearSecurityCodeEntry;
- (id)_randomPasscode;
- (BOOL)_isPasswordWeak:(id)arg1 isSimple:(BOOL)arg2;
- (void)cancelButtonClicked:(id)arg1;
- (void)alternateButtonClicked:(id)arg1;
- (void)defaultButtonClicked:(id)arg1;
- (BOOL)_isSimplePassphrase;
@property(readonly) BOOL isSecurePassphrase; // @dynamic isSecurePassphrase;
@property(readonly) NSString *passPhrase;
@property(readonly) NSTouchBar *touchBar;
- (void)setup:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


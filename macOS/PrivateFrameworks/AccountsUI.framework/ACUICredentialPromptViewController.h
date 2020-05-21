//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

#import "ACUIWebAuthDelegate.h"
#import "ACUIWebLoginDelegate.h"
#import "NSControlTextEditingDelegate.h"

@class ACUIWebAuthViewController, ACUIWebLoginViewController, NSButton, NSPanel, NSString, NSView, NSWindow;

@interface ACUICredentialPromptViewController : ACUIViewController <ACUIWebAuthDelegate, ACUIWebLoginDelegate, NSControlTextEditingDelegate>
{
    BOOL _isVerifyingCredential;
    NSString *_password;
    NSPanel *_passwordPanel;
    NSButton *_okButton;
    NSView *_webViewContainer;
    NSPanel *_webAuthPanel;
    ACUIWebAuthViewController *_webAuthVC;
    ACUIWebLoginViewController *_webLoginVC;
    NSView *_oauth2ViewContainer;
    NSPanel *_oauth2Panel;
    NSButton *_openSafariButton;
    NSWindow *_window;
    NSWindow *_sheet;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) NSWindow *sheet; // @synthesize sheet=_sheet;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property(retain) NSButton *openSafariButton; // @synthesize openSafariButton=_openSafariButton;
@property(retain) NSPanel *oauth2Panel; // @synthesize oauth2Panel=_oauth2Panel;
@property(retain) NSView *oauth2ViewContainer; // @synthesize oauth2ViewContainer=_oauth2ViewContainer;
@property(retain) ACUIWebLoginViewController *webLoginVC; // @synthesize webLoginVC=_webLoginVC;
@property(retain) ACUIWebAuthViewController *webAuthVC; // @synthesize webAuthVC=_webAuthVC;
@property(retain) NSPanel *webAuthPanel; // @synthesize webAuthPanel=_webAuthPanel;
@property(retain) NSView *webViewContainer; // @synthesize webViewContainer=_webViewContainer;
@property(retain) NSButton *okButton; // @synthesize okButton=_okButton;
@property(retain) NSPanel *passwordPanel; // @synthesize passwordPanel=_passwordPanel;
@property(retain) NSString *password; // @synthesize password=_password;
@property BOOL isVerifyingCredential; // @synthesize isVerifyingCredential=_isVerifyingCredential;
- (void)cancelAuthorization:(id)arg1;
- (void)startWebAuthorization:(id)arg1;
- (BOOL)disableAutoReload;
- (void)helpButton:(id)arg1;
- (void)cancelButton:(id)arg1;
- (void)saveAccountSucceeded;
- (void)loginEndedWithError:(id)arg1;
- (void)webLoginEndedWithError:(id)arg1;
- (void)webAuthViewController:(id)arg1 loginEndedWithError:(id)arg2;
- (void)saveAccountFailedWithError:(id)arg1;
- (BOOL)willSaveAccount;
- (void)okButton:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)displayInWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


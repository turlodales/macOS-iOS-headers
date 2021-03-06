//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoginUIKit/LUI2ViewController.h>

#import <LoginUIKit/LUI2SecureTextFieldViewControllerDelegate-Protocol.h>

@class LUI2SecureTextFieldViewController, LUI2VisualEffectButton;

@interface LUI2PasswordViewController : LUI2ViewController <LUI2SecureTextFieldViewControllerDelegate>
{
    LUI2SecureTextFieldViewController *_secureTextFieldViewController;
    LUI2VisualEffectButton *_backButton;
    LUI2VisualEffectButton *_loginButton;
}

@property(readonly) LUI2VisualEffectButton *loginButton; // @synthesize loginButton=_loginButton;
@property(readonly) LUI2VisualEffectButton *backButton; // @synthesize backButton=_backButton;
@property(readonly) LUI2SecureTextFieldViewController *secureTextFieldViewController; // @synthesize secureTextFieldViewController=_secureTextFieldViewController;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)viewForPopover;
- (void)shake;
- (void)setEnabled:(BOOL)arg1;
- (void)secureTextFieldTextDidChange:(id)arg1;
- (void)_removeSecureTextFieldViewController;
- (void)_updateBlendingMode:(id)arg1;

@end


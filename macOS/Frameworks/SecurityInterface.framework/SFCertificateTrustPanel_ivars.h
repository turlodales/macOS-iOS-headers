//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSBox, NSButton, NSLayoutConstraint, NSSplitView, NSStackView, NSString, NSTextField, NSWindow, SFIconView;

__attribute__((visibility("hidden")))
@interface SFCertificateTrustPanel_ivars : NSObject
{
    SFIconView *_iconView;
    NSStackView *_stackView;
    NSSplitView *_splitView;
    NSTextField *_messageField;
    NSTextField *_informationField;
    NSButton *_showCertButton;
    NSButton *_trustButton;
    NSBox *_aboveContentBox;
    NSBox *_discloseContentBox;
    NSBox *_belowContentBox;
    NSLayoutConstraint *_discloseContentHeightConstraint;
    struct CGRect _lastDiscloseRect;
    NSString *_defaultMessage;
    NSString *_defaultInformation;
    NSWindow *_offScreenWindow;
    BOOL _showsCertButton;
    BOOL _showsTrustButton;
    long long _trustButtonState;
    BOOL _certificatesDisclosed;
    BOOL _savingTrustSettings;
    BOOL _forceAdminTrust;
    NSArray *_topLevelObjects;
}

- (void)dealloc;

@end


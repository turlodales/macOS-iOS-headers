//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTextViewDelegate.h"

@class ContentHuggingTextView, NSClipView, NSPopover, NSString, WBSSavedPassword;

__attribute__((visibility("hidden")))
@interface PasswordsAuditingPopoverViewController : NSViewController <NSTextViewDelegate>
{
    NSString *_duplicatedPasswordDomain;
    NSPopover *_popover;
    id <PasswordsAuditingHandler> _passwordAuditingHandler;
    WBSSavedPassword *_auditingSavedPassword;
    NSClipView *_passwordsAuditingWarningLabelEnclosingClipView;
    ContentHuggingTextView *_passwordsAuditingWarningLabel;
}

- (void).cxx_destruct;
@property ContentHuggingTextView *passwordsAuditingWarningLabel; // @synthesize passwordsAuditingWarningLabel=_passwordsAuditingWarningLabel;
@property __weak NSClipView *passwordsAuditingWarningLabelEnclosingClipView; // @synthesize passwordsAuditingWarningLabelEnclosingClipView=_passwordsAuditingWarningLabelEnclosingClipView;
@property(readonly, nonatomic) WBSSavedPassword *auditingSavedPassword; // @synthesize auditingSavedPassword=_auditingSavedPassword;
@property(nonatomic) __weak id <PasswordsAuditingHandler> passwordAuditingHandler; // @synthesize passwordAuditingHandler=_passwordAuditingHandler;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)closePopover;
- (void)showPopoverWithPositioningView:(id)arg1;
- (void)_updateWarningLabelStringValue;
- (void)viewDidLoad;
- (id)initWithAuditingSavedPassword:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


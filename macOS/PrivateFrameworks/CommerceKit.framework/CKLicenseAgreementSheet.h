//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSArray, NSButton, NSTextField, NSTextView, NSWindow;

@interface CKLicenseAgreementSheet : NSWindowController
{
    NSButton *_agreeButton;
    NSButton *_cancelButton;
    NSTextView *_textView;
    NSTextField *_titleField;
    long long _sheetReturnCode;
    NSArray *_productKeys;
    NSWindow *_hostWindow;
}

- (void).cxx_destruct;
@property __weak NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(copy) NSArray *productKeys; // @synthesize productKeys=_productKeys;
- (void)agree:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_dismissPanelWithCode:(long long)arg1;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)displaySheetWithTitle:(id)arg1 content:(id)arg2 onWindow:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (BOOL)userAgreedToAllAgreementsWithWindowForSheet:(id)arg1;
- (id)_titleValueKey;
- (id)_textValueKey;
- (id)_nibName;
- (id)init;
- (id)initWithUpdateProductKeys:(id)arg1;

@end


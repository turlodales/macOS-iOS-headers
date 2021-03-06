//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class CWDisplayedScanResult, NSButton, NSTextField;

@interface CWErrorDialog : NSWindowController
{
    CWDisplayedScanResult *_scanResult;
    NSTextField *_title;
    NSTextField *_description;
    NSButton *_runDiagnosticsButton;
    NSButton *_okButton;
    NSButton *_cancelButton;
    id _delegate;
    BOOL _installerContext;
}

@property(readonly, copy) CWDisplayedScanResult *scanResult; // @synthesize scanResult=_scanResult;
@property __weak id delegate; // @synthesize delegate=_delegate;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (void)onCancelButton:(id)arg1;
- (void)onRunDiagnosticsButton:(id)arg1;
- (void)onOKButton:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (void)dealloc;
- (id)initWithScanResult:(id)arg1;

@end


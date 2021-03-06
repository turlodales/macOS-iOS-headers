//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSLocalSavePanel, NSTextField;

__attribute__((visibility("hidden")))
@interface NSNavNewFolderController : NSWindowController
{
    NSLocalSavePanel *_savePanel;
    NSTextField *_folderNameField;
    NSTextField *_errorMessage;
    NSButton *_cancelButton;
    NSButton *_okButton;
}

- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (id)runModalForSavePanel:(id)arg1;
- (BOOL)isRunning;
- (id)_defaultNewFolderName;
- (void)controlTextDidChange:(id)arg1;
- (void)_updateOkButtonEnabledStateAndErrorMessage;
- (id)_folderPath;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTextFieldDelegate.h"
#import "NSToolbarDelegate.h"

@class IASLogDataSource, NSArray, NSBundle, NSMutableDictionary, NSPopUpButton, NSSearchField, NSString, NSTableView, NSTextField, NSWindow;

@interface IASLogWindowController : NSWindowController <NSToolbarDelegate, NSTextFieldDelegate>
{
    NSWindow *window;
    NSTableView *uiLogView;
    NSTextField *sendLogCommentTxt;
    NSTextField *sendLogContactTxt;
    NSBundle *_resourcesBundle;
    NSPopUpButton *_logDetailLevelPopUpButton;
    NSSearchField *_filterField;
    NSMutableDictionary *_toolbarItems;
    NSArray *_toolbarIDList;
    id _closeWatcherObj;
    SEL _closeWatcherSel;
    IASLogDataSource *_logDataSource;
}

+ (void)_sendLogViaHost:(id)arg1;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (id)initWithCloseObserver:(id)arg1 selector:(SEL)arg2;
- (void)_setDefaultLogWindowFrame;
- (void)saveDocument:(id)arg1;
- (BOOL)writeLogToFile:(id)arg1;
- (void)_sendLogViaCrashReporter;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)printInstallerDocument:(id)arg1;
- (void)searchFieldTextChanged:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)showAllLogs:(id)arg1;
- (void)showProgressLogs:(id)arg1;
- (void)showErrorLogs:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)_toolbarItemList;
- (void)_createAndAddToolbar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSWindowRestoration-Protocol.h>

@class NSBox, NSButton, NSLayoutConstraint, NSMatrix, NSMutableArray, NSMutableDictionary, NSString, NSWindow;

@interface NSPreferences : NSObject <NSWindowRestoration>
{
    NSWindow *_preferencesPanel;
    NSBox *_preferenceBox;
    NSMatrix *_moduleMatrix;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSButton *_applyButton;
    NSMutableArray *_preferenceTitles;
    NSMutableArray *_preferenceModules;
    NSMutableDictionary *_masterPreferenceViews;
    NSMutableDictionary *_currentSessionPreferenceViews;
    NSBox *_originalContentView;
    BOOL _isModal;
    double _constrainedWidth;
    id _currentModule;
    void *_reserved;
    BOOL _needsCentering;
    NSLayoutConstraint *_helpButtonLeadingConstraint;
    NSLayoutConstraint *_helpButtonTopConstraint;
    NSButton *_helpButton;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (Class)defaultPreferencesClass;
+ (void)setDefaultPreferencesClass:(Class)arg1;
+ (id)sharedPreferences;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)toolbarItemClicked:(id)arg1;
- (id)_itemIdentifierForModule:(id)arg1;
- (BOOL)usesButtons;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowDidResize:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)confirmCloseSheetIsDone:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)windowTitle;
- (void)activateModuleHelp:(id)arg1;
- (id)_currentModuleHelpBook;
- (id)_currentModuleHelpAnchor;
- (void)_selectModuleOwner:(id)arg1;
- (void)apply:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (long long)showModalPreferencesPanel;
- (long long)showModalPreferencesPanelForOwner:(id)arg1;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)showPreferencesPanelForOwner:(id)arg1;
- (id)_setupPreferencesPanelForOwnerAtIndex:(long long)arg1;
- (id)_setupPreferencesPanelForOwner:(id)arg1;
- (void)showPreferencesPanel;
- (void)_setupUI;
- (void)_setupToolbar;
- (void)addPreferenceNamed:(id)arg1 owner:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <UXKit/NSToolbarDelegate-Protocol.h>
#import <UXKit/NSWindowDelegate-Protocol.h>
#import <UXKit/_UXAccessoryBarContainer-Protocol.h>

@class NSString, NSTitlebarAccessoryViewController, NSToolbarItem, UXToolbar, UXViewController;

@interface UXWindowController : NSWindowController <NSToolbarDelegate, _UXAccessoryBarContainer, NSWindowDelegate>
{
    NSTitlebarAccessoryViewController *_titlebarAccessoryViewController;
    UXToolbar *_currentAccessoryToolbar;
    NSToolbarItem *_navigationBarToolbarItem;
}

+ (id)defaultWindow;
- (void).cxx_destruct;
@property __weak NSToolbarItem *navigationBarToolbarItem; // @synthesize navigationBarToolbarItem=_navigationBarToolbarItem;
- (void)windowDidBecomeFirstResponder:(id)arg1;
- (void)windowDidRecalculateKeyViewLoop:(id)arg1;
- (void)windowWillRecalculateKeyViewLoop:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)_updateFirstResponder;
- (void)_updateAccessoryBar;
- (void)_updateToolbarItem;
- (void)_popoverWillShow:(id)arg1;
- (void)_setupAccessoryBar;
- (void)_setupNavigationBarToolbarItem;
- (void)_setAccessoryBarHidden:(BOOL)arg1;
@property(readonly, nonatomic) double _accessoryBarHeight;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)rootNavigationController;
@property(retain, nonatomic) UXViewController *rootViewController;
@property(readonly, nonatomic) NSTitlebarAccessoryViewController *titlebarAccessoryViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_tearDownViewControllerHierarchyForViewController:(id)arg1;
- (void)teardownViewControllerHierarchy;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


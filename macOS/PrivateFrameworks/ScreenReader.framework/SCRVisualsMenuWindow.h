//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXVMenuWindowMouseEventDelegate.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, SCRGuide;

__attribute__((visibility("hidden")))
@interface SCRVisualsMenuWindow : NSObject <AXVMenuWindowMouseEventDelegate>
{
    NSObject<OS_dispatch_queue> *_menuWindowSerialQueue;
    BOOL _enabled;
    BOOL __menuItemsReplaced;
    BOOL __menuTitleUpdated;
    BOOL __showContent;
    NSString *_title;
    NSArray *_items;
    NSArray *__menuItems;
    NSArray *__addedMenuItems;
    SCRGuide *_guideForMenu;
    long long _rowCountToShow;
    id <AXVAMenuWindowInterface> __menuAgent;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setShowContent:) BOOL _showContent; // @synthesize _showContent=__showContent;
@property(nonatomic, setter=_setMenuTitleUpdated:) BOOL _menuTitleUpdated; // @synthesize _menuTitleUpdated=__menuTitleUpdated;
@property(nonatomic, setter=_setMenuItemsReplaced:) BOOL _menuItemsReplaced; // @synthesize _menuItemsReplaced=__menuItemsReplaced;
@property(retain, nonatomic, setter=_setMenuAgent:) id <AXVAMenuWindowInterface> _menuAgent; // @synthesize _menuAgent=__menuAgent;
@property long long rowCountToShow; // @synthesize rowCountToShow=_rowCountToShow;
@property(retain, nonatomic) SCRGuide *guideForMenu; // @synthesize guideForMenu=_guideForMenu;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)mouseDownOnMenuItem:(id)arg1 atRowIndex:(long long)arg2;
- (void)_refreshDisplayedMenuItems:(id)arg1;
- (void)refreshMenuIfNeeded;
- (id)_convertSCRItemsToAXVItems:(id)arg1;
@property(copy, setter=_setAddedMenuItems:) NSArray *_addedMenuItems; // @synthesize _addedMenuItems=__addedMenuItems;
- (BOOL)_shouldReplaceLastItemWhenAddingItems;
- (void)addItems:(id)arg1;
@property(copy, setter=_setMenuItems:) NSArray *_menuItems; // @synthesize _menuItems=__menuItems;
@property(copy) NSArray *items; // @synthesize items=_items;
- (void)selectMenuItemAtIndex:(long long)arg1;
- (void)setMenuFontSize:(double)arg1;
@property(copy) NSString *title; // @synthesize title=_title;
- (void)hideMenuWindow;
- (void)showMenuWindow;
- (id)initWithMenuAgent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


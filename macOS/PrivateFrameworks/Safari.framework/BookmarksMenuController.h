//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class NSMenuItem, NSString, WebsiteIconMenu;

__attribute__((visibility("hidden")))
@interface BookmarksMenuController : NSObject <NSMenuDelegate>
{
    WebsiteIconMenu *_bookmarksMenu;
    NSMenuItem *_lastBuiltInBookmarksMenuItem;
    NSMenuItem *_lastBookmarksMenuCollectionMenuItem;
    NSMenuItem *_lastUserBookmarkMenuItem;
    NSMenuItem *_favoritesMenuItem;
    NSMenuItem *_separatorMenuItem;
    BOOL _menuNeedsReload;
    BOOL _command1Through9SwitchesTabs;
    unsigned long long _bookmarksGenerationAtLastReload;
}

- (void).cxx_destruct;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_bookmarksWereCleanedUp:(id)arg1;
- (void)_bookmarksWereReloaded:(id)arg1;
- (void)_bookmarksMenuPreferencesDidChange:(id)arg1;
- (void)_bookmarksDidChange:(id)arg1;
- (void)_scheduleMenuReload;
- (void)_scheduleProcessingBlock:(CDUnknownBlockType)arg1;
- (void)_insertMenuSeparatorIfNeeded;
- (void)_addFavoritesBookmarksKeyEquivalentsToMenu:(id)arg1;
- (void)_removeBookmarksFromMenu:(id)arg1 withFavoritesMenuItem:(id)arg2 lastBookmarksMenuCollectionMenuItem:(id)arg3 separatorMenuItem:(id)arg4 lastBuiltInBookmarksMenuItem:(id)arg5 lastUserBookmarkMenuItem:(id)arg6;
- (void)_removeBookmarksFromMenu;
- (void)_removeFavoritesSubmenu;
- (void)_removeBookmarksMenuFolderItemsFromMenu;
- (void)_removeAllBookmarksFromMenu;
- (void)_resetMenu;
- (void)_addBookmarksMenuFolderItemsFromFolder:(id)arg1 bookmarksMenuCollection:(id)arg2 shouldFinishAddingHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_addBookmarksMenuFolderItemsIfNeeded;
- (void)_addFavoritesSubmenuItemsFromFolder:(id)arg1 shouldFinishAddingHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_addFavoritesSubmenu;
- (void)_addSpecialBookmarkSourcesToMenu;
- (BOOL)_doesTopLevelBookmarkContainPresentableInMenuBookmarksWithMenuCollection:(id)arg1 barCollection:(id)arg2;
- (void)_addBookmarksToMenu;
- (id)_existingMenuItemPrecedingSection:(long long)arg1;
- (id)_existingMenuItemPrecedingSection:(long long)arg1 usingLastBuiltInBookmarksMenuItem:(id)arg2 separatorMenuItem:(id)arg3 lastBookmarksMenuCollectionMenuItem:(id)arg4 favoritesMenuItem:(id)arg5;
- (id)_sectionsToMenuItemsUsingLastBuiltInBookmarksMenuItem:(id)arg1 separatorMenuItem:(id)arg2 lastBookmarksMenuCollectionMenuItem:(id)arg3 favoritesMenuItem:(id)arg4;
- (void)_commonInitWithBookmarksMenu:(id)arg1;
- (id)initWithBookmarksMenu:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


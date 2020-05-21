//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSImage, NSTabBarItem, NSView, NSVisualTabPickerRootViewController;

@protocol NSVisualTabPickerDelegate <NSObject>
- (void)visualTabPickerControllerDidEndHiding:(NSVisualTabPickerRootViewController *)arg1;
- (void)visualTabPickerControllerDidBeginHiding:(NSVisualTabPickerRootViewController *)arg1;
- (void)visualTabPickerControllerWillClose:(NSVisualTabPickerRootViewController *)arg1;
- (void)visualTabPickerController:(NSVisualTabPickerRootViewController *)arg1 closeTabBarItem:(NSTabBarItem *)arg2;
- (void)visualTabPickerController:(NSVisualTabPickerRootViewController *)arg1 selectTab:(NSTabBarItem *)arg2;
- (void)createNewTabForVisualTabPickerController:(NSVisualTabPickerRootViewController *)arg1;
- (BOOL)creatingNewTabWillCloseVisualTabPickerController:(NSVisualTabPickerRootViewController *)arg1;
- (struct CGRect)frameForWindowContentAnimation;
- (NSArray *)tabBarItemsForVisualTabPickerController:(NSVisualTabPickerRootViewController *)arg1;
- (NSTabBarItem *)selectedTabViewItemForVisualTabPickerController:(NSVisualTabPickerRootViewController *)arg1;
- (struct CGRect)frameForVisualTabPickerController:(NSVisualTabPickerRootViewController *)arg1;
- (BOOL)visualTabPicker:(NSVisualTabPickerRootViewController *)arg1 highlightStateForTabItem:(NSTabBarItem *)arg2;
- (NSImage *)visualTabPicker:(NSVisualTabPickerRootViewController *)arg1 imageForTabItem:(NSTabBarItem *)arg2;
- (NSView *)visualTabPicker:(NSVisualTabPickerRootViewController *)arg1 thumbnailViewForTabItem:(NSTabBarItem *)arg2;
@end


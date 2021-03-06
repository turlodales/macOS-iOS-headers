//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSTabBarItem, NSVisualTabPickerGridView;

@protocol NSVisualTabPickerGridViewDelegate <NSObject>

@optional
- (void)visualTabPickerGridViewCloseTabViewItem:(NSTabBarItem *)arg1;
- (void)visualTabPickerGridView:(NSVisualTabPickerGridView *)arg1 highlightTab:(NSTabBarItem *)arg2;
- (void)visualTabPickerGridView:(NSVisualTabPickerGridView *)arg1 selectTab:(NSTabBarItem *)arg2;
- (void)createNewTabForVisualTabPickerGridView:(NSVisualTabPickerGridView *)arg1;
- (BOOL)canCloseTabsInVisualTabPickerGridView:(NSVisualTabPickerGridView *)arg1;
@end


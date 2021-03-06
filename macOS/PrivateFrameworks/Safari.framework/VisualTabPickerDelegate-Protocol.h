//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class BrowserTabViewItem, NSArray, VisualTabPickerViewController, WBSCloudTab;

@protocol VisualTabPickerDelegate <NSObject>
- (void)visualTabPickerControllerDidEndHiding:(VisualTabPickerViewController *)arg1;
- (void)visualTabPickerControllerDidBeginHiding:(VisualTabPickerViewController *)arg1;
- (void)willStartExitAnimationForVisualTabPickerController:(VisualTabPickerViewController *)arg1;
- (void)visualTabPickerControllerWillClose:(VisualTabPickerViewController *)arg1;
- (void)visualTabPickerController:(VisualTabPickerViewController *)arg1 selectTab:(BrowserTabViewItem *)arg2;
- (BOOL)createNewTabForVisualTabPickerController:(VisualTabPickerViewController *)arg1;
- (BOOL)creatingNewTabWillCloseVisualTabPickerController:(VisualTabPickerViewController *)arg1;
- (void)visualTabPickerController:(VisualTabPickerViewController *)arg1 openCloudTab:(WBSCloudTab *)arg2;
- (NSArray *)browserTabViewItemsForVisualTabPickerController:(VisualTabPickerViewController *)arg1;
- (BrowserTabViewItem *)selectedTabViewItemForVisualTabPickerController:(VisualTabPickerViewController *)arg1;
- (struct CGRect)frameForVisualTabPickerController:(VisualTabPickerViewController *)arg1;
@end


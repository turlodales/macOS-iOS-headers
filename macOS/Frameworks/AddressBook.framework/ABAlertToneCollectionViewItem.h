//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCollectionViewItem.h>

#import "TKTonePickerViewControllerDelegate.h"

@class NSString, TKTonePickerViewController;

__attribute__((visibility("hidden")))
@interface ABAlertToneCollectionViewItem : ABCollectionViewItem <TKTonePickerViewControllerDelegate>
{
    TKTonePickerViewController *_tonePickerViewController;
}

@property(retain, nonatomic) TKTonePickerViewController *tonePickerViewController; // @synthesize tonePickerViewController=_tonePickerViewController;
- (BOOL)supportsClickToEdit;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (id)_labelMenuItems;
- (id)_localizedLabel;
- (BOOL)_shouldShowRemoveItemButton;
- (BOOL)_shouldShowAddItemButton;
- (id)toneNameForIdentifier:(id)arg1;
- (id)toneIdentifierForAlertDictionary:(id)arg1;
- (void)_updateViewValue;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


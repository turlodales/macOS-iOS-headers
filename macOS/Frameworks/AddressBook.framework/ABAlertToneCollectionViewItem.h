//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCollectionViewItem.h>

#import "TKTonePickerViewControllerDelegate.h"

@class NSString, TKTonePickerViewController;

@interface ABAlertToneCollectionViewItem : ABCollectionViewItem <TKTonePickerViewControllerDelegate>
{
    TKTonePickerViewController *_tonePickerViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TKTonePickerViewController *tonePickerViewController; // @synthesize tonePickerViewController=_tonePickerViewController;
- (BOOL)supportsClickToEdit;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (BOOL)shouldEnableEditPopupButton;
- (id)_labelMenuItems;
- (id)_localizedLabel;
- (BOOL)_shouldShowRemoveItemButton;
- (BOOL)_shouldShowAddItemButton;
- (id)toneNameForIdentifier:(id)arg1;
- (id)toneIdentifierFromAlert:(id)arg1;
- (void)_updateViewValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


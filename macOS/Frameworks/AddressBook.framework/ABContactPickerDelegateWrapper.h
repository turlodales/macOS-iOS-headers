//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNPrivateContactPickerDelegate.h"

@class ABAddressBook, ABPersonPicker, NSString;

__attribute__((visibility("hidden")))
@interface ABContactPickerDelegateWrapper : NSObject <CNPrivateContactPickerDelegate>
{
    id <ABPersonPickerDelegate> _delegate;
    ABPersonPicker *_picker;
    ABAddressBook *_addressBook;
}

- (id)backingContactsForContact:(id)arg1;
- (id)contactWithLabeledValueIdentifier:(id)arg1 forKey:(id)arg2 inContacts:(id)arg3;
- (id)contactWithValue:(id)arg1 forKey:(id)arg2 inContacts:(id)arg3;
- (id)personFromContact:(id)arg1;
- (void)contactPickerDidClose:(id)arg1;
- (void)contactPicker:(id)arg1 didChooseCompatibilityContact:(id)arg2 key:(id)arg3 value:(id)arg4;
- (void)dealloc;
- (id)initWithPersonPicker:(id)arg1 personPickerDelegate:(id)arg2 addressBook:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


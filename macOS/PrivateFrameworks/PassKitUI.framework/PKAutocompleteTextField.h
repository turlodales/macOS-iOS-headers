//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

#import "NSTextFieldDelegate.h"
#import "PKAddressSearchModelDelegate.h"
#import "PKAutocompleteViewControllerDelegate.h"

@class NSString, PKAddressSearchModel, PKAddressSearchResults, PKAutocompleteViewController;

@interface PKAutocompleteTextField : NSTextField <NSTextFieldDelegate, PKAutocompleteViewControllerDelegate, PKAddressSearchModelDelegate>
{
    BOOL _editing;
    BOOL _autocompleting;
    id <PKAutocompleteTextFieldDelegate> _autocompleteDelegate;
    PKAddressSearchModel *_addressSearchModel;
    PKAutocompleteViewController *_autocompleteViewController;
    PKAddressSearchResults *_searchResults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKAddressSearchResults *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) PKAutocompleteViewController *autocompleteViewController; // @synthesize autocompleteViewController=_autocompleteViewController;
@property(retain, nonatomic) PKAddressSearchModel *addressSearchModel; // @synthesize addressSearchModel=_addressSearchModel;
@property(nonatomic, getter=isAutocompleting) BOOL autocompleting; // @synthesize autocompleting=_autocompleting;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <PKAutocompleteTextFieldDelegate> autocompleteDelegate; // @synthesize autocompleteDelegate=_autocompleteDelegate;
- (BOOL)_isViewOrSubviewFirstResponder:(id)arg1;
- (void)_hideAutocomplete;
- (void)_showAutocompleteIfNecessary;
- (void)_updateAutocompleteVisibility;
- (void)_beginSearchIfNecessary;
- (long long)_indexForSection:(long long)arg1;
- (void)selectedAddress:(id)arg1 withError:(id)arg2;
- (void)mapSearchUpdated:(id)arg1;
- (void)contactsSearchUpdated:(id)arg1;
- (void)autocompleteViewControllerDidFinish:(id)arg1;
- (id)autocompleteViewController:(id)arg1 viewForRowAtIndexPath:(id)arg2;
- (id)autocompleteViewController:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)autocompleteViewController:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInAutocompleteViewController:(id)arg1;
- (void)autocompleteViewController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)textDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


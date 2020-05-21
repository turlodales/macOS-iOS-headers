//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCardCollectionRowView.h>

@class CNPostalAddress, NSNumber, NSStackView;

@interface ABCardCollectionPostalAddressRowView : ABCardCollectionRowView
{
    CNPostalAddress *_postalAddress;
    NSStackView *_addressFieldsContainer;
    BOOL _isEditing;
    NSNumber *_cachedIntrinsicHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *cachedIntrinsicHeight; // @synthesize cachedIntrinsicHeight=_cachedIntrinsicHeight;
@property(readonly, nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) NSStackView *addressFieldsContainer; // @synthesize addressFieldsContainer=_addressFieldsContainer;
@property(retain, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (void)processControlTextDidChange:(id)arg1;
- (id)calcuatedHeightGivenIntrinsicHeight:(double)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)invalidatePostalAddressRowLayout;
- (void)controlTextDidChange:(id)arg1;
- (void)textFieldWillResignFirstResponder:(id)arg1;
- (void)textFieldWillBecomeFirstResponder:(id)arg1;
- (BOOL)isEmptyAndNotFirstResponder;
- (BOOL)hasValue;
- (void)focus;
- (id)makeTouchBar;
- (void)highlightSearchTerms:(id)arg1;
- (id)updateKeyViewLoop;
- (void)updateValueView;
- (void)didInsertIntoCollectionView:(id)arg1;
- (void)rebuildAddressEntryFields;
- (id)firstTextField;
- (void)setValueSelectable:(BOOL)arg1;
- (void)setAddressFieldsEnabled:(BOOL)arg1;
- (id)valueView;

@end


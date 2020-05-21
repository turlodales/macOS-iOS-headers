//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSComboBoxDataSource.h"
#import "NSComboBoxDelegate.h"

@class NSComboBox, NSString, UAModifiersEditor;

@interface UAModifiersController : NSObject <NSComboBoxDelegate, NSComboBoxDataSource>
{
    UAModifiersEditor *_modifiersFieldEditor;
    NSComboBox *__modifiersComboBox;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSComboBox *_modifiersComboBox; // @synthesize _modifiersComboBox=__modifiersComboBox;
- (void)_setComboBox:(id)arg1 stringValue:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)update;
@property(readonly, nonatomic) UAModifiersEditor *modifiersFieldEditor; // @synthesize modifiersFieldEditor=_modifiersFieldEditor;
@property(nonatomic) BOOL enabled;
- (void)dealloc;
- (id)initWithComboBox:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


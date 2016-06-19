//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTokenFieldDelegate.h"

@class AMVariablesEditorView, NSCharacterSet, NSString;

@interface AMVariablesEditorDateFormatDelegate : NSObject <NSTokenFieldDelegate>
{
    NSCharacterSet *_charactersICU;
    NSCharacterSet *_charactersToQuote;
    AMVariablesEditorView *_editorView;
}

- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (void)formatDidChange:(id)arg1;
- (void)setObjectValue:(id)arg1 forTokenField:(id)arg2;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)formatsForPattern:(id)arg1;
- (id)displayValueForPattern:(id)arg1;
- (id)displayStringForPattern:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)representedObjectsForPattern:(id)arg1;
- (void)setEditorView:(id)arg1;
- (id)editorView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


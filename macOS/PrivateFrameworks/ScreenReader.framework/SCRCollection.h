//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/_SCRCollectionSectionBase.h>

#import "SCRSelectionChangeHelperElement.h"

@class SCRSelectionChangeHelper;

__attribute__((visibility("hidden")))
@interface SCRCollection : _SCRCollectionSectionBase <SCRSelectionChangeHelperElement>
{
    SCRSelectionChangeHelper *__selectionChangeHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCRSelectionChangeHelper *_selectionChangeHelper; // @synthesize _selectionChangeHelper=__selectionChangeHelper;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (BOOL)allowFocusThroughSingleChild;
- (id)moveToUIElement:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)toggleMultipleSelectionWithRequest:(id)arg1;
- (BOOL)toggleSingleSelectionWithRequest:(id)arg1;
- (void)selectChildUIElement:(id)arg1;
- (BOOL)setSingleSelectionWithRequest:(id)arg1;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (void)_collectionSelectionDidChange;
- (void)selectionDidChange;
- (BOOL)_moveToContentSibling:(id)arg1;
- (unsigned long long)indexOfElement:(id)arg1;
- (void)dealloc;
- (void)itemPreFeedbackHandler:(id)arg1;

@end


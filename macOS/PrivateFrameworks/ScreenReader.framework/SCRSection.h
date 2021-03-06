//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/_SCRCollectionSectionBase.h>

__attribute__((visibility("hidden")))
@interface SCRSection : _SCRCollectionSectionBase
{
}

- (void)setBrailleLineWithFocusedElement:(id)arg1 forceRebuild:(BOOL)arg2;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (BOOL)moveOutWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (id)uiElementForAccessibilitySelectedChildren;
- (BOOL)setSingleSelectionWithRequest:(id)arg1;
- (id)elementToSpeakAfterMove;
- (BOOL)_moveToContentSibling:(id)arg1;
- (unsigned long long)indexOfElement:(id)arg1;
- (BOOL)needToRebuildChildren;
- (BOOL)childrenShouldAddIndexToDescription;
- (unsigned long long)numberOfChildren:(BOOL)arg1;
- (id)onlyChild;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRList.h>

__attribute__((visibility("hidden")))
@interface _SCRCollectionSectionBase : SCRList
{
}

- (BOOL)_collectionShouldFocusThroughSingleChild;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (void)handleSelectionChange:(id)arg1;
- (BOOL)handleLayoutChangeWithInfo:(id)arg1;
- (BOOL)_moveToContentSiblingBelow;
- (BOOL)_moveToContentSiblingAbove;
- (BOOL)_moveToPreviousContentSibling;
- (BOOL)_moveToNextContentSibling;
- (BOOL)_moveToContentSibling:(id)arg1;
- (BOOL)_shouldUseCollectionSpecificFocusBehavior;
- (BOOL)shouldPromoteForMovingUIElement:(id)arg1;
- (Class)classForChildUIElement:(id)arg1 parent:(id)arg2;

@end


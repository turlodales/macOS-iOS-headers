//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCRCTargetSelectorTimer, SCRCThread, _SCRLayoutChangedNotificationInfo;

__attribute__((visibility("hidden")))
@interface SCRFocusManager : NSObject
{
    SCRCThread *__focusManagerThread;
    SCRCTargetSelectorTimer *__focusChainValidationTimer;
    _SCRLayoutChangedNotificationInfo *__aggregatedLayoutChangedNotificationInfo;
}

+ (id)_deepestDescendantOfElement:(id)arg1 closestToBounds:(struct CGRect)arg2 rebuildChildren:(BOOL)arg3;
+ (id)_childOfElement:(id)arg1 closestToBounds:(struct CGRect)arg2 rebuildChildren:(BOOL)arg3;
+ (id)_elementClosestToBounds:(struct CGRect)arg1 amongElements:(id)arg2;
+ (id)_parentChainFromElement:(id)arg1 upToElement:(id)arg2;
+ (id)_currentFocusChainDownFromElement:(id)arg1;
+ (BOOL)_isElementValidToJumpTo:(id)arg1 inApplication:(id)arg2;
+ (id)_validElementToJumpToFromAXUIElement:(struct __AXUIElement *)arg1 inApplication:(id)arg2;
+ (id)_deepestFocusedChildOfElement:(id)arg1;
+ (id)_validAndVisibleFocusChainFromElement:(id)arg1 updateChildrenAlongTheWay:(BOOL)arg2;
+ (void)_highlightNewDeepestFocusedElement:(id)arg1 playFeedback:(BOOL)arg2 request:(id)arg3;
+ (void)jumpFocusToElement:(id)arg1 inApplication:(id)arg2 request:(id)arg3;
+ (id)_chopOffSelectionStateFromEquivalenceTag:(id)arg1;
+ (id)_refreshFocusChainFromElement:(id)arg1;
+ (id)_validateElementToMoveTo:(id)arg1 withFallbackBounds:(struct CGRect)arg2;
+ (BOOL)_isElementValidForMoveTo:(id)arg1;
+ (BOOL)_isElementValidForFocusChain:(id)arg1;
+ (BOOL)_isElementVisible:(id)arg1;
+ (BOOL)_shouldIgnoreVisibilityStateForElement:(id)arg1;
+ (BOOL)_isGroupElement:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) _SCRLayoutChangedNotificationInfo *_aggregatedLayoutChangedNotificationInfo; // @synthesize _aggregatedLayoutChangedNotificationInfo=__aggregatedLayoutChangedNotificationInfo;
@property(retain, nonatomic) SCRCTargetSelectorTimer *_focusChainValidationTimer; // @synthesize _focusChainValidationTimer=__focusChainValidationTimer;
@property(retain, nonatomic) SCRCThread *_focusManagerThread; // @synthesize _focusManagerThread=__focusManagerThread;
- (void)_aggregateLayoutChangedNotificationInfo:(id)arg1;
- (void)_cancelPendingSelectorsOnFocusManagerThread;
- (void)_app_validateFocusChainInApplicationWithNotificationInfo:(id)arg1;
- (void)_handleFocusChainValidationTimerFired;
- (void)_scheduleFocusValidationTimer:(id)arg1;
- (void)_handleLayoutChangedForApplication:(id)arg1 userInfo:(id)arg2;
- (void)_exitFocusManagerThread:(id)arg1;
- (void)dealloc;
- (void)_initializeFocusManagerThread;
- (id)init;

@end


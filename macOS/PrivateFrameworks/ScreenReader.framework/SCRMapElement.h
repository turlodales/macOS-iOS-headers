//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRElement.h>

@class NSArray, SCRChildrenHashCache, SCRKeyboardKey;

__attribute__((visibility("hidden")))
@interface SCRMapElement : SCRElement
{
    SCRKeyboardKey *__lastNavKey;
    unsigned long long __focusedChildIndex;
    long long __previousImageMappingLevel;
    NSArray *__verticallyOrderedChildren;
    SCRChildrenHashCache *__childrenHashCache;
    id <SCRLocaleInfoProviding> __currentLocale;
    long long _previousImageMappingLevel;
    NSArray *__horizontallyOrderedChildren;
    struct CGPoint __previousElementLocation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *_horizontallyOrderedChildren; // @synthesize _horizontallyOrderedChildren=__horizontallyOrderedChildren;
@property(readonly, nonatomic) long long previousImageMappingLevel; // @synthesize previousImageMappingLevel=_previousImageMappingLevel;
@property(readonly, nonatomic) id <SCRLocaleInfoProviding> _currentLocale; // @synthesize _currentLocale=__currentLocale;
@property(readonly, nonatomic) SCRChildrenHashCache *_childrenHashCache; // @synthesize _childrenHashCache=__childrenHashCache;
@property(retain, nonatomic) NSArray *_verticallyOrderedChildren; // @synthesize _verticallyOrderedChildren=__verticallyOrderedChildren;
@property(nonatomic, setter=_setPreviousImageMappingLevel:) long long _previousImageMappingLevel; // @synthesize _previousImageMappingLevel=__previousImageMappingLevel;
@property(nonatomic, setter=_setFocusedChildIndex:) unsigned long long _focusedChildIndex; // @synthesize _focusedChildIndex=__focusedChildIndex;
@property(nonatomic, setter=_setPreviousElementLocation:) struct CGPoint _previousElementLocation; // @synthesize _previousElementLocation=__previousElementLocation;
@property(retain, nonatomic, setter=_setLastNavKey:) SCRKeyboardKey *_lastNavKey; // @synthesize _lastNavKey=__lastNavKey;
- (BOOL)handleLayoutChangeWithInfo:(id)arg1;
- (id)children:(BOOL)arg1;
- (unsigned long long)numberOfChildren:(BOOL)arg1;
- (id)childAtIndex:(unsigned long long)arg1 visibleOnly:(BOOL)arg2;
- (unsigned long long)indexOfElement:(id)arg1 visibleOnly:(BOOL)arg2;
- (id)_horizontallyOrderedChildrenVisible;
- (id)_elementChildrenForBrailleLineWithFocusedElement:(id)arg1;
- (void)setBrailleLineWithFocusedElement:(id)arg1 forceRebuild:(BOOL)arg2;
- (struct CGPoint)dropPointToElement:(id)arg1 includeX:(BOOL)arg2 includeY:(BOOL)arg3;
- (id)childAfterElement:(id)arg1;
- (id)childBeforeElement:(id)arg1;
- (id)_descriptionWrappedIfFocused:(id)arg1;
- (id)fullDescription;
- (BOOL)shouldMapElement:(id)arg1;
- (BOOL)handleReachingBoundaryForEvent:(id)arg1 forward:(BOOL)arg2 request:(id)arg3;
- (void)addSoundForNavigationWithSoundIdentifier:(id)arg1 toRequest:(id)arg2;
- (BOOL)moveToAdjacentSiblingElementMovingForward:(BOOL)arg1 withEvent:(id)arg2 request:(id)arg3;
- (BOOL)moveLastWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)moveFirstWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)_moveHorizontallyWithEvent:(id)arg1 forward:(BOOL)arg2 request:(id)arg3 allowFullWrapping:(BOOL)arg4;
- (BOOL)moveRightWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)moveLeftWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)shouldMoveToSibling;
- (BOOL)moveDownWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (id)elementForMovingDownWithWrapping:(BOOL)arg1;
- (id)_elementForMovingDownWithWrapping:(char *)arg1 currentIndex:(long long *)arg2 moveToAdjacentSibling:(char *)arg3;
- (BOOL)moveUpWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (id)elementForMovingUpWithWrapping:(BOOL)arg1;
- (id)_elementForMovingUpWithWrapping:(char *)arg1 currentIndex:(long long *)arg2 moveToPreviousSibling:(char *)arg3;
- (BOOL)_didHitBoundaryWithElement:(id)arg1 movingForward:(BOOL)arg2 request:(id)arg3 wrapped:(BOOL)arg4 allowFullWrapping:(BOOL)arg5;
- (BOOL)_postProcessNavigationEvent:(id)arg1 request:(id)arg2 commandKey:(id)arg3 canScroll:(BOOL)arg4 navigated:(BOOL)arg5 previousFocusChild:(id)arg6;
- (void)_preProcessNavigationEvent:(id)arg1;
- (BOOL)handleNavigationEvent:(id)arg1 request:(id)arg2 commandKey:(id)arg3 selector:(SEL)arg4 canScroll:(BOOL)arg5 canWrap:(BOOL)arg6;
- (BOOL)handleNavigationEvent:(id)arg1 request:(id)arg2 commandKey:(id)arg3 selector:(SEL)arg4 canScroll:(BOOL)arg5 visibleOnly:(BOOL)arg6;
- (void)_buildMapAndFocusIntoChildrenToPrepareForNavigation;
- (BOOL)moveToBookmarkInDirection:(long long)arg1 withEvent:(id)arg2 request:(id)arg3;
- (BOOL)moveToLastElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToLastVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)shouldThrottleNavigationEvent:(id)arg1;
- (BOOL)canNavigateToChildren;
- (BOOL)isInteractive;
- (id)childrenInReadContentsOrder;
- (id)promoteChildren:(id)arg1;
- (BOOL)isRedundant:(id)arg1;
- (BOOL)specialOrUnmappableChild:(id)arg1;
- (id)prepareChildrenArrayWithUIElements:(id)arg1;
- (void)setChildren:(id)arg1;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (BOOL)needToRebuildChildren;
- (BOOL)_supportsChildrenHashCache;
- (void)_logMapWithColumns:(struct __CFArray *)arg1 ColumnRanges:(struct __CFArray *)arg2 rowRanges:(struct __CFArray *)arg3;
- (id)alternateOrderedChildrenForMappedChildren:(id)arg1;
- (id)buildChildrenWithUIElements:(id)arg1;
- (id)defaultDescription;
- (id)statusDescription;
- (BOOL)elementIsEmpty;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2 currentLocale:(id)arg3;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end


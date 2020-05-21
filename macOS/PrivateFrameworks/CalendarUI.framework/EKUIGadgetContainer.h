//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKUILayoutItem.h"

@class CalDefaultDictionary, CalUIDividerView, EKUIGadget, EKUIGadgetContainerView, EKUIVibrantView, EKViewController, NSArray, NSColor, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface EKUIGadgetContainer : NSObject <EKUILayoutItem>
{
    BOOL _doNotPassdownExpandedState;
    BOOL _ignoresMouseEvents;
    BOOL _canBecomeKey;
    BOOL _selectsFirstKeyViewOnClick;
    BOOL _isTopLevelContainer;
    BOOL _isExpanded;
    BOOL _isHovered;
    BOOL _activeKeyboardHover;
    double _maximumHeightBeforeScrolling;
    NSString *_accessibilityDescription;
    EKUIGadgetContainer *_nextContainer;
    EKUIGadgetContainer *_previousContainer;
    EKUIGadget *_firstGadget;
    CDUnknownBlockType _shouldDisplayDividerAboveBlock;
    CDUnknownBlockType _shouldDisplayDividerBelowBlock;
    CDUnknownBlockType _shouldDisplayDividerExpandedAboveBlock;
    EKViewController *_viewController;
    id <EKUILayoutItem> _parentItem;
    NSString *_uuid;
    NSMutableOrderedSet *_mutableSubitems;
    NSMutableOrderedSet *_currentlyDisplayedItems;
    EKUIGadgetContainerView *_containerView;
    EKUIVibrantView *_backgroundView;
    CalUIDividerView *_topDivider;
    CalUIDividerView *_bottomDivider;
    NSDictionary *_metrics;
    NSMutableDictionary *_conditionalMetrics;
    NSArray *_topConstraints;
    NSArray *_bottomConstraints;
    NSArray *_subitemLabelConstraints;
    CalDefaultDictionary *_spacingOverrides;
    NSColor *_backgroundColor;
}

+ (id)enclosingGadgetContainerForLayoutItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL activeKeyboardHover; // @synthesize activeKeyboardHover=_activeKeyboardHover;
@property BOOL isHovered; // @synthesize isHovered=_isHovered;
@property BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain) CalDefaultDictionary *spacingOverrides; // @synthesize spacingOverrides=_spacingOverrides;
@property(retain) NSArray *subitemLabelConstraints; // @synthesize subitemLabelConstraints=_subitemLabelConstraints;
@property(retain) NSArray *bottomConstraints; // @synthesize bottomConstraints=_bottomConstraints;
@property(retain) NSArray *topConstraints; // @synthesize topConstraints=_topConstraints;
@property(retain) NSMutableDictionary *conditionalMetrics; // @synthesize conditionalMetrics=_conditionalMetrics;
@property(retain) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(retain) CalUIDividerView *bottomDivider; // @synthesize bottomDivider=_bottomDivider;
@property(retain) CalUIDividerView *topDivider; // @synthesize topDivider=_topDivider;
@property(retain) EKUIVibrantView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) EKUIGadgetContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain) NSMutableOrderedSet *currentlyDisplayedItems; // @synthesize currentlyDisplayedItems=_currentlyDisplayedItems;
@property(retain) NSMutableOrderedSet *mutableSubitems; // @synthesize mutableSubitems=_mutableSubitems;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property __weak id <EKUILayoutItem> parentItem; // @synthesize parentItem=_parentItem;
@property __weak EKViewController *viewController; // @synthesize viewController=_viewController;
@property(copy) CDUnknownBlockType shouldDisplayDividerExpandedAboveBlock; // @synthesize shouldDisplayDividerExpandedAboveBlock=_shouldDisplayDividerExpandedAboveBlock;
@property(copy) CDUnknownBlockType shouldDisplayDividerBelowBlock; // @synthesize shouldDisplayDividerBelowBlock=_shouldDisplayDividerBelowBlock;
@property(copy) CDUnknownBlockType shouldDisplayDividerAboveBlock; // @synthesize shouldDisplayDividerAboveBlock=_shouldDisplayDividerAboveBlock;
@property __weak EKUIGadget *firstGadget; // @synthesize firstGadget=_firstGadget;
@property __weak EKUIGadgetContainer *previousContainer; // @synthesize previousContainer=_previousContainer;
@property __weak EKUIGadgetContainer *nextContainer; // @synthesize nextContainer=_nextContainer;
@property BOOL isTopLevelContainer; // @synthesize isTopLevelContainer=_isTopLevelContainer;
@property(copy) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property BOOL selectsFirstKeyViewOnClick; // @synthesize selectsFirstKeyViewOnClick=_selectsFirstKeyViewOnClick;
@property BOOL canBecomeKey; // @synthesize canBecomeKey=_canBecomeKey;
@property BOOL ignoresMouseEvents; // @synthesize ignoresMouseEvents=_ignoresMouseEvents;
@property BOOL doNotPassdownExpandedState; // @synthesize doNotPassdownExpandedState=_doNotPassdownExpandedState;
@property double maximumHeightBeforeScrolling; // @synthesize maximumHeightBeforeScrolling=_maximumHeightBeforeScrolling;
- (void)updateDividers;
@property(readonly) BOOL hasKeyboardFocus;
- (BOOL)containerView:(id)arg1 didReceiveOpenEvent:(id)arg2;
- (void)containerViewResignedFirstResponder:(id)arg1;
- (void)containerViewBecameFirstResponder:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (id)claimedPboardTypes;
- (void)firstResponderChanged:(id)arg1;
- (void)animationDidFinish:(id)arg1;
- (BOOL)_windowIsVisible;
- (BOOL)subItemsAreAnimating;
- (void)collapseAllSubitemsExceptItem:(id)arg1;
- (void)_collapseAllSubItemsForThisContainerOnlyExceptItem:(id)arg1;
- (void)_subItem:(id)arg1 didSetExpandedState:(BOOL)arg2 willPerformAnimation:(BOOL)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)mouseUpInContainerView:(id)arg1;
- (void)toggleIsExpanded;
- (BOOL)isExpansionAllowed;
@property(readonly) BOOL isAnimating;
- (BOOL)_performExpansionAnimationIfNeeded:(BOOL)arg1;
- (void)configureWithBackgroundColor:(id)arg1;
- (void)setSpacing:(double)arg1 betweenTopSubitem:(id)arg2 bottomSubitem:(id)arg3 withCondition:(CDUnknownBlockType)arg4;
- (void)setConditionalSpacing:(double)arg1 forKey:(id)arg2 withCondition:(CDUnknownBlockType)arg3;
- (id)getSpacingForKey:(id)arg1;
- (id)bottomConstraint;
- (id)topConstraint;
- (void)updateConstraints;
- (void)updateConstraintsIncludingSubtree;
- (void)updateGadgetVisibility;
- (BOOL)makeFirstValidKeyViewFirstResponder;
- (id)firstValidKeyView;
- (id)lastVisibleGadget;
- (id)_lastVisibleItem;
- (id)_lastItem;
- (id)_firstVisibleItem;
- (id)_firstItem;
- (void)_addHiddenConstraintToSubitem:(id)arg1;
- (void)_addHorizontalConstraintToSubitem:(id)arg1 previousItem:(id)arg2 nextItem:(id)arg3;
- (void)_addConstraintBetweenTopItem:(id)arg1 bottomItem:(id)arg2;
- (void)_updateBottomConstraint;
- (void)_updateTopConstraint;
- (void)calculateKeyViewLoop;
- (void)enumerateAllDescendantsDepthFirstUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllDescendantsBreadthFirstUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubcontainersUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)itemIsAdjacentlyBelowVisibleDividerLine:(id)arg1;
- (BOOL)itemIsAdjacentlyBelowExpandedContainer:(id)arg1;
- (BOOL)itemIsAdjacentToExpandedContainer:(id)arg1;
- (void)enumerateCurrentlyDisplayedItemsWithNeighborsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubitemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addSubitemsByClasses:(id)arg1;
- (void)removeSubitems:(id)arg1;
- (void)addSubitems:(id)arg1;
- (void)removeSubitem:(id)arg1;
- (void)addSubitem:(id)arg1;
- (double)preferredWidth;
- (double)horizontalInset;
- (void)saveCompleteChange;
- (void)savePartialChange;
- (id)object;
- (id)item;
- (id)event;
- (id)enclosingGadgetContainer;
- (id)alignmentLabel;
- (BOOL)isScrolling;
- (id)subItems;
- (BOOL)isContainer;
- (BOOL)wantsAnimationSuppression;
- (BOOL)needsExpansion;
- (BOOL)isEditable;
- (void)subitemDidBecomeFirstResponder:(id)arg1;
- (void)subitemWantsFirstResponder:(id)arg1;
- (id)lastKeyView;
- (id)firstKeyView;
- (BOOL)updateWithDiff:(id)arg1;
- (void)updateScrollState;
- (void)setObject:(id)arg1;
- (void)setExpanded:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setExpanded:(BOOL)arg1 andUpdateFirstResponder:(BOOL)arg2;
- (void)setExpanded:(BOOL)arg1;
- (void)_printKeyViewLoop;
- (BOOL)shouldDisplay;
- (void)savePendingChanges;
- (void)setNeedsUpdateConstraints:(BOOL)arg1;
- (id)scrollView;
- (id)view;
- (void)setTopSpacing:(double)arg1 topSpacingExpanded:(double)arg2 bottomSpacing:(double)arg3 bottomSpacingExpanded:(double)arg4 betweenSpacing:(double)arg5 betweenSpacingExpanded:(double)arg6;
- (void)setTopSpacing:(double)arg1 bottomSpacing:(double)arg2 betweenSpacing:(double)arg3;
- (BOOL)shouldDrawBottomDivider;
- (BOOL)shouldDrawTopDivider;
- (id)initWithViewController:(id)arg1 isTopLevel:(BOOL)arg2;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


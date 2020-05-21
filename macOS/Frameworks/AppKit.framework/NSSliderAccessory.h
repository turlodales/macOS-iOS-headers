//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSAccessibility.h"
#import "NSAccessibilityElement.h"
#import "NSCoding.h"

@class NSArray, NSImage, NSSlider, NSSliderAccessoryBehavior, NSString, NSURL;

@interface NSSliderAccessory : NSObject <NSAccessibility, NSAccessibilityElement, NSCoding>
{
    id _content;
    id _container;
    NSSliderAccessoryBehavior *_behavior;
    BOOL _enabled;
}

+ (id)accessoryWithImage:(id)arg1;
+ (id)keyPathsForValuesAffectingRepeatsOnLongPress;
@property id <NSSliderAccessoryContainer> container; // @synthesize container=_container;
@property(copy) NSSliderAccessoryBehavior *behavior; // @synthesize behavior=_behavior;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowAlternateUI;
- (BOOL)accessibilityPerformRaise;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformPick;
- (BOOL)accessibilityPerformIncrement;
- (BOOL)accessibilityPerformDelete;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformConfirm;
- (BOOL)accessibilityPerformCancel;
- (void)setAccessibilityOverridesAlwaysTakePrecedence:(BOOL)arg1;
- (BOOL)accessibilityOverridesAlwaysTakePrecedence;
- (void)setAccessibilityContentSiblingBelow:(id)arg1;
- (id)accessibilityContentSiblingBelow;
- (void)setAccessibilityContentSiblingAbove:(id)arg1;
- (id)accessibilityContentSiblingAbove;
- (void)setNextContentSibling:(id)arg1;
- (id)accessibilityNextContentSibling;
- (void)setPreviousContentSibling:(id)arg1;
- (id)accessibilityPreviousContentSibling;
@property(retain) id accessibilityZoomButton; // @dynamic accessibilityZoomButton;
@property(copy) NSArray *accessibilityWindows; // @dynamic accessibilityWindows;
@property __weak id accessibilityWindow; // @dynamic accessibilityWindow;
@property(retain) id accessibilityWarningValue; // @dynamic accessibilityWarningValue;
@property(copy) NSArray *accessibilityVisibleRows; // @dynamic accessibilityVisibleRows;
@property(copy) NSArray *accessibilityVisibleColumns; // @dynamic accessibilityVisibleColumns;
@property(copy) NSArray *accessibilityVisibleChildren; // @dynamic accessibilityVisibleChildren;
@property struct _NSRange accessibilityVisibleCharacterRange; // @dynamic accessibilityVisibleCharacterRange;
@property(copy) NSArray *accessibilityVisibleCells; // @dynamic accessibilityVisibleCells;
@property long long accessibilityVerticalUnits; // @dynamic accessibilityVerticalUnits;
@property(copy) NSString *accessibilityVerticalUnitDescription; // @dynamic accessibilityVerticalUnitDescription;
@property(retain) id accessibilityVerticalScrollBar; // @dynamic accessibilityVerticalScrollBar;
@property(copy) NSString *accessibilityValueDescription; // @dynamic accessibilityValueDescription;
@property(retain) id accessibilityValue; // @dynamic accessibilityValue;
@property long long accessibilityUnits; // @dynamic accessibilityUnits;
@property(copy) NSString *accessibilityUnitDescription; // @dynamic accessibilityUnitDescription;
@property(copy) NSURL *accessibilityURL; // @dynamic accessibilityURL;
@property __weak id accessibilityTopLevelUIElement; // @dynamic accessibilityTopLevelUIElement;
@property(retain) id accessibilityToolbarButton; // @dynamic accessibilityToolbarButton;
@property __weak id accessibilityTitleUIElement; // @dynamic accessibilityTitleUIElement;
@property(copy) NSString *accessibilityTitle; // @dynamic accessibilityTitle;
@property(copy) NSArray *accessibilityTabs; // @dynamic accessibilityTabs;
@property(copy) NSString *accessibilitySubrole; // @dynamic accessibilitySubrole;
@property(copy) NSArray *accessibilitySplitters; // @dynamic accessibilitySplitters;
@property long long accessibilitySortDirection; // @dynamic accessibilitySortDirection;
- (void)setAccessibilityFrameInParentSpace:(struct CGRect)arg1;
- (struct CGRect)accessibilityFrameInParentSpace;
@property struct CGRect accessibilityFrame; // @dynamic accessibilityFrame;
@property(retain) id accessibilityShownMenu; // @dynamic accessibilityShownMenu;
@property(copy) NSArray *accessibilitySharedTextUIElements; // @dynamic accessibilitySharedTextUIElements;
@property(copy) NSArray *accessibilitySharedFocusElements; // @dynamic accessibilitySharedFocusElements;
@property struct _NSRange accessibilitySharedCharacterRange; // @dynamic accessibilitySharedCharacterRange;
@property(copy) NSArray *accessibilityServesAsTitleForUIElements; // @dynamic accessibilityServesAsTitleForUIElements;
@property(copy) NSArray *accessibilitySelectedTextRanges; // @dynamic accessibilitySelectedTextRanges;
@property struct _NSRange accessibilitySelectedTextRange; // @dynamic accessibilitySelectedTextRange;
@property(copy) NSString *accessibilitySelectedText; // @dynamic accessibilitySelectedText;
@property(copy) NSArray *accessibilitySelectedRows; // @dynamic accessibilitySelectedRows;
- (void)setAccessibilityHeaderGroup:(id)arg1;
- (id)accessibilityHeaderGroup;
@property(copy) NSArray *accessibilitySelectedColumns; // @dynamic accessibilitySelectedColumns;
@property(copy) NSArray *accessibilitySelectedChildren; // @dynamic accessibilitySelectedChildren;
@property(copy) NSArray *accessibilitySelectedCells; // @dynamic accessibilitySelectedCells;
@property(getter=isAccessibilitySelected) BOOL accessibilitySelected; // @dynamic accessibilitySelected;
- (void)setAccessibilitySections:(id)arg1;
- (id)accessibilitySections;
@property(retain) id accessibilitySearchMenu; // @dynamic accessibilitySearchMenu;
@property(retain) id accessibilitySearchButton; // @dynamic accessibilitySearchButton;
@property(copy) NSArray *accessibilityRows; // @dynamic accessibilityRows;
@property struct _NSRange accessibilityRowIndexRange; // @dynamic accessibilityRowIndexRange;
@property(copy) NSArray *accessibilityRowHeaderUIElements; // @dynamic accessibilityRowHeaderUIElements;
@property long long accessibilityRowCount; // @dynamic accessibilityRowCount;
@property(copy) NSString *accessibilityRoleDescription; // @dynamic accessibilityRoleDescription;
@property(copy) NSString *accessibilityRole; // @dynamic accessibilityRole;
@property(getter=isAccessibilityRequired) BOOL accessibilityRequired; // @dynamic accessibilityRequired;
@property(retain) id accessibilityProxy; // @dynamic accessibilityProxy;
@property(copy) NSArray *accessibilityPreviousContents; // @dynamic accessibilityPreviousContents;
@property(copy) NSString *accessibilityPlaceholderValue; // @dynamic accessibilityPlaceholderValue;
@property __weak id accessibilityParent; // @dynamic accessibilityParent;
@property(retain) id accessibilityOverflowButton; // @dynamic accessibilityOverflowButton;
@property long long accessibilityOrientation; // @dynamic accessibilityOrientation;
@property(getter=isAccessibilityOrderedByRow) BOOL accessibilityOrderedByRow; // @dynamic accessibilityOrderedByRow;
@property long long accessibilityNumberOfCharacters; // @dynamic accessibilityNumberOfCharacters;
@property(copy) NSArray *accessibilityNextContents; // @dynamic accessibilityNextContents;
@property(getter=isAccessibilityModal) BOOL accessibilityModal; // @dynamic accessibilityModal;
@property(getter=isAccessibilityMinimized) BOOL accessibilityMinimized; // @dynamic accessibilityMinimized;
@property(retain) id accessibilityMinimizeButton; // @dynamic accessibilityMinimizeButton;
@property(retain) id accessibilityMinValue; // @dynamic accessibilityMinValue;
- (void)setAccessibilityMimicNativeView:(BOOL)arg1;
- (BOOL)isAccessibilityMimicNativeView;
@property __weak id accessibilityMenuBar; // @dynamic accessibilityMenuBar;
@property(retain) id accessibilityMaxValue; // @dynamic accessibilityMaxValue;
@property(retain) id accessibilityMarkerValues; // @dynamic accessibilityMarkerValues;
@property(copy) NSArray *accessibilityMarkerUIElements; // @dynamic accessibilityMarkerUIElements;
@property(copy) NSString *accessibilityMarkerTypeDescription; // @dynamic accessibilityMarkerTypeDescription;
@property long long accessibilityRulerMarkerType; // @dynamic accessibilityRulerMarkerType;
@property(retain) id accessibilityMarkerGroupUIElement; // @dynamic accessibilityMarkerGroupUIElement;
@property(retain) id accessibilityMainWindow; // @dynamic accessibilityMainWindow;
@property(getter=isAccessibilityMain) BOOL accessibilityMain; // @dynamic accessibilityMain;
@property(copy) NSArray *accessibilityLinkedUIElements; // @dynamic accessibilityLinkedUIElements;
@property float accessibilityLabelValue; // @dynamic accessibilityLabelValue;
@property(copy) NSArray *accessibilityLabelUIElements; // @dynamic accessibilityLabelUIElements;
@property long long accessibilityInsertionPointLineNumber; // @dynamic accessibilityInsertionPointLineNumber;
@property long long accessibilityIndex; // @dynamic accessibilityIndex;
@property(retain) id accessibilityIncrementButton; // @dynamic accessibilityIncrementButton;
@property(copy) NSString *accessibilityIdentifier; // @dynamic accessibilityIdentifier;
@property long long accessibilityHorizontalUnits; // @dynamic accessibilityHorizontalUnits;
@property(copy) NSString *accessibilityHorizontalUnitDescription; // @dynamic accessibilityHorizontalUnitDescription;
@property(retain) id accessibilityHorizontalScrollBar; // @dynamic accessibilityHorizontalScrollBar;
@property(getter=isAccessibilityHidden) BOOL accessibilityHidden; // @dynamic accessibilityHidden;
@property(copy) NSString *accessibilityHelp; // @dynamic accessibilityHelp;
@property(retain) id accessibilityHeader; // @dynamic accessibilityHeader;
@property(copy) NSArray *accessibilityHandles; // @dynamic accessibilityHandles;
@property(retain) id accessibilityGrowArea; // @dynamic accessibilityGrowArea;
- (void)setAccessibilityFunctionRowTopLevelElements:(id)arg1;
- (id)accessibilityFunctionRowTopLevelElements;
@property(retain) id accessibilityFullScreenButton; // @dynamic accessibilityFullScreenButton;
@property(getter=isAccessibilityFrontmost) BOOL accessibilityFrontmost; // @dynamic accessibilityFrontmost;
@property(retain) id accessibilityFocusedWindow; // @dynamic accessibilityFocusedWindow;
@property(retain) id accessibilityApplicationFocusedUIElement; // @dynamic accessibilityApplicationFocusedUIElement;
@property(getter=isAccessibilityFocused) BOOL accessibilityFocused; // @dynamic accessibilityFocused;
@property(copy) NSString *accessibilityFilename; // @dynamic accessibilityFilename;
@property __weak id accessibilityExtrasMenuBar; // @dynamic accessibilityExtrasMenuBar;
@property(getter=isAccessibilityExpanded) BOOL accessibilityExpanded; // @dynamic accessibilityExpanded;
- (void)setAccessibilityEnhancedUserInterface:(BOOL)arg1;
- (BOOL)isAccessibilityEnhancedUserInterface;
@property(getter=isAccessibilityEnabled) BOOL accessibilityEnabled; // @dynamic accessibilityEnabled;
@property(getter=isAccessibilityEdited) BOOL accessibilityEdited; // @dynamic accessibilityEdited;
@property(copy) NSString *accessibilityDocument; // @dynamic accessibilityDocument;
@property long long accessibilityDisclosureLevel; // @dynamic accessibilityDisclosureLevel;
@property(getter=isAccessibilityDisclosed) BOOL accessibilityDisclosed; // @dynamic accessibilityDisclosed;
@property(retain) id accessibilityDisclosedRows; // @dynamic accessibilityDisclosedRows;
@property __weak id accessibilityDisclosedByRow; // @dynamic accessibilityDisclosedByRow;
@property(copy) NSString *accessibilityLabel; // @dynamic accessibilityLabel;
- (id)_accessibilityLabel;
@property(retain) id accessibilityDefaultButton; // @dynamic accessibilityDefaultButton;
@property(retain) id accessibilityDecrementButton; // @dynamic accessibilityDecrementButton;
@property(copy) NSArray *accessibilityCustomRotors; // @dynamic accessibilityCustomRotors;
- (void)setAccessibilityCustomChoosers:(id)arg1;
- (id)accessibilityCustomChoosers;
@property(copy) NSArray *accessibilityCustomActions; // @dynamic accessibilityCustomActions;
@property(retain) id accessibilityCriticalValue; // @dynamic accessibilityCriticalValue;
@property(copy) NSArray *accessibilityContents; // @dynamic accessibilityContents;
@property(getter=isAccessibilityProtectedContent) BOOL accessibilityProtectedContent; // @dynamic accessibilityProtectedContent;
@property(copy) NSArray *accessibilityColumns; // @dynamic accessibilityColumns;
@property(copy) NSArray *accessibilityColumnTitles; // @dynamic accessibilityColumnTitles;
@property struct _NSRange accessibilityColumnIndexRange; // @dynamic accessibilityColumnIndexRange;
@property(copy) NSArray *accessibilityColumnHeaderUIElements; // @dynamic accessibilityColumnHeaderUIElements;
@property long long accessibilityColumnCount; // @dynamic accessibilityColumnCount;
@property(retain) id accessibilityCloseButton; // @dynamic accessibilityCloseButton;
@property(retain) id accessibilityClearButton; // @dynamic accessibilityClearButton;
@property(copy) NSArray *accessibilityChildrenInNavigationOrder; // @dynamic accessibilityChildrenInNavigationOrder;
@property(copy) NSArray *accessibilityChildren; // @dynamic accessibilityChildren;
@property(retain) id accessibilityCancelButton; // @dynamic accessibilityCancelButton;
- (void)setAccessibilityAuditIssues:(id)arg1;
- (id)accessibilityAuditIssues;
@property(getter=isAccessibilityAlternateUIVisible) BOOL accessibilityAlternateUIVisible; // @dynamic accessibilityAlternateUIVisible;
@property(copy) NSArray *accessibilityAllowedValues; // @dynamic accessibilityAllowedValues;
@property struct CGPoint accessibilityActivationPoint; // @dynamic accessibilityActivationPoint;
@property(getter=isAccessibilityElement) BOOL accessibilityElement; // @dynamic accessibilityElement;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (id)accessibilityRTFForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityStyleRangeForIndex:(long long)arg1;
- (struct CGSize)accessibilityScreenSizeForLayoutSize:(struct CGSize)arg1;
- (struct CGPoint)accessibilityScreenPointForLayoutPoint:(struct CGPoint)arg1;
- (id)accessibilityResultsForSearchPredicate:(id)arg1;
- (struct _NSRange)accessibilityRangeForPosition:(struct CGPoint)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (struct _NSRange)accessibilityRangeForIndex:(long long)arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (struct CGSize)accessibilityLayoutSizeForScreenSize:(struct CGSize)arg1;
- (struct CGPoint)accessibilityLayoutPointForScreenPoint:(struct CGPoint)arg1;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (id)accessibilityCellForColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
@property NSSlider *enclosingSlider;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1;
- (id)init;
@property(readonly) BOOL repeatsOnLongPress;
@property(readonly, copy) NSImage *_image;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


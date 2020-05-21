//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import "NSAccessibilitySlider.h"
#import "NSSliderAccessoryContainer.h"
#import "NSSliderCellControlView.h"
#import "NSSliderTickMarksDelegate.h"

@class NSColor, NSDictionary, NSSliderAccessory, NSString;

@interface NSSlider : NSControl <NSSliderAccessoryContainer, NSSliderCellControlView, NSSliderTickMarksDelegate, NSAccessibilitySlider>
{
    NSDictionary *_tickMarkLayoutPoints;
}

+ (id)defaultAnimationForKey:(id)arg1;
+ (void)initialize;
+ (id)verticalSliderWithMinValue:(double)arg1 maxValue:(double)arg2 initialValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)horizontalSliderWithMinValue:(double)arg1 maxValue:(double)arg2 initialValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)verticalSliderWithValue:(double)arg1 minValue:(double)arg2 maxValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)horizontalSliderWithValue:(double)arg1 minValue:(double)arg2 maxValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)verticalSliderWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)horizontalSliderWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)sliderWithValue:(double)arg1 minValue:(double)arg2 maxValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)sliderWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)_sliderWithMinValue:(double)arg1 maxValue:(double)arg2 initialValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)keyPathsForValuesAffecting_hasStepBehaviorContext;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)_preferredAppearance;
- (void)_layoutComponentSubviewsIfNecessary;
- (void)_clearComponentSubviewsAndRemoveFromSuperview:(BOOL)arg1;
- (void)_clearComponentSubviews;
- (void)_createComponentSubviews;
- (void)_updateComponentSubviewRenderingState;
- (id)_circularKnobView;
- (void)_setCircularKnobView:(id)arg1;
- (id)_dialView;
- (void)_setDialView:(id)arg1;
- (id)_knobView;
- (void)_setKnobView:(id)arg1;
- (id)_tickMarksView;
- (void)_setTickMarksView:(id)arg1;
- (id)_trackView;
- (void)_setTrackView:(id)arg1;
- (unsigned long long)_subviewRenderingMode;
- (void)_setSubviewRenderingMode:(unsigned long long)arg1;
- (void)_updateTickMarkConstraintPositionsIfNeeded;
- (id)declaredLayoutConstraints;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (void)layout;
- (void)_setTickMarkLayoutPoints:(id)arg1;
- (id)_tickMarkLayoutPoints;
- (BOOL)_hasCustomTickMarkPositioning;
- (void)setTickMarkIsProminent:(BOOL)arg1 atIndex:(long long)arg2;
- (BOOL)tickMarkIsProminentAtIndex:(long long)arg1;
- (double)closestTickMarkValueToValue:(double)arg1;
- (long long)indexOfTickMarkAtPoint:(struct CGPoint)arg1;
- (struct CGRect)rectOfTickMarkAtIndex:(long long)arg1;
- (double)tickMarkValueAtIndex:(long long)arg1;
- (BOOL)allowsTickMarkValuesOnly;
- (void)setAllowsTickMarkValuesOnly:(BOOL)arg1;
- (unsigned long long)tickMarkPosition;
- (void)setTickMarkPosition:(unsigned long long)arg1;
- (long long)numberOfTickMarks;
- (void)setNumberOfTickMarks:(long long)arg1;
- (BOOL)_autoCancelIfTouchTooLong:(id *)arg1;
@property(copy) NSColor *trackFillColor;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveDown:(id)arg1;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)_moveInDirection:(unsigned long long)arg1;
- (void)setEnabled:(BOOL)arg1;
@property(getter=isVertical) BOOL vertical;
- (id)image;
- (void)setImage:(id)arg1;
@property(readonly) double knobThickness;
- (void)setKnobThickness:(double)arg1;
- (id)setTitleNoCopy:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)titleCell;
- (void)setTitleCell:(id)arg1;
@property double altIncrementValue;
- (void)setMaxValueImage:(id)arg1;
- (id)maxValueImage;
- (void)setMinValueImage:(id)arg1;
- (id)minValueImage;
- (void)setMaximumValueAccessory:(id)arg1;
@property(readonly) NSSliderAccessory *maximumValueAccessory;
- (void)setMinimumValueAccessory:(id)arg1;
@property(readonly) NSSliderAccessory *minimumValueAccessory;
@property double maxValue;
@property double minValue;
@property unsigned long long sliderType;
- (CDStruct_6b6ad735)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (double)baselineOffsetFromBottom;
- (struct NSEdgeInsets)alignmentRectInsets;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (id)designatedFocusRingView;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)setCell:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sliderCellDidInvalidateComponentRects:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)sliderCellDidChangeSliderType:(id)arg1;
- (void)sliderCellDidChangeControlSize:(id)arg1;
- (void)sliderCellDidChangeTickMarkPosition:(id)arg1;
- (void)sliderCellDidChangeNumberOfTickMarks:(id)arg1 oldNumberOfTickMarks:(long long)arg2;
- (void)sliderCellDidChangeVertical:(id)arg1;
- (void)_removeAnchorsInRange:(struct _NSRange)arg1;
- (id)layoutPointForTickMarkAtIndex:(long long)arg1;
- (void)_incrementValue:(BOOL)arg1;
@property(readonly) BOOL _hasStepBehaviorContext;
- (void)sendAction;
@property double incrementValue;
@property double value;
@property double maximumValue;
@property double minimumValue;
- (id)ns_widgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

__attribute__((visibility("hidden")))
@interface NSThemeAutosaveButtonCell : NSButtonCell
{
    BOOL _mouseInside;
    float _defaultLineHeight;
}

- (long long)_interiorContentStateInView:(id)arg1;
- (long long)_interiorContentPresentationStateInView:(id)arg1;
- (id)_appearanceContentStyleInView:(id)arg1;
- (BOOL)_hasRolloverContentArt;
- (long long)interiorBackgroundStyle;
- (id)_textAttributes;
- (struct CGRect)_imageRectWithRect:(struct CGRect *)arg1 allowImageScaling:(BOOL)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_minCellSizeWithCompressionOptions:(id)arg1;
- (void)performClick:(id)arg1;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)setFont:(id)arg1;
- (BOOL)_subclassOverridesDrawImage;
- (void)_updateMouseInside:(BOOL)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (id)accessibilityActionNames;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end


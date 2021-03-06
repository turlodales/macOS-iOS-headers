//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@class NSArray, NSImage, NSString;

@interface NSToolbarItemGroup : NSToolbarItem
{
    id _groupItems;
    struct {
        unsigned int dirtiedLayout:1;
        unsigned int reserved:31;
    } _giFlags;
    long long _controlRepresentation;
    long long _selectionMode;
    NSString *_title;
    NSImage *_image;
    id _target;
    SEL _action;
}

+ (id)groupWithItemIdentifier:(id)arg1 images:(id)arg2 selectionMode:(long long)arg3 labels:(id)arg4 target:(id)arg5 action:(SEL)arg6;
+ (id)groupWithItemIdentifier:(id)arg1 titles:(id)arg2 selectionMode:(long long)arg3 labels:(id)arg4 target:(id)arg5 action:(SEL)arg6;
- (void).cxx_destruct;
- (id)_menuFormRepresentationForOverflowMenu;
- (id)_menuFormRepresentationForOverflowMenuOfSubitem:(id)arg1;
- (void)_standardCommonSubitemMenuFormRepresentationClicked:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menuFormRepresentation;
- (id)_selectableToolbarViews;
- (id)_initialViewToSelectFromDirection:(long long)arg1;
- (BOOL)_isEnabledAndHasEnabledSubitem;
- (id)_buttonAtIndex:(unsigned long long)arg1;
- (void)invalidateLayout;
- (void)_itemLayoutChanged;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
- (void)_setItemViewer:(id)arg1;
- (void)_collectItemRectsForViews:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3 controlBounds:(struct CGRect)arg4;
- (void)_collectItemRectsForViews:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3;
- (void)_collectItemRectsForLabels:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3 controlBounds:(struct CGRect)arg4;
- (void)_collectItemRectsForLabels:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3;
- (BOOL)_viewIsEnabledAtIndex:(long long)arg1;
- (id)_itemAtViewIndex:(long long)arg1;
- (id)_itemAtLabelIndex:(long long)arg1;
- (id)_applicableLabelsArrayForDisplayMode:(unsigned long long)arg1 isInPalette:(BOOL)arg2;
- (BOOL)_applicableLabelIsEnabledAtIndex:(long long)arg1 forDisplayMode:(unsigned long long)arg2 isInPalette:(BOOL)arg3;
- (id)_viewsArray;
- (struct CGRect)rectForItem:(id)arg1 inBounds:(struct CGRect)arg2 controlBounds:(struct CGRect)arg3;
- (struct CGRect)rectForItem:(id)arg1 inBounds:(struct CGRect)arg2;
- (struct CGRect)_labelOnlyModeRectForItemAtIndex:(long long)arg1 inBounds:(struct CGRect)arg2;
- (struct CGRect)_segmentedControlRectForItemAtIndex:(long long)arg1 inBounds:(struct CGRect)arg2 controlBounds:(struct CGRect)arg3;
- (struct CGRect)_segmentedControlRectForItemAtIndex:(long long)arg1 inBounds:(struct CGRect)arg2;
- (struct CGRect)_evenlySpacedRectForItemAtIndex:(long long)arg1 inBounds:(struct CGRect)arg2;
- (BOOL)isSelectedAtIndex:(long long)arg1;
- (void)setSelected:(BOOL)arg1 atIndex:(long long)arg2;
@property long long selectedIndex;
@property long long selectionMode;
@property long long controlRepresentation;
- (void)_performActionForPicker:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_forceSetView:(id)arg1;
- (void)_updateViewRepresentation;
- (BOOL)_subitemsContainCustomViews;
- (void)setBordered:(BOOL)arg1;
@property(copy) NSArray *subitems;
- (void)_itemViewMinSize:(struct CGSize *)arg1 maxSize:(struct CGSize *)arg2 stretchesContent:(BOOL)arg3;
- (BOOL)_mouseDownInSurroundingRegionShouldMoveWindow;
- (void)dealloc;
- (id)view;
- (void)validate;
- (id)_defaultPickerViewIfUsed;
- (id)_defaultGroupViewIfUsed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1;
- (BOOL)_isCustomItemType;
- (double)_interlabelPadding;
- (double)_interviewPadding;
- (id)_allocDefaultView;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class NSImage, NSImageView, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSMutableString, NSObject<OS_dispatch_source>, NSTimer, NSView;

@interface LUIStripView : NSControl
{
    id _delegate;
    id _dataSource;
    id _target;
    SEL _action;
    SEL _scrollAction;
    BOOL _needsReload;
    BOOL _loading;
    BOOL _needsReloadWhenUnfocused;
    long long _numItems;
    long long _selectedItem;
    struct CGSize _itemSize;
    double _spaceBetweenItems;
    NSMutableDictionary *_nibForIdentifier;
    NSMutableDictionary *_reusableItems;
    NSMutableDictionary *_itemDict;
    NSImageView *_highlightImageView;
    NSImage *_selectionImage;
    BOOL _focusing;
    BOOL _focused;
    BOOL _highlighted;
    double _preFocusOriginX;
    NSLayoutConstraint *_firstConstraint;
    NSLayoutConstraint *_highlightConstraintX;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSView *_leadingBufferView;
    NSLayoutConstraint *_leadingBufferViewWidthConstraint;
    NSLayoutConstraint *_leadingBufferViewHeightConstraint;
    NSMutableArray *_itemConstraints;
    NSMutableString *_searchString;
    NSTimer *_searchStringTimeoutTimer;
    NSTimer *_scrollTimer;
    BOOL _touched;
    NSObject<OS_dispatch_source> *_timer;
    unsigned char _stepCounter;
}

+ (BOOL)accessibilityIsSingleCelled;
@property double spaceBetweenItems; // @synthesize spaceBetweenItems=_spaceBetweenItems;
@property struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property SEL scrollAction; // @synthesize scrollAction=_scrollAction;
@property SEL action; // @synthesize action=_action;
@property id target; // @synthesize target=_target;
@property id <LUIStripViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property id <LUIStripViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityChildren;
- (BOOL)accessibilityIsIgnored;
- (void)updateFocus;
- (void)updateConstraints;
- (void)loadItemsForView;
- (void)_loadItemsAroundPoint:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;
- (void)_scrollUpdate:(id)arg1;
- (void)reloadData;
- (void)refresh;
- (void)selectItemAtIndex:(long long)arg1 highlight:(BOOL)arg2;
- (void)selectItemAtIndex:(long long)arg1;
- (long long)selectedItem;
- (id)itemAtIndex:(long long)arg1;
- (BOOL)isFocusedOnItem;
- (BOOL)isFocusing;
- (void)focusOnItem:(long long)arg1;
- (void)endFocusOnItem;
- (void)animatedScrollToX:(double)arg1;
- (BOOL)moreItemsToRight;
- (BOOL)moreItemsToLeft;
- (void)setNibName:(id)arg1 forIdentifier:(id)arg2;
- (id)makeItemWithIdentifier:(id)arg1 owner:(id)arg2;
- (void)_addSubview:(id)arg1 atIndex:(long long)arg2;
- (void)_updateBufferViewWidthConstant;
- (double)_calculateBufferViewWidthForNumItems:(long long)arg1 forNumVisibleItems:(long long)arg2 ofSize:(struct CGSize)arg3 andSpacing:(double)arg4 inVisibleWidth:(double)arg5;
- (id)_leadingBufferView;
- (id)_unarchiveViewWithIdentifier:(id)arg1 owner:(id)arg2;
- (id)scrollView;
- (id)_loadableItemsAroundPoint:(struct CGPoint)arg1;
- (id)_calculateIndexSetOfItemsInLoadableRect:(struct CGRect)arg1 andContentWidth:(double)arg2 withNumItems:(long long)arg3 ofSize:(struct CGSize)arg4 andSpacing:(double)arg5 layoutDirection:(long long)arg6;
- (struct CGRect)_calculateLoadableRectForContentWidth:(double)arg1 andVisibleWidth:(double)arg2 aroundPoint:(struct CGPoint)arg3;
- (long long)_numVisibleItems;
- (long long)_calculateNumItemsInRect:(struct CGRect)arg1 ofSize:(struct CGSize)arg2 andSpacing:(double)arg3;
- (struct CGRect)visibleRect;
- (void)_updateStripView;
- (double)_calculateWidthForNumItems:(long long)arg1 ofSize:(struct CGSize)arg2 andSpacing:(double)arg3 inVisibleWidth:(double)arg4;
- (void)_updateItemHeight;
- (void)_updateHighlight;
- (void)_searchStringTimeout:(id)arg1;
- (id)_reusableItems;
- (void)_keyboardNavigateToIndex:(long long)arg1;
- (void)_clearItems;
- (void)_addReusableItem:(id)arg1;

@end


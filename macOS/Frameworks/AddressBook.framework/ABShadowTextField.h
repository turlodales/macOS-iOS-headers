//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class ABPhoneFormatter, NSArray, NSColor;

@interface ABShadowTextField : NSTextField
{
    ABPhoneFormatter *_phoneFormatter;
    NSArray *_highlightStrings;
    NSColor *_deselctedPlaceholderTextColor;
    BOOL _allowsMultipleLines;
    BOOL _drawsShadow;
    BOOL _isDraggingOperationActive;
    BOOL _shouldSelectAllOnFirstResponder;
    BOOL _needsCardViewBorderDrawing;
}

+ (Class)cellClass;
- (void).cxx_destruct;
@property(nonatomic) BOOL needsCardViewBorderDrawing; // @synthesize needsCardViewBorderDrawing=_needsCardViewBorderDrawing;
@property(retain, nonatomic) NSArray *highlightStrings; // @synthesize highlightStrings=_highlightStrings;
@property(nonatomic) BOOL selectAllOnFirstResponder; // @synthesize selectAllOnFirstResponder=_shouldSelectAllOnFirstResponder;
@property(nonatomic) BOOL drawsShadow; // @synthesize drawsShadow=_drawsShadow;
@property(nonatomic) BOOL allowsMultipleLines; // @synthesize allowsMultipleLines=_allowsMultipleLines;
@property(retain, nonatomic) ABPhoneFormatter *phoneFormatter; // @synthesize phoneFormatter=_phoneFormatter;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) BOOL displaysAlternatePlaceholder;
- (void)setObjectValue:(id)arg1;
- (void)sendDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)removeBackgroundSelectionHighlightFromPlaceholderText;
- (void)applyBackgroundSelectionHighlightToPlaceholderText;
- (BOOL)becomeFirstResponder;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)revealCellToAccessibility;
- (void)hideCellFromAccessibility;
- (BOOL)accessibilityIsIgnored;

@end


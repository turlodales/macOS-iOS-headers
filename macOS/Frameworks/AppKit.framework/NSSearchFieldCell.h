//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

#import "CALayerDelegate.h"

@class NSArray, NSButtonCell, NSImage, NSMenu, NSMutableArray, NSString, NSTimer;

@interface NSSearchFieldCell : NSTextFieldCell <CALayerDelegate>
{
    struct __sfFlags {
        unsigned int sendsWholeSearchString:1;
        unsigned int maximumRecents:8;
        unsigned int cancelVisible:1;
        unsigned int reserved2:2;
        unsigned int disableText:1;
        unsigned int menuTracking:1;
        unsigned int deferredUpdate:1;
        unsigned int sendsImmediately:1;
        unsigned int centeredLook:1;
        unsigned int renderingCentered:1;
        unsigned int becomeTransition:1;
        unsigned int resignTransition:1;
        unsigned int subclassOverridesRectForSearchButtonWhenCentered:2;
        unsigned int subclassOverridesRectForSearchTextWhenCentered:2;
        unsigned int subclassOverridesRectForCancelButtonWhenCentered:2;
        unsigned int resumeEditingOnCancel:1;
        unsigned int reserved:5;
    } _sfFlags;
    NSButtonCell *_searchButtonCell;
    NSButtonCell *_cancelButtonCell;
    NSMenu *_searchMenuTemplate;
    NSString *_recentsAutosaveName;
    NSMutableArray *_recentSearches;
    NSMenu *_searchMenu;
    NSTimer *_partialStringTimer;
    NSImage *_activeSearchImage;
    NSImage *_inactiveSearchImage;
    NSImage *_activeCancelImage;
    NSImage *_inactiveCancelImage;
}

+ (BOOL)automaticTextCompletionEnabled;
+ (void)initialize;
+ (double)_keyboardDelayForPartialSearchString:(id)arg1;
- (void)_controlViewDidChangeEffectiveAppearance:(id)arg1;
- (void)_windowChangedKeyStateInView:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (long long)_interiorContentStateInView:(id)arg1;
- (long long)interiorBackgroundStyle;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)updateLayerWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)layoutLayerWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)wantsUpdateLayerInView:(id)arg1;
- (struct CGRect)_textLayerDrawingRectForCellFrame:(struct CGRect)arg1;
- (void)_setCancelButtonVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_transitionInRect:(struct CGRect)arg1 ofView:(id)arg2 becomeFirstResponder:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_resetResignTransition;
- (struct CGRect)_searchMenuButtonLayerFrameForBounds:(struct CGRect)arg1 focus:(BOOL)arg2;
- (void)_invalidateButtonLayers;
- (id)_searchMenuButtonLayer;
- (id)_cancelButtonLayer;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property BOOL sendsSearchStringImmediately;
@property(copy) NSString *recentsAutosaveName;
@property(copy) NSArray *recentSearches;
@property long long maximumRecents;
@property BOOL sendsWholeSearchString;
- (void)endEditing:(id)arg1;
- (BOOL)_sendActionFrom:(id)arg1;
- (void)_tearDownPartialStringTimer;
- (void)textDidChange:(id)arg1;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (id)_selectOrEdit:(const struct CGRect *)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7;
- (BOOL)_shouldSetHighlightToFlag:(BOOL)arg1;
- (void)_getTextColor:(id *)arg1 backgroundColor:(id *)arg2;
- (void)setTextColor:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setResumeEditingOnCancel:(BOOL)arg1;
- (BOOL)resumeEditingOnCancel;
- (void)setCenteredLook:(BOOL)arg1;
- (BOOL)isCenteredLook;
- (Class)searchMenuFactoryClass;
@property(retain) NSMenu *searchMenuTemplate;
- (void)setObjectValue:(id)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)cancelButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)searchButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)searchTextRectForBounds:(struct CGRect)arg1;
- (struct CGRect)searchTextRectForBounds:(struct CGRect)arg1 focused:(BOOL)arg2;
- (struct CGRect)searchButtonRectForBounds:(struct CGRect)arg1 focused:(BOOL)arg2;
- (struct CGRect)_centeredSearchButtonAndTextRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_cancelButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_searchTextRectForBounds:(struct CGRect)arg1 focused:(BOOL)arg2;
- (struct CGRect)_searchButtonRectForBounds:(struct CGRect)arg1 focused:(BOOL)arg2;
- (double)_cancelButtonInsetForBounds:(struct CGRect)arg1 userInterfaceLayoutDirection:(long long)arg2;
- (double)_searchButtonInsetForBounds:(struct CGRect)arg1 userInterfaceLayoutDirection:(long long)arg2 menu:(BOOL)arg3;
- (struct CGSize)_cancelButtonSizeForBounds:(struct CGRect)arg1 userInterfaceLayoutDirection:(long long)arg2;
- (struct CGSize)_searchButtonSizeForBounds:(struct CGRect)arg1 userInterfaceLayoutDirection:(long long)arg2;
- (BOOL)_isEmpty;
- (BOOL)_usesCenteredLook;
- (id)_defaultPlaceholderString;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)resetCancelButtonCell;
- (void)resetSearchButtonCell;
@property(retain) NSButtonCell *cancelButtonCell;
@property(retain) NSButtonCell *searchButtonCell;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initTextCell:(id)arg1;
- (id)init;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)_loadRecentSearchList;
- (void)_autosaveRecentSearchList;
- (void)_textDidEndEditing:(id)arg1;
- (struct CGPoint)_menuLocationInFrame:(struct CGRect)arg1;
- (void)_trackButton:(id)arg1 forEvent:(id)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4;
- (BOOL)_trimRecentSearchList;
- (void)_addStringToRecentSearches:(id)arg1;
- (void)_adjustCancelButtonCellImages:(BOOL)arg1:(BOOL)arg2;
- (void)_adjustSearchButtonCellImages:(BOOL)arg1:(BOOL)arg2;
- (void)_updateAutosavedRecents:(id)arg1;
- (void)_deregisterForAutosaveNotification;
- (void)_registerForAutosaveNotification;
- (void)_updateSearchMenu;
- (id)_searchMenuTemplate;
- (void)_sendPartialString;
- (void)_searchFieldClearRecents:(id)arg1;
- (void)_searchFieldDoRecent:(id)arg1;
- (void)_searchFieldCancel:(id)arg1;
- (BOOL)_controlView:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)_restartEditingWithTextView:(id)arg1;
- (void)_searchFieldSearch:(id)arg1;
- (long long)_realMaximumRecents;
- (void)_setProCancelVisible:(BOOL)arg1;
- (BOOL)_proCancelVisible;
- (BOOL)_searchMenuTracking;
- (id)_searchMenuForProxy;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct CGRect)_accessibilitySearchFieldCellBounds;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (BOOL)accessibilityIsClearButtonAttributeSettable;
- (id)accessibilityClearButtonAttribute;
- (BOOL)accessibilityIsSearchButtonAttributeSettable;
- (id)accessibilitySearchButtonAttribute;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityAttributeNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


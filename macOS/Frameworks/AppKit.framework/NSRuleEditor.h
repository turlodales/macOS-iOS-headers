//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSDictionary, NSIndexSet, NSMutableArray, NSPredicate, NSString, NSView, NSViewAnimation;

@interface NSRuleEditor : NSControl
{
    id _ruleDataSource;
    id _ruleDelegate;
    NSIndexSet *_draggingRows;
    NSMutableArray *_rowCache;
    NSView *_slicesHolder;
    NSMutableArray *_slices;
    double _sliceHeight;
    double _alignmentGridWidth;
    long long _subviewIndexOfDropLine;
    id _dropLineView;
    NSViewAnimation *_currentAnimation;
    NSString *_stringsFileName;
    id _standardLocalizer;
    id _headerLocalizer;
    NSPredicate *_predicate;
    long long _nestingMode;
    struct {
        unsigned int elideUpdating:1;
        unsigned int lastAlternateKeyValue:1;
        unsigned int extendedDelegateCalls:1;
        unsigned int editable:1;
        unsigned int settingSize:1;
        unsigned int suppressKeyDown:1;
        unsigned int dropWasSuccessful:1;
        unsigned int delegateWantsValidation:1;
        unsigned int disallowEmpty:1;
        unsigned int lastDrewWithFRAppearance:1;
        unsigned int allowsEmptyCompoundRows:1;
        unsigned int dropChangedRowCount:1;
        unsigned int reserved:20;
    } _ruleEditorFlags;
    NSString *_typeKeyPath;
    NSString *_itemsKeyPath;
    NSString *_valuesKeyPath;
    NSString *_subrowsArrayKeyPath;
    Class _rowClass;
    id _boundArrayOwner;
    NSString *_boundArrayKeyPath;
    long long _lastRow;
}

+ (BOOL)accessibilityIsSingleCelled;
- (void).cxx_destruct;
- (id)_generateFormattingDictionaryStringsFile;
- (void)_recursiveGenerateFormattingDictionaryPlistForItem:(id)arg1 rowType:(unsigned long long)arg2 intoArray:(id)arg3 withPriorValues:(id)arg4 hasSiblings:(BOOL)arg5;
@property(copy) NSString *displayValuesKeyPath;
@property(copy) NSString *criteriaKeyPath;
@property(copy) NSString *subrowsKeyPath;
@property(copy) NSString *rowTypeKeyPath;
@property Class rowClass;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)_updateDragging:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (unsigned long long)_dragOperationFromInfo:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)_performDragForSlice:(id)arg1 withEvent:(id)arg2;
- (id)_draggingTypes;
- (BOOL)_plusMinusButtonsAcceptFirstMouse;
- (void)_deselectAll;
- (void)_rightMouseDownOnSlice:(id)arg1 withEvent:(id)arg2;
- (void)_mouseDownOnSlice:(id)arg1 withEvent:(id)arg2;
- (void)_performClickOnSlice:(id)arg1 withEvent:(id)arg2;
- (id)_selectedSlices;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
@property(readonly, copy) NSIndexSet *selectedRowIndexes;
- (id)_selectedSliceIndices;
- (long long)_lastSelectedSliceIndex;
- (id)_dragImageForIndices:(id)arg1;
- (id)_childlessParentsIfSlicesWereDeletedAtIndexes:(id)arg1;
- (id)_includeSubslicesForSlicesAtIndexes:(id)arg1;
- (BOOL)_dragShouldBeginFromMouseDown:(id)arg1;
- (id)_toolTipForDeleteRowButton;
- (id)_toolTipForAddCompoundRowButton;
- (id)_toolTipForAddSimpleRowButton;
- (BOOL)_validateItem:(id)arg1 value:(id)arg2 inRow:(long long)arg3;
- (BOOL)_shouldHideSubtractButtonForSlice:(id)arg1;
- (BOOL)_shouldHideAddButtonForSlice:(id)arg1;
- (BOOL)isFlipped;
- (void)_deleteSlice:(id)arg1;
- (void)_addOptionFromSlice:(id)arg1 ofRowType:(unsigned long long)arg2;
- (id)_getItemsAndValuesToAddForRow:(long long)arg1 ofType:(unsigned long long)arg2;
- (BOOL)_nextUnusedItems:(id *)arg1 andValues:(id *)arg2 forRow:(long long)arg3 forRowType:(unsigned long long)arg4;
- (void)_changedItem:(id)arg1 toItem:(id)arg2 inRow:(long long)arg3;
- (long long)parentRowForRow:(long long)arg1;
- (unsigned long long)rowTypeForRow:(long long)arg1;
- (long long)rowForDisplayValue:(id)arg1;
- (id)displayValuesForRow:(long long)arg1;
- (id)criteriaForRow:(long long)arg1;
- (id)subrowIndexesForRow:(long long)arg1;
@property(readonly) long long numberOfRows;
- (id)_slices;
- (long long)_lastRow;
- (void)_setPredicate:(id)arg1;
@property(readonly) NSPredicate *predicate;
@property __weak id <NSRuleEditorDelegate> delegate;
- (double)_alignmentGridWidth;
- (void)_setAlignmentGridWidth:(double)arg1;
- (unsigned long long)_applicableNestingMode;
@property unsigned long long nestingMode;
- (id)_globalIndexesForSubrowIndexes:(id)arg1 ofParentObject:(id)arg2;
- (long long)_countOfRowsStartingAtObject:(id)arg1;
- (long long)_rowIndexForRowObject:(id)arg1;
- (BOOL)_findRowObject:(id)arg1 startingAtObject:(id)arg2 withIndex:(long long *)arg3;
- (id)_subrowObjectsOfObject:(id)arg1;
- (id)_insertNewRowAtIndex:(long long)arg1 ofType:(unsigned long long)arg2 withParentRow:(long long)arg3;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)unbind:(id)arg1;
- (void)_setBoundDataSource:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_rootRowsArray;
- (void)_fullCacheUpdate;
- (void)_fullCacheUpdateRecursive:(id)arg1 intoRow:(long long *)arg2 withIndentation:(long long)arg3;
- (id)_searchCacheForRowObject:(id)arg1;
- (id)_rowCacheForIndex:(long long)arg1;
- (void)removeRowsAtIndexes:(id)arg1 includeSubrows:(BOOL)arg2;
- (void)removeRowAtIndex:(long long)arg1;
- (void)setCriteria:(id)arg1 andDisplayValues:(id)arg2 forRowAtIndex:(long long)arg3;
- (void)insertRowAtIndex:(long long)arg1 withType:(unsigned long long)arg2 asSubrowOfRow:(long long)arg3 animate:(BOOL)arg4;
- (void)addRow:(id)arg1;
- (id)_uniqueizeIndexSet:(id)arg1;
- (void)_removeSubrowsForRow:(long long)arg1 fromSet:(id)arg2;
- (void)reloadCriteria;
- (void)reloadPredicate;
- (void)_setAllowsEmptyCompoundRows:(BOOL)arg1;
- (BOOL)_allowsEmptyCompoundRows;
@property BOOL canRemoveAllRows;
@property(getter=isEditable) BOOL editable;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (void)_sendRuleAction;
- (void)_updatePredicate;
- (id)predicateForRow:(long long)arg1;
- (id)_localizerForSlice:(id)arg1;
@property(copy) NSDictionary *formattingDictionary;
- (void)_setStandardLocalizer:(id)arg1;
- (void)_setHeaderLocalizer:(id)arg1;
@property(copy) NSString *formattingStringsFilename;
- (BOOL)_privateDelegateMethodsEnabled;
- (void)_setPrivateDelegateMethodsEnabled:(BOOL)arg1;
@property double rowHeight;
- (id)_extendItem:(id)arg1 withRow:(long long)arg2;
- (id)_layoutOrdersForChoiceRootedAtItem:(id)arg1 inRow:(long long)arg2;
- (long long)_layoutOrderForItem:(id)arg1 inRow:(long long)arg2;
- (void)_getAllAvailableItems:(id *)arg1 values:(id *)arg2 asChildrenOfItem:(id)arg3 inRow:(long long)arg4;
- (void)_loadInitialRows;
- (void)_changedRowArray:(id)arg1 withOldRowArray:(id)arg2 forParent:(id)arg3;
- (void)_startObservingRowObjectsRecursively:(id)arg1;
- (void)_stopObservingRowObjectsRecursively:(id)arg1;
- (void)_reconfigureSubviewsAnimate:(BOOL)arg1;
- (void)_updateRowTypesToAdd;
- (void)_updateSliceRows;
- (void)_stopAnimationWithoutChangingFrames;
- (void)_updateSliceIndentations;
- (void)_updateSliceIndentationAtIndex:(long long)arg1 toIndentation:(long long)arg2 withIndexSet:(id)arg3;
- (void)_postRowCountChangedNotificationOfType:(long long)arg1 indexes:(id)arg2;
- (void)_postRuleOptionChangedNotification;
- (id)_newSlice;
- (id)_createNewSliceWithFrame:(struct CGRect)arg1 ruleEditorView:(id)arg2;
- (void)_windowChangedKeyState;
- (void)setFrameSize:(struct CGSize)arg1;
- (double)_minimumFrameHeight;
- (BOOL)_suppressKeyDownHandling;
- (void)_setSuppressKeyDownHandling:(BOOL)arg1;
- (BOOL)_wantsRowAnimations;
- (BOOL)_isInDesignMode;
- (BOOL)_ruleViewHasFirstResponder;
- (void)selectAll:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setWindow:(id)arg1;
- (void)_windowUpdate:(id)arg1;
- (id)_queryOrderLocalizedDictionaries:(id)arg1 withParent:(id)arg2;
- (id)_queryValueForItem:(id)arg1 inRow:(long long)arg2;
- (id)_queryChild:(long long)arg1 ofItem:(id)arg2 withRowType:(long long)arg3;
- (BOOL)_queryCanSelectItem:(id)arg1 displayValue:(id)arg2 inRow:(long long)arg3;
- (long long)_queryNumberOfChildrenOfItem:(id)arg1 withRowType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_wantsMinimalArchival;
- (void)_initRuleEditorShared;
- (id)_createSliceDropSeparator;
- (id)accessibilityRoleAttribute;

@end


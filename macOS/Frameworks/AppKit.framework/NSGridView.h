//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMapTable, NSMutableArray;

@interface NSGridView : NSView
{
    long long _xPlacement;
    long long _yPlacement;
    long long _rowAlignment;
    double _rowSpacing;
    double _colSpacing;
    NSMutableArray *_columns;
    NSMutableArray *_rows;
    NSMapTable *_cellTable;
    long long _currentConstraintGeneration;
    struct {
        unsigned int isDecoding:1;
        unsigned int _unused:31;
    } _flags;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (id)gridViewWithViews:(id)arg1;
+ (id)gridViewWithNumberOfColumns:(long long)arg1 rows:(long long)arg2;
- (BOOL)_hasBaselineOffsetsAtSize;
- (id)_viewForLastBaselineLayout;
- (id)_viewForFirstBaselineLayout;
- (void)_mergeCellsInRect:(struct CGRect)arg1;
- (struct CGRect)_expandMergeBoundsIfNeeded:(struct CGRect)arg1;
- (BOOL)_expandMergeBounds:(struct CGRect *)arg1 ifNeededForColumnAtIndex:(long long)arg2;
- (BOOL)_expandMergeBounds:(struct CGRect *)arg1 ifNeededForRow:(id)arg2;
- (BOOL)_expandMergeBounds:(struct CGRect *)arg1 ifNeededForCell:(id)arg2;
- (void)_unmergeCellsInRect:(struct CGRect)arg1;
- (void)mergeCellsInHorizontalRange:(struct _NSRange)arg1 verticalRange:(struct _NSRange)arg2;
- (void)deleteColumn:(id)arg1;
- (void)deleteRow:(id)arg1;
- (id)_insertColumnAtIndex:(long long)arg1 withViews:(id)arg2;
- (id)_insertRowAtIndex:(long long)arg1 withViews:(id)arg2;
- (void)removeColumnAtIndex:(long long)arg1;
- (void)_insertColumnCells:(id)arg1 atIndex:(long long)arg2;
- (id)_removeColumnCellsAtIndex:(long long)arg1;
- (void)moveColumnAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)_verifyInsertionOfColumnAtIndex:(long long)arg1;
- (BOOL)_verifyInsertionOfRowAtIndex:(long long)arg1;
- (BOOL)_verifyRemovalOfRowColumn:(id)arg1;
- (id)insertColumnAtIndex:(long long)arg1 withViews:(id)arg2;
- (id)addColumnWithViews:(id)arg1;
- (void)removeRowAtIndex:(long long)arg1;
- (void)moveRowAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)insertRowAtIndex:(long long)arg1 withViews:(id)arg2;
- (id)addRowWithViews:(id)arg1;
- (id)cellForView:(id)arg1;
- (void)_setCell:(id)arg1 forContentView:(id)arg2;
- (long long)indexOfRow:(id)arg1;
- (long long)indexOfColumn:(id)arg1;
- (id)_rawCellAtColumnIndex:(long long)arg1 rowIndex:(long long)arg2 allocatingIfNeeded:(BOOL)arg3;
- (id)cellAtColumnIndex:(long long)arg1 rowIndex:(long long)arg2;
- (id)columnAtIndex:(long long)arg1;
- (id)rowAtIndex:(long long)arg1;
@property(readonly) long long numberOfRows;
@property(readonly) long long numberOfColumns;
@property double columnSpacing;
@property double rowSpacing;
@property long long rowAlignment; // @synthesize rowAlignment=_rowAlignment;
@property long long yPlacement; // @synthesize yPlacement=_yPlacement;
@property long long xPlacement; // @synthesize xPlacement=_xPlacement;
- (id)description;
- (id)declaredLayoutConstraints;
- (id)_findVisibleThingNear:(id)arg1 after:(BOOL)arg2 searchRows:(BOOL)arg3;
- (void)willRemoveSubview:(id)arg1;
- (void)_sanityCheck;
- (void)_verifyMergedRegionWithHead:(id)arg1;
- (BOOL)_cellTableContainsCell:(id)arg1;
- (struct CGSize)_defaultContentCompressionResistancePriorities;
- (struct CGSize)_defaultContentHuggingPriorities;
- (BOOL)_safeHasSubview:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonPostInit;
- (void)_commonPreInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


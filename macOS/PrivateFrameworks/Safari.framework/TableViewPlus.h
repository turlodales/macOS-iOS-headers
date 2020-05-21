//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

__attribute__((visibility("hidden")))
@interface TableViewPlus : NSTableView
{
    BOOL _startEditTimerOnMouseUp;
    long long _clickedRow;
    long long _clickedColumn;
    BOOL _preservesSelectionWhenDisplayingContextMenu;
    id <TableViewPlusScrollDelegate> _scrollDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TableViewPlusScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property BOOL preservesSelectionWhenDisplayingContextMenu; // @synthesize preservesSelectionWhenDisplayingContextMenu=_preservesSelectionWhenDisplayingContextMenu;
- (id)accessibilityActionNames;
- (void)_notifyDelegateAboutSelectionChangeIfNeeded:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)deselectRow:(long long)arg1;
- (void)deselectAll:(id)arg1;
- (BOOL)resignFirstResponder;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)menuForEvent:(id)arg1;
- (void)sizeToFit;
- (void)mouseDown:(id)arg1;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)_cancelEditOnMouseUp;
- (void)_editClickedCell:(id)arg1;
- (BOOL)_userCanEditTableColumn:(id)arg1 row:(long long)arg2;
- (BOOL)shouldEditOnSingleClick:(id)arg1 inRow:(long long)arg2 tableColumn:(id)arg3;
- (BOOL)shouldEditOnDoubleClick:(id)arg1 inRow:(long long)arg2 tableColumn:(id)arg3;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)copy:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)viewDidEndLiveResize;

// Remaining properties
@property __weak id <TableViewPlusDataSource> dataSource; // @dynamic dataSource;
@property __weak id <TableViewPlusDelegate> delegate; // @dynamic delegate;

@end


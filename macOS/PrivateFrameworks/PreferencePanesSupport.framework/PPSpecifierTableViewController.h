//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSArray, NSColor, NSDictionary, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, NSTableView, NSView, PPFlexibleSpaceSpecifier, PPSpecifier, PPSpecifierExtensionItem, PPSpecifierTableCellView;

@interface PPSpecifierTableViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    NSMutableArray *_specifiers;
    NSColor *_backgroundColor;
    id <PPSpecifierTableViewControllerDelegate> _delegate;
    NSLayoutConstraint *_tableViewWidthConstraint;
    NSView *_detailsViewPlaceholder;
    PPSpecifierTableCellView *_selectedCellView;
    PPSpecifierExtensionItem *_selectedExtensionItem;
    NSDictionary *_extensions;
    NSMutableDictionary *_viewHeights;
    PPFlexibleSpaceSpecifier *_flexibleSpaceSpecifier;
    NSTableView *_specifierTableView;
}

- (void).cxx_destruct;
@property __weak NSTableView *specifierTableView; // @synthesize specifierTableView=_specifierTableView;
@property __weak PPFlexibleSpaceSpecifier *flexibleSpaceSpecifier; // @synthesize flexibleSpaceSpecifier=_flexibleSpaceSpecifier;
@property(retain) NSMutableDictionary *viewHeights; // @synthesize viewHeights=_viewHeights;
@property(retain) NSDictionary *extensions; // @synthesize extensions=_extensions;
@property __weak PPSpecifierExtensionItem *selectedExtensionItem; // @synthesize selectedExtensionItem=_selectedExtensionItem;
@property __weak PPSpecifierTableCellView *selectedCellView; // @synthesize selectedCellView=_selectedCellView;
@property(retain) NSView *detailsViewPlaceholder; // @synthesize detailsViewPlaceholder=_detailsViewPlaceholder;
@property(retain) NSLayoutConstraint *tableViewWidthConstraint; // @synthesize tableViewWidthConstraint=_tableViewWidthConstraint;
@property __weak id <PPSpecifierTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (double)_updateFlexibleSpecifier;
- (void)viewDidLayout;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(readonly) PPSpecifier *selectedSpecifier; // @dynamic selectedSpecifier;
- (void)sizeTableToFit;
- (BOOL)revealElementForKey:(id)arg1;
- (void)removeSpecifiers:(id)arg1 withAnimation:(unsigned long long)arg2;
- (void)removeSpecifiers:(id)arg1;
- (void)insertSpecifiers:(id)arg1 atIndexes:(id)arg2 withAnimation:(unsigned long long)arg3;
- (void)insertSpecifiers:(id)arg1 atIndexes:(id)arg2;
- (void)reloadRowForSpecifier:(id)arg1;
- (BOOL)selectSpecifier:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;
@property(retain) NSArray *specifiers; // @dynamic specifiers;
@property(readonly) NSView *tableView; // @dynamic tableView;
- (id)initWithDelegate:(id)arg1;
- (void)_loadExtensionSpecifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


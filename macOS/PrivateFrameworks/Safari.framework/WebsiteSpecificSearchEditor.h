//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/SheetWithTableController.h>

#import "TableViewPlusDataSource.h"
#import "TableViewPlusDelegate.h"

@class NSMutableArray, NSString, NSTextField, WBSFaviconRequestsController;

__attribute__((visibility("hidden")))
@interface WebsiteSpecificSearchEditor : SheetWithTableController <TableViewPlusDataSource, TableViewPlusDelegate>
{
    NSMutableArray *_websiteHosts;
    BOOL _didAwakeFromNib;
    WBSFaviconRequestsController *_requestController;
    NSTextField *_emptyTablePlaceholderText;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTextField *emptyTablePlaceholderText; // @synthesize emptyTablePlaceholderText=_emptyTablePlaceholderText;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)reloadTableData;
- (id)_userVisibleHostForHost:(id)arg1;
- (void)showSheetInWindow:(id)arg1;
- (void)removeAllItems:(id)arg1;
- (void)removeSelectedItems:(id)arg1;
- (void)showManageWebsitesSheet:(id)arg1;
- (void)_updateVisibilityOfPlaceholderText;
- (void)_quickWebsiteSearchProvidersDidChange:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


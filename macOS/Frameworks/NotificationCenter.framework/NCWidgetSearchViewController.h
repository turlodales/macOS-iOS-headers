//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NCWidgetListItemDelegate.h"
#import "NSSearchFieldDelegate.h"
#import "NSTextFieldDelegate.h"

@class CALayer, NCSearchTextItemViewController, NCVerticalListController, NSArray, NSMutableArray, NSSearchField, NSString, NSTextField, NSView;

@interface NCWidgetSearchViewController : NSViewController <NCWidgetListItemDelegate, NSTextFieldDelegate, NSSearchFieldDelegate>
{
    unsigned long long _selection;
    CALayer *_highlightLayer;
    NSArray *_searchResults;
    NCSearchTextItemViewController *_placeholderViewController;
    NSMutableArray *_contentViewControllers;
    NSMutableArray *_searchItemViewControllers;
    NSString *_searchResultsPlaceholderString;
    BOOL _dividerLineHidden;
    id <NCWidgetSearchViewDelegate> _delegate;
    NSString *_searchDescription;
    NSString *_searchResultKeyPath;
    NCVerticalListController *_listView;
    NSTextField *_titleTextField;
    NSSearchField *_searchField;
    NSView *_containerView;
}

@property(nonatomic) BOOL dividerLineHidden; // @synthesize dividerLineHidden=_dividerLineHidden;
@property(nonatomic) __weak NSView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NCVerticalListController *listView; // @synthesize listView=_listView;
@property(nonatomic) unsigned long long selection; // @synthesize selection=_selection;
@property(copy) NSString *searchResultKeyPath; // @synthesize searchResultKeyPath=_searchResultKeyPath;
@property(copy) NSString *searchDescription; // @synthesize searchDescription=_searchDescription;
@property __weak id <NCWidgetSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_listItemViewControllerForContentViewController:(id)arg1;
- (void)_removeListItemViewController:(id)arg1;
- (id)_addContentViewController:(id)arg1;
- (void)widgetListItem:(id)arg1 mouseUp:(id)arg2;
- (void)widgetListItem:(id)arg1 mouseDragged:(id)arg2;
- (void)widgetListItem:(id)arg1 mouseDown:(id)arg2;
- (void)_makeSelection:(id)arg1;
- (void)_setDividerLinesVisible:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)searchFieldChanged:(id)arg1;
- (void)removeContentViewController:(id)arg1;
- (void)addContentViewController:(id)arg1;
- (void)searchFieldDidEndSearching:(id)arg1;
- (void)searchFieldDidStartSearching:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)viewDidAppear;
- (unsigned long long)count;
@property(copy) NSArray *searchResults;
@property(copy) NSString *searchResultsPlaceholderString;
- (void)_updateSearchResultsPlaceholder;
- (void)awakeFromNib;
- (id)nibBundle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


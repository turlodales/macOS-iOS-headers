//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSearchFieldDelegate.h"
#import "NSTextFieldDelegate.h"

@class ABAddressBook, ABPersonListSearchControllerUsageStatisticsHelper, ABPersonSearchConfiguration, NSArray, NSSearchField, NSString;

@interface ABPersonListSearchController : NSObject <NSTextFieldDelegate, NSSearchFieldDelegate>
{
    id <ABPersonListControllerProtocol> _personListController;
    NSSearchField *_searchField;
    NSString *_previousSearchString;
    ABPersonSearchConfiguration *_currentConfiguration;
    id <ABPersonListHeadlining> _browsingHeadliner;
    ABAddressBook *_browsingAddressBook;
    id <ABPersonSearchControllerDelegate> _delegate;
    ABPersonListSearchControllerUsageStatisticsHelper *_usageStatisticsHelper;
    unsigned long long _countOfLocalSearchesPerformed;
    unsigned long long _countOfServerSearchesPerformed;
    BOOL _shouldSelectBestEntry;
}

@property(retain) ABPersonListSearchControllerUsageStatisticsHelper *usageStatisticsHelper; // @synthesize usageStatisticsHelper=_usageStatisticsHelper;
@property(nonatomic) BOOL shouldSelectBestEntry; // @synthesize shouldSelectBestEntry=_shouldSelectBestEntry;
@property(retain) id <ABPersonListHeadlining> browsingHeadliner; // @synthesize browsingHeadliner=_browsingHeadliner;
@property(retain) ABAddressBook *browsingAddressBook; // @synthesize browsingAddressBook=_browsingAddressBook;
@property(copy) NSString *previousSearchString; // @synthesize previousSearchString=_previousSearchString;
@property(nonatomic) NSSearchField *searchField; // @synthesize searchField=_searchField;
@property id <ABPersonListControllerProtocol> personListController; // @synthesize personListController=_personListController;
@property id <ABPersonSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setPlaceholderStringWithGroupName:(id)arg1;
- (void)setPlaceholderStringForAllContacts;
- (void)setSearchGroupName:(id)arg1 isAllContacts:(BOOL)arg2;
- (void)searchConfigurationPerformedServerSearch;
- (void)searchConfigurationPerformedLocalSearch;
- (void)resetCountsOfSearchesPerformed;
@property(readonly) unsigned long long countOfServerSearchesPerformed;
@property(readonly) unsigned long long countOfLocalSearchesPerformed;
- (void)selectNext:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (void)_implicitlyAdvanceTheSelection:(id)arg1;
- (void)_searchFieldAction:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)searchForString:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)selectBestRecordMatchingQuery:(id)arg1;
- (void)setSearchConfiguration:(id)arg1;
- (void)focusSearchField:(id)arg1;
@property(readonly, copy) NSArray *searchTerms;
@property(copy) NSString *searchString;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


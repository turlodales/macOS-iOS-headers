//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CompletionUIPresentationControllerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "ParsecTableCellViewDelegate.h"

@class CompletionWindow, NSMutableSet, NSString, NSURL, NSView, WBSFaviconRequestsController;

__attribute__((visibility("hidden")))
@interface UnifiedFieldCompletionControllerObjCAdapter : NSObject <ParsecTableCellViewDelegate, CompletionUIPresentationControllerDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    double _lastKnownUnifiedFieldWidth;
    double _lastKnownWindowBackingScaleFactor;
    struct UnifiedFieldCompletionController *_completionController;
    NSMutableSet *_completionAbortingNotificationNames;
    BOOL _shouldPostAccessibilityRefreshNotification;
    CompletionWindow *_completionWindow;
    WBSFaviconRequestsController *_requestsController;
    BOOL _parsecActionButtonSelected;
}

+ (BOOL)_atLeastOneCompletionListSectionHasChangedBetweenList:(const Vector_e1d4bda3 *)arg1 list:(const Vector_e1d4bda3 *)arg2;
+ (id)simplifiedURLStringForURLString:(id)arg1;
+ (BOOL)wantsFavoritesViewInCompletionList;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isParsecActionButtonSelected) BOOL parsecActionButtonSelected; // @synthesize parsecActionButtonSelected=_parsecActionButtonSelected;
- (BOOL)_shouldPostAXRefreshNotificationWithOldList:(const Vector_e1d4bda3 *)arg1 newListItems:(const Vector_e1d4bda3 *)arg2;
-     // Error parsing type: @24@0:8^{ParsecSearchResultCompletionListItem=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}@BQ@@^{CommandTarget}i@i}16, name: _tableCellViewForParsecSearchCompletionListItemWhenUsingSearchUI:
- (void)_registerForCompletionAbortingNotificationNamed:(id)arg1 object:(id)arg2;
- (void)_unregisterForCompletionAbortingNotifications;
- (void)_registerForCompletionAbortingNotifications;
- (id)_completionListTableView;
- (id)_browserWindowController;
- (void)completionUIPresentationControllerDidFinishPresentationAnimation:(id)arg1;
- (void)completionUIPresentationControllerWillStartPresentationAnimation:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)completionListTableView:(id)arg1 rowSpansAllColumns:(long long)arg2;
- (void)completionListTableView:(id)arg1 mouseUpInRow:(long long)arg2;
- (long long)completionListTableViewUserInterfaceLayoutDirection:(id)arg1;
- (id)fullWidthColumnIdentifierForCompletionListTableView:(id)arg1;
- (void)parsecTableCellViewActionButtonSelectionStateDidChange:(id)arg1;
- (BOOL)parsecTableCellView:(id)arg1 shouldUseITunesPunchoutForActionButton:(id)arg2;
- (BOOL)parsecTableCellView:(id)arg1 shouldShowActionButton:(id)arg2;
- (BOOL)_shouldUseSearchUIViewForSearchResult:(id)arg1;
- (BOOL)shouldUseITunesPunchoutForActionButton:(id)arg1;
- (id)_playableContentIdentifierForActionButton:(id)arg1;
@property(readonly, nonatomic) NSURL *parsecActionButtonPunchoutURL;
- (void)_updateActionButtonVisibility;
- (void)_monitorPurchaseHistoryLoadingStatus;
- (void)showFavoritesViewIfPossible;
- (BOOL)canShowFavoritesViewWithFailureReason:(unsigned long long *)arg1;
- (void)handledEscKeyWhenCompletionUIWasNotVisible;
- (int)attemptedToAbortCompletion:(int)arg1;
- (BOOL)parsecResultShouldUseTwoColumnPresentation:(id)arg1 askedToForceTwoColumnPresentation:(BOOL)arg2;
-     // Error parsing type: c24@0:8^{URLMatchCompletionListItem=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}@BQ@@^{CommandTarget}i@}16, name: shouldShowIconAndURLInSameColumnAsTitleForCompletionItem:
- (void)unifiedFieldCompletionListDidHide;
- (void)unifiedFieldCompletionListDidShow;
- (void)_completionListTableViewFrameDidChange:(id)arg1;
- (void)_updateHeightsOfParsecCellViews;
- (void)_requestImageForCell:(id)arg1 itemAtRow:(unsigned long long)arg2;
-     // Error parsing type: c24@0:8^{CompletionListItem=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}@BQ@@}16, name: _listItemUsesMagnifyingGlassImage:
-     // Error parsing type: c24@0:8^{CompletionListItem=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}@BQ@@}16, name: _listItemIsQuickWebsiteSearchItem:
- (void)tableViewColumnDidResize:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)_setAttributedStringValuesOnUnifiedFieldTableCellView:(id)arg1 forOriginalStringValue:(id)arg2;
-     // Error parsing type: v32@0:8@16^{CompletionListItem=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}@BQ@@}24, name: _configureParsecCell:usingCompletionListItem:
- (void)willUpdateCompletionListFromList:(const Vector_e1d4bda3 *)arg1 toList:(const Vector_e1d4bda3 *)arg2;
- (void)didUpdateCompletionList;
- (void)didReloadCompletionList;
- (void)willReloadCompletionList;
-     // Error parsing type: @24@0:8^{CompletionListItem=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}@BQ@@}16, name: _parsecCellViewForCompletionListItem:
-     // Error parsing type: i24@0:8^{CompletionListItem=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}@BQ@@}16, name: _parsecCellViewTypeForCompletionListItem:
- (void)restoreSearchState:(id)arg1;
- (BOOL)canRestoreSearchState:(id)arg1;
- (BOOL)shouldAbortCompletionFromNotification:(id)arg1;
- (void)_abortCompletionFromNotification:(id)arg1;
@property(readonly, nonatomic) NSView *completionWindowContentView;
- (void)completionWindowDidHide:(id)arg1;
- (void)completionWindowDidShow:(id)arg1;
@property(readonly, nonatomic) BOOL hasTopAndBottomInsets;
@property(readonly, nonatomic) BOOL roundsCorners;
- (void)invalidate;
- (id)attributedStringForTableColumn:(id)arg1 row:(long long)arg2;
- (struct UnifiedFieldCompletionController *)completionController;
- (id)init;
- (id)initWithCompletionController:(struct UnifiedFieldCompletionController *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


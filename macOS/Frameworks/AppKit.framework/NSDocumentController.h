//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSMenuItemValidation.h"
#import "NSUserInterfaceValidations.h"

@class NSArray, NSDocument, NSMutableDictionary, NSString;

@interface NSDocumentController : NSObject <NSCoding, NSMenuItemValidation, NSUserInterfaceValidations>
{
    id _documents;
    id _moreVars;
    NSArray *_cachedTypeDescriptions;
    NSMutableDictionary *_recents;
    int _recentsLimit;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (long long)_maximumNumberOfConcurrentlyOpeningDocuments;
+ (BOOL)_hasOverrideForSelector:(SEL)arg1;
+ (void)_setSharedDocumentController:(id)arg1;
+ (id)sharedDocumentController;
+ (Class)_seamlessDocumentCloserClass;
+ (Class)_seamlessDocumentOpenerClass;
+ (void)_restoreAuxiliaryStateFromAutoreopenRecord:(id)arg1 toDocument:(id)arg2;
+ (BOOL)_resolveAutoreopenRecord:(id)arg1 intoDocumentURL:(id *)arg2 contentsURL:(id *)arg3 tryAgainLater:(char *)arg4;
+ (id)_sharedDocumentControllerNoCreate;
+ (id)_recentMenuItemTitlesFromLocationComponentChains:(id)arg1 includingIcons:(BOOL)arg2;
+ (id)_recentMenuItemTitlesFromRecentDocumentInfos:(id)arg1 includingIcons:(BOOL)arg2;
+ (BOOL)_isJavaSubclass;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)displayNameForType:(id)arg1;
- (Class)documentClassForType:(id)arg1;
@property(readonly, copy) NSArray *documentClassNames;
- (id)typeForContentsOfURL:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *defaultType;
- (void)_dockRestarted;
- (void)_updateOpenRecentDocumentsWithNewEntries:(id)arg1 documentsSnapshot:(id)arg2;
- (void)_replaceIDForRecentDocument:(id)arg1 withID:(unsigned int)arg2;
- (BOOL)_refreshRecentDocumentURL:(id)arg1 newURL:(id)arg2 forDocument:(id)arg3;
@property(readonly, copy) NSArray *recentDocumentURLs;
- (void)noteNewRecentDocumentURL:(id)arg1;
- (void)_notePendingRecentDocumentURLsForKey:(id)arg1 documentsSnapshot:(id)arg2;
- (void)noteNewRecentDocument:(id)arg1;
- (void)clearRecentDocuments:(id)arg1;
- (id)_recentDocumentRecordsKeyForUserInterfaceItem:(id)arg1;
- (id)_recentDocumentRecordsKeyForMenu:(id)arg1;
- (void)_readRecentDocumentDefaultsForKey:(id)arg1;
- (struct OpaqueLSSharedFileListRef *)_perAppRecentDocumentFileList;
- (void)_writeRecentDocumentDefaultsForKey:(id)arg1;
@property(readonly) unsigned long long maximumRecentDocumentCount;
- (id)willPresentError:(id)arg1;
- (BOOL)presentError:(id)arg1;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)_restorePersistentDocumentWithState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_persistenceMustOpenDocumentsThroughApplicationDelegate;
- (id)standardShareMenuItem;
@property(readonly) BOOL allowsAutomaticShareMenu;
- (void)_recursivelyEnumerateMenuItemsStartingFromMenu:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)duplicateDocumentWithContentsOfURL:(id)arg1 copying:(BOOL)arg2 displayName:(id)arg3 error:(id *)arg4;
- (id)_oldMakeDuplicateDocumentWithContentsOfURL:(id)arg1 copying:(BOOL)arg2 displayName:(id)arg3 error:(id *)arg4;
- (void)_finishOpeningDocument:(id)arg1 andShowWindows:(BOOL)arg2;
- (void)closeAllDocumentsWithDelegate:(id)arg1 didCloseAllSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)reviewUnsavedDocumentsWithAlertTitle:(id)arg1 cancellable:(BOOL)arg2 delegate:(id)arg3 didReviewAllSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (long long)_runAlertPanel:(id)arg1 msg:(id)arg2 first:(id)arg3 second:(id)arg4 guardSecond:(BOOL)arg5 third:(id)arg6;
- (long long)_editedDocumentCount;
@property(readonly) BOOL hasEditedDocuments;
- (void)saveAllDocuments:(id)arg1;
- (void)_something:(id)arg1 didSomething:(BOOL)arg2 soContinue:(CDUnknownBlockType)arg3;
@property double autosavingDelay;
- (id)makeDocumentForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (void)reopenDocumentForURL:(id)arg1 withContentsOfURL:(id)arg2 display:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_willPresentReopeningError:(id)arg1 forURL:(id)arg2 contentsURL:(id)arg3;
- (void)makeDocumentForURL:(id)arg1 withContentsOfURL:(id)arg2 alternateContents:(id)arg3 ofType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)makeDocumentForURL:(id)arg1 withAlternateContents:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)makeDocumentWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)makeDocumentWithContentsOfURL:(id)arg1 alternateContents:(id)arg2 ofType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_errorForMissingDocumentClassWithContentsURL:(id)arg1 ofType:(id)arg2;
- (void)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAlternateContentsForDocumentAtURL:(id)arg1 withFileCoordinationInterrupter:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_coordinateReadingAndGetAlternateContentsForOpeningDocumentAtURL:(id)arg1 resolvingSymlinks:(BOOL)arg2 thenContinueOnMainThreadWithAccessor:(CDUnknownBlockType)arg3;
- (void)_coordinateReadingForOpeningDocumentAtURL:(id)arg1 resolvingSymlinks:(BOOL)arg2 byAccessor:(CDUnknownBlockType)arg3;
- (void)_openDocumentWithContentsOfURL:(id)arg1 usingProcedure:(CDUnknownBlockType)arg2;
- (void)_openDocumentsWithContentsOfURLs:(id)arg1 presentErrors:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_canPerformBatchedDocumentOpening;
- (void)_openDocumentsWithContentsOfURLs:(id)arg1 display:(BOOL)arg2 presentErrors:(BOOL)arg3;
- (id)_finishBatchedOpeningAndPresentErrors:(BOOL)arg1;
- (void)_beginBatchedOpeningWithURLs:(id)arg1;
- (void)_didEndAsyncOpeningOrPrinting;
- (void)_willBeginAsyncOpeningOrPrinting;
- (void)_waitForAsyncOpeningOrPrintingToFinishThenContinue:(CDUnknownBlockType)arg1;
- (long long)runModalOpenPanel:(id)arg1 forTypes:(id)arg2;
- (void)beginOpenPanel:(id)arg1 forTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginOpenPanelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)URLsFromRunningOpenPanel;
- (id)_openableTypes;
- (id)_setupOpenPanel;
- (void)openDocument:(id)arg1;
- (id)_willPresentOpeningError:(id)arg1 forURL:(id)arg2;
- (id)_willPresentOpeningError:(id)arg1 forDocumentWithDisplayName:(id)arg2;
- (id)_presentableFileNameFromURL:(id)arg1;
- (id)makeUntitledDocumentOfType:(id)arg1 error:(id *)arg2;
- (id)_openUntitledDocumentOfType:(id)arg1 andDisplay:(BOOL)arg2 error:(id *)arg3;
- (id)openUntitledDocumentAndDisplay:(BOOL)arg1 error:(id *)arg2;
- (id)_defaultType:(BOOL)arg1;
- (void)newDocument:(id)arg1;
- (id)_willPresentCreationError:(id)arg1;
- (void)removeDocument:(id)arg1;
- (void)addDocument:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)newWindowForTab:(id)arg1;
- (BOOL)_appProbablyNeedsWarmedUpSavePanel;
- (void)_setInvokeVersionsForTimeMachine:(BOOL)arg1;
- (void)_ubiquityIdentityChanged:(id)arg1;
- (void)_appearancePreferencesChanged:(id)arg1;
- (void)_appWillBecomeInactive:(id)arg1;
- (id)documentForWindow:(id)arg1;
- (id)documentForURL:(id)arg1;
- (id)_documentForURL:(id)arg1;
@property(readonly, copy) NSString *currentDirectory;
@property(readonly) NSDocument *currentDocument;
@property(readonly, copy) NSArray *documents;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_openRecentDocument:(id)arg1;
- (id)_recentDocumentURLsForKey:(id)arg1;
- (void)_mountedVolumesDidChange:(id)arg1;
- (void)_startResolvingRecentDocumentURLsForKey:(id)arg1 includingResolved:(BOOL)arg2 preliminaryResultsHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_noteRecentDocumentInfoRemoved:(id)arg1 forKey:(id)arg2;
- (void)_noteNewRecentDocumentURL:(id)arg1 forKey:(id)arg2;
- (void)__noteNewRecentDocumentURL:(id)arg1 forKey:(id)arg2;
- (id)_recentDocumentRecordsKeyForMenuTag:(long long)arg1;
- (BOOL)_isInaccessibleUbiquitousItemAtURL:(id)arg1;
- (BOOL)_isPurgedItemAtURL:(id)arg1;
- (void)_setDocumentBeingDuplicated:(id)arg1;
- (id)_documentBeingDuplicated;
- (BOOL)_anyDocumentClassUsesUbiquitousStorage;
- (BOOL)_anyDocumentClassPreservesVersions;
- (BOOL)_allDocumentClassesAutosaveInPlace;
- (BOOL)_anyDocumentClassAutosavesInPlace;
- (id)_windowAboveWindowOfOpeningDocumentAtIndex:(unsigned long long)arg1 orMakeKey:(char *)arg2;
- (unsigned long long)_indexOfOpeningDocument:(id)arg1;
- (unsigned long long)_countOfOpeningDocuments;
- (id)_typeDescriptions;
- (id)_typeDescriptionForName:(id)arg1;
- (int)_utiUsage;
- (void)_getAutoreopenRecordForDocument:(id)arg1 withoutException:(BOOL)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_createAutoreopenRecordForDocument:(id)arg1 withoutException:(BOOL)arg2;
- (id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryOptions:(id)arg4 recoveryAttempter:(id)arg5;
- (id)_fixedFailureReasonFromError:(id)arg1;
- (id)_autosaveDirectoryURLCreateIfNecessary:(BOOL)arg1;
- (BOOL)_autosavingContentsURLIsReserved:(id)arg1;
- (void)_unreserveAutosavingContentsURL:(id)arg1;
- (void)_reserveAutosavingContentsURL:(id)arg1;
- (void)_resumeMainThreadUnblocker:(id)arg1;
- (void)_suspendMainThreadUnblocker:(id)arg1 thenContinueWhenComplete:(CDUnknownBlockType)arg2;
- (void)_onMainThreadInvokeWorker:(CDUnknownBlockType)arg1;
- (BOOL)_isMainThreadBlockedByWaiter;
- (void)_popMainThreadUnblockerThenContinue:(CDUnknownBlockType)arg1;
- (id)_pushMainThreadUnblocker:(CDUnknownBlockType)arg1;
- (long long)_uniqueNumberForDocument:(id)arg1;
- (BOOL)_isNativeType:(id)arg1 forDocumentClass:(Class)arg2;
- (void)_getReadableNotWritable:(BOOL)arg1 types:(id)arg2 forDocumentClass:(Class)arg3;
- (void)_noteAutosavedContentsOfDocument:(id)arg1;
- (void)_noteAutoreopenStateChangedForDocument:(id)arg1;
- (void)_closeAllDocumentsWithDelegate:(id)arg1 shouldTerminateSelector:(SEL)arg2;
- (void)__closeAllDocumentsWithDelegate:(id)arg1 shouldTerminateSelector:(SEL)arg2;
- (void)_documentDidEndAsynchronouslyPreservingVersion:(id)arg1;
- (void)_documentWillBeginAsynchronouslyPreservingVersion:(id)arg1;
- (void)_writeAutoreopenRecordsForOpenDocuments;
- (void)_writeAutoreopenRecords:(id)arg1;
- (void)_printDocumentsWithContentsOfURLs:(id)arg1 settings:(id)arg2 showPrintPanels:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_willPresentOpenForPrintingError:(id)arg1 forURL:(id)arg2;
- (BOOL)_openFile:(id)arg1;
- (BOOL)_showOpenPanel;
- (BOOL)_openUntitled;
- (BOOL)_isAutoreopening;
- (void)_autoreopenDocumentsIgnoringExpendable:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_autoreopenDocumentsFromRecords:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_permitAutoreopeningOfDocuments;
- (void)_finishedWithAutoreopenRecords;
- (id)_autoreopenRecordsBeingReopened;
- (id)_autosaveRecordPathCreateIfNecessary:(BOOL)arg1;
- (void)_notePendingRecentDocumentURLsIfNecessary;
- (void)_shareMenuDidClose:(id)arg1;
- (void)_share:(id)arg1;
- (void)_populateShareMenu:(id)arg1;
- (void)_setRevertToMenuHidden:(BOOL)arg1;
- (void)_populateRevertToMenu:(id)arg1;
- (void)_updateTitleForMenuItem:(id)arg1 originalTitle:(id)arg2;
- (id)_documentForAction:(SEL)arg1;
- (void)_installOpenRecentMenus;
- (void)_invalidateUnresolvedRecentDocumentInfos;
- (void)_invalidateRecentDocumentInfosForVolumeURL:(id)arg1;
- (void)_populateOpenRecentMenu:(id)arg1 includingIcons:(BOOL)arg2;
- (id)_resolveRecentDocumentsForKey:(id)arg1 asynchronousUpdater:(CDUnknownBlockType)arg2;
- (void)_updateMenu:(id)arg1 withRecentDocumentInfos:(id)arg2 includingIcons:(BOOL)arg3;
- (id)_recentDocumentInfoForKey:(id)arg1;
- (void)_depopulateOpenRecentMenu:(id)arg1;
- (id)_touchBar;
- (void)_updateSuddenTermination;
- (BOOL)_tabPlusButtonWasClicked;
- (void)_setTabPlusButtonWasClicked:(BOOL)arg1;
- (void)_setShouldInvertImplicitBehaviorToYesForCurrentRunLoop;
- (void)_setShouldInvertImplicitTabbingBehavior:(BOOL)arg1;
- (BOOL)_shouldInvertImplicitTabbingBehavior;
- (void)_invalidateTypeDescriptionCache;
- (id)_types;
- (id)_typesForDocumentClass:(Class)arg1 includeEditors:(BOOL)arg2 includeViewers:(BOOL)arg3 includeExportable:(BOOL)arg4;
- (id)_resolveTypeAlias:(id)arg1;
- (id)typeFromFileExtension:(id)arg1;
- (BOOL)shouldCreateUI;
- (void)setShouldCreateUI:(BOOL)arg1;
- (BOOL)reopenDocumentForURL:(id)arg1 withContentsOfURL:(id)arg2 error:(id *)arg3;
- (id)openUntitledDocumentOfType:(id)arg1 display:(BOOL)arg2;
- (id)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 error:(id *)arg3;
- (id)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2;
- (id)openDocumentWithContentsOfFile:(id)arg1 display:(BOOL)arg2;
- (id)_openDocumentFileAt:(id)arg1 display:(BOOL)arg2;
- (id)makeUntitledDocumentOfType:(id)arg1;
- (id)makeDocumentWithContentsOfURL:(id)arg1 ofType:(id)arg2;
- (id)makeDocumentWithContentsOfFile:(id)arg1 ofType:(id)arg2;
- (id)fileNamesFromRunningOpenPanel;
- (id)_openableFileExtensions;
- (id)fileExtensionsFromType:(id)arg1;
- (id)documentForFileName:(id)arg1;
- (BOOL)reviewUnsavedDocumentsWithAlertTitle:(id)arg1 cancellable:(BOOL)arg2;
- (BOOL)closeAllDocuments;
- (id)_javaLastError;
- (void)_setJavaLastError:(id)arg1;
- (id)_invokeJavaOverrideForSelector:(SEL)arg1 withErrorAndOtherArguments:(id *)arg2;
- (id)initJava2;
- (id)initJava1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


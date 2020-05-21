//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSEditorRegistration.h"
#import "NSFilePresenter.h"
#import "NSMenuItemValidation.h"
#import "NSUIActivityProvider.h"
#import "NSUserInterfaceValidations.h"

@class NSArray, NSDate, NSOperationQueue, NSPrintInfo, NSPrintOperation, NSScriptObjectSpecifier, NSSet, NSString, NSURL, NSUndoManager, NSUserActivity, NSView, NSWindow;

@interface NSDocument : NSObject <NSUIActivityProvider, NSEditorRegistration, NSFilePresenter, NSMenuItemValidation, NSUserInterfaceValidations>
{
    NSWindow *_window;
    id _windowControllers;
    NSURL *_fileURL;
    NSString *_fileType;
    NSPrintInfo *_printInfo;
    long long _documentReserved;
    NSView *savePanelAccessory;
    id _displayName;
    id _privateData;
    NSUndoManager *_undoManager;
    struct __docFlags {
        unsigned int inClose:1;
        unsigned int hasUndoManager:1;
        unsigned int unused:1;
        unsigned int reconciledToFileName:1;
        unsigned int checkingDisplayName:1;
        unsigned int hasInvalidRestorableState:1;
        unsigned int hasEverHadInvalidRestorableState:1;
        unsigned int RESERVED:25;
    } _docFlags;
    NSString *_savePanelSaveType;
}

+ (BOOL)isNativeType:(id)arg1;
+ (id)writableTypes;
+ (id)readableTypes;
+ (unsigned long long)_presentedDocumentTypeForContentType:(id)arg1;
+ (id)_sortedNonModalErrors:(id)arg1;
+ (void)_openPurchaseICloudStorageUI;
+ (long long)_bucketForNonModalErrorCode:(long long)arg1;
+ (BOOL)_stillObservesWillCloseUndoGroup;
+ (id)_destinationURLForRenamingItemAtURL:(id)arg1 directoryURL:(id)arg2 displayName:(id)arg3 fileType:(id)arg4 proposedName:(id)arg5 fallbackExtension:(id)arg6 outFileName:(id *)arg7 extensionHidden:(char *)arg8 error:(id *)arg9;
+ (id)_userHandleForSpotlight;
+ (id)_errorFailureReasonForUnlockingFailureWithUnderlyingError:(id)arg1;
+ (id)_errorDescriptionForUnlockingFailureWithUnderlyingError:(id)arg1 presentableFileName:(id)arg2;
+ (BOOL)_validateDuplicateDocumentName:(id)arg1 withOriginalName:(id)arg2;
+ (void)_parseBaseName:(id *)arg1 number:(long long *)arg2 fromDisplayName:(id)arg3;
+ (BOOL)_parseName:(id *)arg1 number:(long long *)arg2 fromDisplayName:(id)arg3 withTemplate:(id)arg4;
+ (void)_handleConflictsForDocumentAtURL:(id)arg1 modalForWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_handleConflictsForDocument:(id)arg1 atURL:(id)arg2 modalForWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)_resolveConflictsForDocument:(id)arg1 atURL:(id)arg2 byKeepingVersions:(id)arg3 otherVersions:(id)arg4 currentVersion:(id)arg5 collectingURLsToOpen:(id)arg6 andErrors:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (void)_promoteVersions:(id)arg1 atURL:(id)arg2 forDocument:(id)arg3 collectingURLsToOpen:(id)arg4 andErrors:(id)arg5;
+ (id)_willPresentConflictResolutionError:(id)arg1;
+ (BOOL)_conflictsExistForFileAtURL:(id)arg1;
+ (BOOL)_shouldShowUbiquityConflictPanel;
+ (BOOL)usesUbiquitousStorage;
+ (BOOL)_usesICloudDocumentLibrary;
+ (BOOL)_isICloudEnabled;
+ (BOOL)_presentsVersionsUserInterface;
+ (BOOL)_preservesVersions;
+ (BOOL)preservesVersions;
+ (void)_presentNameConflictAlertForURL:(id)arg1 window:(id)arg2 thenContinue:(CDUnknownBlockType)arg3;
+ (id)_tagNamesForURL:(id)arg1;
+ (void)_setTagNames:(id)arg1 forURL:(id)arg2;
+ (id)_directoryURLForNewDocuments;
+ (BOOL)_validateDraftDocumentName:(id)arg1;
+ (void)_parseBaseDraftName:(id *)arg1 number:(long long *)arg2 fromDisplayName:(id)arg3;
+ (id)_fileURLForNewDocumentWithBaseName:(id)arg1 extension:(id)arg2 isDuplicate:(BOOL)arg3 number:(long long *)arg4 unique:(BOOL)arg5 directoryURL:(id)arg6;
+ (BOOL)_autosavesDrafts;
+ (BOOL)autosavesDrafts;
+ (BOOL)_autosavesInPlace;
+ (BOOL)autosavesInPlace;
+ (id)_uniqueAutosavedContentsURLWithFileNameExtension:(id)arg1;
+ (void)_autosavingTimerDidFireSoContinue:(id)arg1;
+ (id)_errorFailureReasonForAutosavingSafetyConcern:(long long)arg1;
+ (id)_errorDescriptionForAutosavingSafetyConcern:(long long)arg1 presentableFileName:(id)arg2;
+ (BOOL)_canTryToOverrideAutosavingSafetyConcern:(long long)arg1;
+ (id)_errorForAutosavingSafetyConcern:(long long)arg1 displayName:(id)arg2 userInfo:(id)arg3;
+ (long long)_autosavingSafetyConcernForURL:(id)arg1 ignoringAutolocking:(BOOL)arg2;
+ (BOOL)_autosavingIsQuestionableAtURL:(id)arg1 errorInfo:(id *)arg2;
+ (BOOL)_isURL:(id)arg1 containedByURL:(id)arg2;
+ (id)_nonSandboxedURLForURL:(id)arg1;
+ (BOOL)_fileIsOldEnoughToQuestionAutosavingAtURL:(id)arg1;
+ (BOOL)_url:(id)arg1 matchesURL:(id)arg2;
+ (id)_backupFileNameForURL:(id)arg1;
+ (void)_alertSheetDidOrderOnScreen:(id)arg1;
+ (void)_something:(id)arg1 wasPresentedWithResult:(long long)arg2 soContinue:(CDUnknownBlockType)arg3;
+ (BOOL)_hasOverrideForSelector:(SEL)arg1;
+ (id)_fileModificationDateForURL:(id)arg1;
+ (BOOL)canConcurrentlyReadDocumentsOfType:(id)arg1;
+ (void)initialize;
+ (BOOL)_hasJavaOverrideForInitializerSelector:(SEL)arg1;
+ (BOOL)_isJavaSubclass;
+ (id)_debuggingInformationForFileCoordination;
+ (id)restorableStateKeyPaths;
+ (void)_fixupModifiedAccessory:(id)arg1;
+ (void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(BOOL)arg4;
+ (BOOL)_parentDirectoryIsWritableForURL:(id)arg1;
+ (void)_setAttributes:(id)arg1 ofItemAtURL:(id)arg2;
+ (id)_attributesOfItemAtURL:(id)arg1;
- (BOOL)revertToAlternateContents:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromAlternateContents:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (unsigned long long)alternateContentsDisassociationReason;
- (void)mergeAlternateContentsToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disassociateAlternateContentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareToDisassociateAlternateContentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isAlternateContentsMergeRequiredWhenMovingFromURL:(id)arg1 toURL:(id)arg2;
- (id)alternateContents;
- (void)setAlternateContents:(id)arg1;
- (BOOL)canEditTags;
- (BOOL)isConnectedToCollaborationServer;
- (id)_localizedSharingOwnerName;
- (BOOL)_isViewOnlyForSharing;
- (BOOL)_isSharingParticipant;
- (unsigned long long)sharingState;
- (unsigned long long)_autosaveElsewhereReason;
- (unsigned int)recentDocumentID;
- (void)setRecentDocumentID:(unsigned int)arg1;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1 backgroundQueue:(id)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (unsigned long long)_currentFileSize;
- (id)_currentFileModificationDate;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (void)_discardEditing;
- (void)_commitEditingWithDelegate:(id)arg1 didSomethingSelector:(SEL)arg2 contextInfo:(void *)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)_commitEditingThenContinue:(CDUnknownBlockType)arg1;
- (void)_editor:(id)arg1 didCommit:(BOOL)arg2 soContinue:(CDUnknownBlockType)arg3;
- (id)_topEditor;
- (BOOL)_isBeingEdited;
- (id)_presentedItemTemporaryVersionStorageIdentifier;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidDisconnect;
- (void)accommodatePresentedItemDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)_handleRemoteMoveToTrash;
- (void)_handleRemoteDeletionValidationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_presentAlertForRemoteDeletionValidationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_showAlertForPurgedDocumentWithAlternateContents:(id)arg1;
- (void)_handlePurgedDocumentWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentAlertForPurgedUbiquitousDocumentWithFormerAlternateContents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)validatePresentedItemRemoteDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemHasUnsavedChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;
- (void)setProviderPurposeIdentifier:(id)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)_populateRevertToMenu:(id)arg1;
- (void)_updateTitleForMenuItem:(id)arg1 originalTitle:(id)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_canSave;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(unsigned long long)arg2;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (void)updateDocumentTitlebarButtonState;
- (long long)_documentEditingState;
- (void)_warmupTitlebarPopover;
- (void)_requestViewControllerForDocumentTitlebarPopover:(id)arg1 thenDisplayPopoverUsingBlock:(CDUnknownBlockType)arg2;
- (void)_addRevertItemsToMenu:(id)arg1;
- (void)_endVersionsButtonUpdates;
- (void)_beginVersionsButtonUpdates;
- (void)_setShowAutosaveButton:(BOOL)arg1;
- (BOOL)_shouldShowAutosaveButtonForWindow:(id)arg1;
- (void)_setDocumentUniquingNumber:(long long)arg1;
- (long long)_documentUniquingNumber;
- (id)_transferWindowOwnership;
@property(readonly) NSWindow *windowForSheet;
- (id)_windowTitleDisplayName;
- (BOOL)_duplicateHasAutomaticallyChosenName;
- (BOOL)_suppressWindowTitleDisplayNameEmbellishment;
- (void)_setSuppressWindowTitleDisplayNameEmbellishment:(BOOL)arg1;
@property(copy) NSString *displayName;
- (void)_setDisplayName:(id)arg1;
- (void)__setDisplayName:(id)arg1;
- (void)shouldCloseWindowController:(id)arg1 delegate:(id)arg2 shouldCloseSelector:(SEL)arg3 contextInfo:(void *)arg4;
@property(readonly, copy) NSArray *windowControllers;
- (void)_windowsDidShow;
- (id)_tabbingIdentifier;
- (void)showWindows;
- (void)removeWindowController:(id)arg1;
- (void)addWindowController:(id)arg1;
- (void)setWindow:(id)arg1;
- (void)windowControllerDidLoadNib:(id)arg1;
- (void)windowControllerWillLoadNib:(id)arg1;
@property(readonly, copy) NSString *windowNibName;
- (void)makeWindowControllers;
- (void)_attemptNonModalErrorRecovery:(id)arg1;
- (void)_clearNonModalErrorsForSaveOperation:(unsigned long long)arg1;
- (void)_addNonModalError:(id)arg1;
- (void)_clearNonModalErrorForBucket:(long long)arg1;
- (void)_setNonModalErrors:(id)arg1;
- (id)_nonModalErrors;
- (id)_nonModalError;
- (void)_updateWindowControllersWithNonModalError:(id)arg1;
- (BOOL)_canDisplayDocumentPopovers;
- (id)_makeNonModalErrorOfType:(long long)arg1 underlyingError:(id)arg2;
- (id)_errorUserInfoForNonModalErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (BOOL)_shouldModallyPresentAutosavingError:(id)arg1;
- (BOOL)_canNonModallyPresentAutosavingError:(id)arg1;
- (void)_presentErrors:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (void)_presentError:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (void)willNotPresentError:(id)arg1;
- (id)willPresentError:(id)arg1;
- (BOOL)presentError:(id)arg1;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void *)arg5;
@property BOOL hasUndoManager;
@property(retain) NSUndoManager *undoManager;
- (void)_releaseUndoManager;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_changeWasDone:(id)arg1;
- (BOOL)_preventEditing;
- (void)_waitForEditorCommittingThenPerformBlock:(CDUnknownBlockType)arg1;
- (void)_changeWillBeDone:(id)arg1;
- (void)_ensureDocumentIsUnlockedForMoveOrRenameThenContinue:(CDUnknownBlockType)arg1;
- (void)_checkAutosavingIgnoringSafetyChecksThenContinue:(CDUnknownBlockType)arg1;
- (void)_checkAutosavingThenUpdateChangeCount:(unsigned long long)arg1;
- (BOOL)_checkAutosavingThenUpdateChangeCountShouldInterruptMainThreadBlocking;
- (void)_checkAutosavingThenContinue:(CDUnknownBlockType)arg1;
- (void)_checkAutosavingAndUpdateLockedState;
- (void)_updateLockedStateWithAutosavingSafetyError:(id)arg1;
- (void)_presentError:(id)arg1 ignoreAccidentalEvents:(BOOL)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(unsigned long long)arg2;
- (id)changeCountTokenForSaveOperation:(unsigned long long)arg1;
- (void)updateChangeCount:(unsigned long long)arg1;
- (void)_updateStateFromEdited:(BOOL)arg1 showsPanel:(BOOL)arg2 recentChanges:(BOOL)arg3 unautosavedChanges:(BOOL)arg4 afterSaving:(BOOL)arg5;
- (void)_updateStateFromEdited:(BOOL)arg1 recentChanges:(BOOL)arg2;
- (void)_updateSuddenTermination;
- (void)_updateDocumentEditedAndAnimate:(BOOL)arg1;
- (BOOL)_windowsShouldDisplayDocumentShowsPanel;
- (BOOL)_documentShowsPanelOnClose;
- (BOOL)_documentShowsPanelOnCloseAndIsVisibleInWindow:(char *)arg1;
- (void)_updateWindowControllersWithShowsPanelOnClose:(BOOL)arg1;
- (BOOL)isClosed;
- (BOOL)hasExplicitChanges;
- (BOOL)_allUnautosavedChangesAreDiscardable;
- (BOOL)hasRecentChanges;
@property(readonly, getter=isDocumentEdited) BOOL documentEdited;
- (BOOL)_cancelTitleEditing;
- (void)renameDocument:(id)arg1;
- (void)renameToURL:(id)arg1 extensionHidden:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)renameDocumentToURL:(id)arg1 automaticallyChosen:(BOOL)arg2 extensionHidden:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)prepareRenameSession:(id)arg1;
- (void)renameToDisplayName:(id)arg1 grantHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_renameWithProposedName:(id)arg1 grantHandler:(CDUnknownBlockType)arg2 destinationURL:(id)arg3 hideExtensions:(BOOL)arg4 nameChecked:(BOOL)arg5 trashChecked:(BOOL)arg6 overwriteChecked:(BOOL)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)_recoverableRenameFileError:(id)arg1 proposedName:(id)arg2 destinationURL:(id)arg3 retryRenamer:(CDUnknownBlockType)arg4 renameCanceler:(CDUnknownBlockType)arg5;
- (void)runModalPrintOperation:(id)arg1 delegate:(id)arg2 didRunSelector:(SEL)arg3 contextInfo:(void *)arg4;
@property(readonly) NSPrintOperation *PDFPrintOperation;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (id)_printJobTitle;
- (void)printDocumentWithSettings:(id)arg1 showPrintPanel:(BOOL)arg2 delegate:(id)arg3 didPrintSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)_willPresentPrintingError:(id)arg1;
- (void)saveDocumentToPDF:(id)arg1;
- (void)printDocument:(id)arg1;
@property(copy) NSPrintInfo *printInfo;
- (BOOL)shouldChangePrintInfo:(id)arg1;
- (BOOL)preparePageLayout:(id)arg1;
- (void)runModalPageLayoutWithPrintInfo:(id)arg1 delegate:(id)arg2 didRunSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)runPageLayout:(id)arg1;
- (BOOL)_unlockAndReturnError:(id *)arg1;
- (id)_errorForUnlockFailureWithUnderlyingError:(id)arg1;
- (void)unlockWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unlockDocumentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unlockDocument:(id)arg1;
- (void)lockWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)lockDocumentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)lockDocument:(id)arg1;
@property(readonly, getter=isLocked) BOOL locked;
- (void)setLocked:(BOOL)arg1;
- (BOOL)_shouldSaveDuplicateAtDestinationWithUserEnteredName:(BOOL)arg1;
- (id)_autoDuplicateOriginalDocumentURL;
- (void)_setAutoDuplicateOriginalDocumentURL:(id)arg1;
- (id)_duplicateDocumentDestinationURL;
- (void)_setDuplicateDocumentDestinationURL:(id)arg1;
- (BOOL)_isDuplicateDocumentDestinationWritable;
- (id)_originalDocumentURL;
- (void)_setOriginalDocumentURL:(id)arg1;
- (BOOL)_isAutoDuplicateFromEmailAttachment;
- (void)_setAutoDuplicateFromEmailAttachment:(BOOL)arg1;
- (BOOL)_isAutoDuplicate;
- (void)_setAutoDuplicate:(BOOL)arg1;
- (BOOL)_isDuplicate;
- (void)_setDuplicate:(BOOL)arg1;
- (id)_originalDisplayName;
- (void)_setOriginalDisplayName:(id)arg1;
- (id)duplicateAndReturnError:(id *)arg1;
- (id)_displayNameForDuplicating;
- (void)duplicateDocumentWithDelegate:(id)arg1 didDuplicateSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)duplicateDocument:(id)arg1;
- (void)close;
- (BOOL)_shouldDeleteOnClose;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)_saveIfNecessaryWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (id)shareItemData;
- (id)shareItemImage;
- (id)shareItemString;
- (id)shareItemURL;
- (id)shareItemType;
- (id)ubiquitousItemURLForUserInterfaceItem:(id)arg1;
- (void)performCloudSharing:(id)arg1;
- (void)shareItemAtURL:(id)arg1 withService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)shareDocumentWithSharingService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareSharingServicePicker:(id)arg1;
@property(readonly) BOOL allowsDocumentSharing;
- (void)shareUbiquitousDocumentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)prepareCloudSharingPanel:(id)arg1;
- (void)shareUbiquitousDocument:(id)arg1;
- (void)_handleConflicts;
- (void)resolveConflictRemotelyWithFileVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)willResolveConflictWithFileVersion:(id)arg1 continuer:(CDUnknownBlockType)arg2;
- (void)willHandleConflictsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_isHandlingConflicts;
- (void)_setHandlingConflicts:(BOOL)arg1;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (void)_ubiquityIdentityChanged;
- (void)_updateUbiquitousStatusWithAttributes:(id)arg1;
- (void)_updateUbiquitousQuery;
- (void)moveDocumentToUbiquityContainer:(id)arg1;
@property(readonly, getter=isInViewingMode) BOOL inViewingMode;
- (void)stopBrowsingVersionsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, getter=isBrowsingVersions) BOOL browsingVersions;
- (void)browseDocumentVersions:(id)arg1;
- (BOOL)_presentsVersionsUserInterface;
- (BOOL)preservesLocalVersions;
- (void)_moveDocumentToURL:(id)arg1 andHideExtension:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_replacementTypeForSaveAsInsteadOfMoveToURL:(id)arg1 modifiedURL:(id *)arg2 hideExtension:(char *)arg3;
- (void)_configureTitlebarPopoverViewBridgeInfo:(id)arg1;
- (void)_updateTitlebarPopoverViewBridgeInfo:(id)arg1;
- (void)_commonSetCurrentStateForTitlebarPopoverViewBridgeInfo:(id)arg1;
- (id)_willPresentMovingError:(id)arg1;
- (void)moveToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_prepareToMoveToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleOtherFromDocumentTitlebarPopoverThenContinue:(CDUnknownBlockType)arg1;
- (id)_preparedOpenPanelForMovingWithDirectoryURL:(id)arg1;
- (void)runModalMovePanelWithDelegate:(id)arg1 didMoveSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)_runModalOpenPanelForMoving:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (id)_openPanelForOtherInMovePanel:(id)arg1;
- (void)_moveToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_preparedMovePanel;
- (void)moveDocumentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)prepareMovePanel:(id)arg1;
- (void)moveDocument:(id)arg1;
- (BOOL)_shouldSetTagsForSaveOperation:(unsigned long long)arg1;
- (void)_setFileTagNames:(id)arg1;
- (id)_tagNames;
- (void)_setTagNames:(id)arg1;
- (void)_automaticallyDuplicate;
- (void)_automaticallyDuplicateThenUpdateChangeCount:(unsigned long long)arg1;
- (BOOL)_shouldAutomaticallyDuplicate;
- (BOOL)editingShouldAutomaticallyDuplicate;
- (BOOL)_isOtherWellKnownAttachment;
- (BOOL)_isEmailAttachment;
- (id)_fileURLForNewDocumentWithFileSystemUniquing:(BOOL)arg1 customDirectoryURL:(id)arg2;
- (BOOL)_shouldSetDraftAttributeForSaveOperation:(unsigned long long)arg1;
- (BOOL)needsAutosaveAsDraft;
- (BOOL)_canImplicitlySaveDocument;
- (void)_readFileIsDraft;
- (void)_setFileIsDraft:(BOOL)arg1;
- (void)_setFileAtURL:(id)arg1 isDraft:(BOOL)arg2;
- (id)_draftHashForName:(id)arg1;
@property(getter=isDraft) BOOL draft;
- (id)defaultDraftName;
- (id)_autosavingError;
- (void)_setAutosavingError:(id)arg1 presented:(BOOL)arg2;
@property(copy) NSURL *autosavedContentsFileURL;
@property(readonly, copy) NSString *autosavingFileType;
- (void)autosaveWithImplicitCancellability:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)autosaveDocumentWithDelegate:(id)arg1 didAutosaveSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)_autosaveDocumentWithDelegate:(id)arg1 didAutosaveSelector:(SEL)arg2 implicitCancellability:(BOOL)arg3 contextInfo:(void *)arg4;
@property(readonly) BOOL hasUnautosavedChanges;
- (void)scheduleAutosaving;
- (void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(BOOL)arg2;
- (void)_rescheduleAutosaving;
- (void)_autosaveDocumentBecauseOfTimerWithCancellability:(BOOL)arg1;
- (double)_autosavingDelay;
- (BOOL)_isPeriodicAutosavingEnabled;
- (void)_enablePeriodicAutosaving;
- (void)_disablePeriodicAutosaving;
- (double)autosavingDelay;
- (void)_checkAdvisoryAutosavingSafety;
- (BOOL)_checkAutosavingAndReturnError:(id *)arg1;
- (BOOL)checkAutosavingSafetyAndReturnError:(id *)arg1;
- (BOOL)checkAutosavingPossibilityAndReturnError:(id *)arg1;
- (BOOL)_checkAutosavingPossibilityAndReturnError:(id *)arg1;
- (long long)_autosavingPossibilityConcern;
- (id)_errorForAutosavingSafetyConcern:(long long)arg1 allowingDuplicate:(BOOL)arg2 userInfo:(id)arg3;
- (id)_silentlyRecoverableVariantOfSavingError:(id)arg1 resaver:(CDUnknownBlockType)arg2;
- (id)_silentlyRecoverableVariantOfDiskFullError:(id)arg1 resaver:(CDUnknownBlockType)arg2;
- (void)_attemptToFreeDiskSpace;
- (id)_errorForExistingFileWhenChangingTypesWithURL:(id)arg1;
- (id)_errorForOverwrittenFileWithSandboxExtension:(char *)arg1 andSaver:(CDUnknownBlockType)arg2;
- (id)_willPresentSavingError:(id)arg1 withURL:(id)arg2 ofType:(id)arg3 forOperation:(unsigned long long)arg4 recoveryContinuer:(CDUnknownBlockType)arg5;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 delegate:(id)arg4 didSaveSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (id)tagsFromLastRunSavePanel;
- (id)tagNamesFromLastRunSavePanel;
@property(readonly, copy) NSString *fileTypeFromLastRunSavePanel;
@property(readonly) BOOL fileNameExtensionWasHiddenInLastRunSavePanel;
- (BOOL)prepareSavePanel:(id)arg1;
@property(readonly) BOOL shouldRunSavePanelWithAccessoryView;
- (void)runModalSavePanelForSaveOperation:(unsigned long long)arg1 delegate:(id)arg2 didSaveSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)changeSaveType:(id)arg1;
- (void)saveDocumentWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)_handleDocumentFileChanges:(id)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocument:(id)arg1;
- (id)_recoverableVariantOfOverwritingError:(id)arg1 forOperation:(unsigned long long)arg2 url:(id)arg3 type:(id)arg4 temporaryDirectoryURL:(id)arg5 newContentsURL:(id)arg6 writer:(CDUnknownBlockType)arg7;
- (id)_presentableFileNameForSaveOperation:(unsigned long long)arg1 url:(id)arg2;
@property(readonly) BOOL keepBackupFile;
- (id)fileAttributesToWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
@property(readonly, copy) NSURL *backupFileURL;
@property(readonly, getter=isEntireFileLoaded) BOOL entireFileLoaded;
- (BOOL)isAutosavingCritical;
@property(readonly) BOOL autosavingIsImplicitlyCancellable;
- (void)unblockUserInteraction;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)_updateAfterRevertingToContentsOfOwnFileURL:(id)arg1 ofType:(id)arg2;
- (void)revertDocumentToSaved:(id)arg1;
- (void)_revertToVersionForTag:(long long)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (void)_revertToDiscardRecentChangesOrBrowseVersions:(BOOL)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (BOOL)_revertToDiscardRecentChangesPreservingFirst:(BOOL)arg1 error:(id *)arg2;
- (BOOL)_canRevertToDiscardRecentChanges;
- (void)willRestoreVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_revertToVersion:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (void)_revertToChosenVersion:(id)arg1 orAlternateContents:(id)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (void)_checkShouldRevertToChosenVersionThenContinue:(CDUnknownBlockType)arg1;
- (BOOL)_revertToAlternateContents:(id)arg1 preservingFirst:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_revertToVersion:(id)arg1 preservingFirst:(BOOL)arg2 error:(id *)arg3;
- (void)_updatePersistentVersionsAfterRevertingToVersion:(id)arg1;
- (void)_revertToSavedThenContinue:(CDUnknownBlockType)arg1;
- (BOOL)_revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)_canRevertToSaved;
- (id)_willPresentRevertingError:(id)arg1;
- (BOOL)_coordinateReadingContentsAndReturnError:(id *)arg1 byAccessor:(CDUnknownBlockType)arg2;
- (void)continueAsynchronousWorkOnMainThreadUsingBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)continueActivityUsingBlock:(CDUnknownBlockType)arg1;
- (void)performActivityWithSynchronousWaiting:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_presentAlertWithPrimaryMessage:(id)arg1 secondaryMessage:(id)arg2 defaultButtonLabel:(id)arg3 alternateButtonLabel:(id)arg4 otherButtonLabel:(id)arg5 ignoreAccidentalEvents:(BOOL)arg6 thenContinue:(CDUnknownBlockType)arg7;
- (void)_presentAlertWithPrimaryMessage:(id)arg1 secondaryMessage:(id)arg2 firstButtonLabel:(id)arg3 isDefault:(BOOL)arg4 alternateButtonLabel:(id)arg5 otherButtonLabel:(id)arg6 ignoreAccidentalEvents:(BOOL)arg7 guardAlternateButton:(BOOL)arg8 thenContinue:(CDUnknownBlockType)arg9;
- (void)_presentAlertWithPrimaryMessage:(id)arg1 secondaryMessage:(id)arg2 firstButtonLabel:(id)arg3 isDefault:(BOOL)arg4 alternateButtonLabel:(id)arg5 otherButtonLabel:(id)arg6 ignoreAccidentalEvents:(BOOL)arg7 thenContinue:(CDUnknownBlockType)arg8;
- (void)_presentAlertWithPrimaryMessage:(id)arg1 secondaryMessage:(id)arg2 firstButtonLabel:(id)arg3 isDefault:(BOOL)arg4 alternateButtonLabel:(id)arg5 otherButtonLabel:(id)arg6 ignoreAccidentalEvents:(BOOL)arg7 showSuppressionButton:(BOOL)arg8 guardAlternateButton:(BOOL)arg9 thenContinue:(CDUnknownBlockType)arg10;
- (void)_something:(id)arg1 didSomethingSoContinue:(CDUnknownBlockType)arg2;
- (void)_somethingDidSomething:(BOOL)arg1 soContinue:(CDUnknownBlockType)arg2;
- (void)_something:(id)arg1 wasPresentedWithResult:(long long)arg2 soContinue:(CDUnknownBlockType)arg3;
- (void)_something:(id)arg1 didSomething:(BOOL)arg2 soContinue:(CDUnknownBlockType)arg3;
@property(copy) NSDate *fileModificationDate;
@property(copy) NSString *fileType;
- (void)_operationWithSandboxToken:(long long)arg1 didSucceed:(BOOL)arg2;
- (void)_setFileURLSandboxExtensionToken:(long long)arg1;
- (void)_closeOtherDocumentWithURL:(id)arg1;
- (BOOL)_isLocatedByURL:(id)arg1 becauseOfAutosavedContentsFile:(char *)arg2;
@property(copy) NSURL *fileURL;
- (void)_setFileURL:(id)arg1;
- (void)_synchronizeWindowTitles;
- (BOOL)_reconcileDisplayNameAndTrackingInfoToFileURL;
- (id)_displayNameForURL:(id)arg1;
- (BOOL)_isExpendableAsUnsavedDocument;
- (id)initForURL:(id)arg1 withAlternateContents:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (BOOL)_initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)_initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (BOOL)_initWithType:(id)arg1 error:(id *)arg2;
- (int)_autoID;
- (void)dealloc;
- (id)init;
- (BOOL)writeWithBackupToFile:(id)arg1 ofType:(id)arg2 saveOperation:(unsigned long long)arg3;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2 originalFile:(id)arg3 saveOperation:(unsigned long long)arg4;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2;
- (BOOL)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (void)setFileName:(id)arg1;
- (void)saveToFile:(id)arg1 saveOperation:(unsigned long long)arg2 delegate:(id)arg3 didSaveSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (long long)runModalPageLayoutWithPrintInfo:(id)arg1;
- (BOOL)revertToSavedFromURL:(id)arg1 ofType:(id)arg2;
- (BOOL)revertToSavedFromFile:(id)arg1 ofType:(id)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2;
- (BOOL)readFromFile:(id)arg1 ofType:(id)arg2;
- (void)printShowingPrintPanel:(BOOL)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)loadFileWrapperRepresentation:(id)arg1 ofType:(id)arg2;
- (BOOL)loadDataRepresentation:(id)arg1 ofType:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2;
- (id)initWithContentsOfFile:(id)arg1 ofType:(id)arg2;
- (id)fileWrapperRepresentationOfType:(id)arg1;
- (id)fileName;
- (id)fileAttributesToWriteToFile:(id)arg1 ofType:(id)arg2 saveOperation:(unsigned long long)arg3;
- (id)dataRepresentationOfType:(id)arg1;
- (BOOL)shouldCloseWindowController:(id)arg1;
- (id)fileNameFromRunningSavePanelForSaveOperation:(unsigned long long)arg1;
- (long long)runModalSavePanel:(id)arg1 withAccessoryView:(id)arg2;
- (BOOL)canCloseDocument;
- (id)_javaLastError;
- (void)_setJavaLastError:(id)arg1;
- (id)_invokeJavaOverrideForSelector:(SEL)arg1 withErrorAndOtherArguments:(id *)arg2;
@property(readonly) NSScriptObjectSpecifier *objectSpecifier;
- (id)handlePrintScriptCommand:(id)arg1;
- (id)handleCloseScriptCommand:(id)arg1;
- (void)_document:(id)arg1 shouldClose:(BOOL)arg2 forScriptCommand:(id)arg3;
- (id)handleSaveScriptCommand:(id)arg1;
- (void)_saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 didSaveSelector:(SEL)arg4 scriptCommand:(id)arg5;
- (id)_writableTypeForFileNameExtension:(id)arg1 saveOperation:(unsigned long long)arg2;
- (id)_writableTypeForType:(id)arg1 saveOperation:(unsigned long long)arg2;
- (void)_document:(id)arg1 didSucceed:(BOOL)arg2 forScriptCommand:(id)arg3;
@property(copy) NSString *lastComponentOfFileName;
- (void)_performFileAccessSynchronously:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_synchronouslyCheckFileURLUsingBlock:(CDUnknownBlockType)arg1;
- (void)_performFileAccess:(id)arg1;
- (void)_fileAccessStabilizedFileURL;
- (void)_continueCurrentFileAccessDuringBlock:(CDUnknownBlockType)arg1;
- (BOOL)_isFileAccessContinuing;
- (void)_discontinueFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)continueFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enqueueFileAccess:(id)arg1;
- (CDUnknownBlockType)_fileAccessCompletionHandlerForFileAccess:(id)arg1;
- (void)_beginNextFileAccess;
- (void)_continueActivityUsingBlock:(CDUnknownBlockType)arg1;
- (void)performActivityWithSynchronousWaiting:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2 cancellationHandler:(CDUnknownBlockType)arg3;
- (void)_performActivity:(id)arg1;
- (BOOL)_interruptingSynchronousFileAccess;
- (CDUnknownBlockType)_activityCompletionHandlerForActivity:(id)arg1;
- (void)_cancelAllActivitiesAndFinishAsynchronously:(char *)arg1;
- (void)_removeActivity:(id)arg1;
- (void)_beginNextActivity;
- (void)_enqueueActivity:(id)arg1;
- (id)_makeNewActivity;
- (void)_cleanUpUserActivity;
- (void)_didRestoreUserActivity:(id)arg1;
- (void)_becomeCurrentUserActivityIfNecessary;
- (void)userActivityWasContinued:(id)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
@property(retain) NSUserActivity *userActivity;
- (void)_encodeObjectIntoRestorableState:(id)arg1 forKey:(id)arg2;
- (id)_persistentUIEncodedReference;
- (void)invalidateRestorableState;
- (BOOL)_hasEverHadInvalidRestorableState;
- (void)_markAsEverHavingInvalidRestorableState;
- (BOOL)_hasInvalidRestorableState;
- (void)_setHasInvalidRestorableState:(BOOL)arg1;
- (id)_persistentUIIdentifier;
- (id)_copyPersistentUIChildren;
- (void)_restorePersistentState:(id)arg1;
- (void)restoreDocumentWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_originalDocument;
- (id)_oldVersion;
- (void)_deleteAllVersions:(id)arg1;
- (void)_deleteThisVersion:(id)arg1;
- (void)_deleteAllVersions;
- (void)_versionWasDeleted:(id)arg1;
- (BOOL)canRestoreLocalVersions;
- (void)_browseVersions;
- (int)_preservationActionAfterSaveOperation:(unsigned long long)arg1;
- (void)_preserveVersionAfterWritingToURL:(id)arg1 forSaveOperation:(unsigned long long)arg2 byMovingBackupFileAtURL:(id)arg3 version:(id *)arg4;
- (BOOL)_preserveContentsIfNecessaryAfterWriting:(BOOL)arg1 toURL:(id)arg2 forSaveOperation:(unsigned long long)arg3 version:(id *)arg4 error:(id *)arg5;
- (id)_preserveContentsOfURL:(id)arg1 forURL:(id)arg2 reason:(unsigned long long)arg3 comment:(id)arg4 options:(unsigned long long)arg5 error:(id *)arg6;
- (BOOL)_preserveCurrentVersionForReason:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)_preserveFileContentsIfNecessaryAndReturnError:(id *)arg1;
- (void)_didChangePersistentVersions;
- (void)_willChangePersistentVersions;
- (void)_scheduleCleanupOldVersions;
- (void)_doCleanupOldVersions;
- (void)_cleanupOldVersions:(id)arg1 keepingVersions:(id)arg2;
- (void)_recordPreviousSaveDateForVersion:(id)arg1;
- (id)_versionModificationDateForTag:(long long)arg1;
- (BOOL)_canRevertToVersionForTag:(long long)arg1;
- (id)_versionForTag:(long long)arg1;
- (id)_previousSavedVersion;
- (id)_lastSavedVersion;
- (id)_lastOpenedVersion;
- (void)_resetTemporaryVersionStorageAlert;
- (void)_setShouldSkipTemporaryVersionStorageAlert;
- (void)_updateTemporaryVersionStorageState;
- (id)_errorDescriptionForTemporaryVersionStorageWarning;
- (BOOL)_needsTemporaryVersionStorageWarning;
- (id)_temporaryVersionStorageIdentifier;
- (void)_setTemporaryVersionStorageIdentifier:(id)arg1;
- (BOOL)_fileContentsDeservesPreserving;
- (void)_setFileContentsDeservesPreservingForReason:(unsigned long long)arg1;
- (void)_saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_finishPreservingAfterSavingForSaveOperation:(unsigned long long)arg1 freshlyPreservedVersion:(id)arg2;
- (BOOL)_saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (void)_finishSavingToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 changeCount:(id)arg4;
- (void)_prepareToSaveToURL:(id)arg1 forSaveOperation:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_checkFileModificationDateBeforeSavingToURL:(id)arg1 saveOperation:(unsigned long long)arg2;
- (BOOL)_coordinateReadingContentsAndWritingItemAtURL:(id)arg1 error:(id *)arg2 byAccessor:(CDUnknownBlockType)arg3;
- (void)_coordinateReadingContentsAndWritingItemAtURL:(id)arg1 byAccessor:(CDUnknownBlockType)arg2;
- (void)_fileCoordinator:(id)arg1 coordinateReadingContentsAndWritingItemAtURL:(id)arg2 byAccessor:(CDUnknownBlockType)arg3;
- (void)_fileCoordinator:(id)arg1 asynchronouslyCoordinateReadingContentsAndWritingItemAtURL:(id)arg2 byAccessor:(CDUnknownBlockType)arg3;
- (void)_asynchronousWritingDidEnd;
- (void)_asynchronousWritingDidBeginAfterUnblockingUserInteraction;
- (void)_didUnblockUserInteraction;
- (void)_waitForUserInteractionUnblocking;
- (void)_blockUserInteraction;
- (void)_runModalSavePanelForSaveOperation:(unsigned long long)arg1 delegate:(id)arg2 didSaveSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (id)_defaultDirectoryURLForSaveOperation:(unsigned long long)arg1;
- (id)_preparedSavePanelForOperation:(unsigned long long)arg1;
- (void)_setTagNamesFromLastRunSavePanel:(id)arg1;
- (void)_unsetFileNameExtensionWasHiddenInLastRunSavePanel;
- (void)_setFileNameExtensionWasHiddenInLastRunSavePanel:(BOOL)arg1;
- (id)_savePanelAccessoryViewForWritableTypes:(id)arg1 defaultType:(id)arg2;
- (void)_setSaveType:(id)arg1;
- (id)_allowedTypesFromSavePanelType;
- (id)_fileNameExtensionsForType:(id)arg1 forUseInSavePanel:(BOOL)arg2;
- (id)_defaultFromWritableTypeNames:(id)arg1;
- (void)_setAutosavingCheckingIsDisabledForScripting:(BOOL)arg1;
- (void)_checkForFileChangesThenSave:(CDUnknownBlockType)arg1 saveAs:(CDUnknownBlockType)arg2 orCancel:(CDUnknownBlockType)arg3;
- (void)_presentAlertForFileOverwritten:(BOOL)arg1 moved:(BOOL)arg2 renamed:(BOOL)arg3 inTrash:(BOOL)arg4 orUnavailable:(BOOL)arg5 thenSave:(CDUnknownBlockType)arg6 saveAs:(CDUnknownBlockType)arg7 orCancel:(CDUnknownBlockType)arg8;
- (void)_resetMoveAndRenameSensing;
- (void)_deleteAutosavedContents;
- (void)_saveDocumentWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (id)_fileAttributesToWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)_fileNameExtensionAttributesIsOverridden;
- (BOOL)_writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)_writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 forceTemporaryDirectory:(BOOL)arg4 error:(id *)arg5;
- (void)_cleanupBackupFileAtURL:(id)arg1;
- (BOOL)_canAsynchronouslyPreserveVersionAfterWriting;
- (BOOL)_canUseVersionBackupFileOptimization;
- (BOOL)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 replacingOriginalItemAtURL:(id)arg3 addingAttributes:(id)arg4 usingTemporaryDirectoryAtURL:(id)arg5 backupFileName:(id)arg6 error:(id *)arg7;
- (BOOL)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id *)arg6;
- (BOOL)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end


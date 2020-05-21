//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BrowserBookmarkImporterDelegate.h"

@class BrowserBookmarkImporter, BrowserCredentialImporter, BrowserDataDirectories, BrowserHistoryImporter, NSArray, NSObject<OS_dispatch_queue>, NSString, NSURL, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BrowserDataImporterController : NSObject <BrowserBookmarkImporterDelegate>
{
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    unsigned long long _dataTypesBeingImported;
    unsigned long long _dataTypesThatSucceeded;
    unsigned long long _dataTypesThatFailed;
    BOOL _importHasBeenCanceled;
    unsigned long long _numberOfResumptionAttempts;
    NSURL *_sourceBrowserBundleURL;
    unsigned long long _cachedDataTypes;
    BrowserDataDirectories *_cachedBrowserDataDirectories;
    NSXPCConnection *_browserDataImporterServiceConnection;
    BrowserBookmarkImporter *_bookmarkImporter;
    BrowserHistoryImporter *_historyImporter;
    BrowserCredentialImporter *_credentialImporter;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) BrowserCredentialImporter *credentialImporter; // @synthesize credentialImporter=_credentialImporter;
@property(retain, nonatomic) BrowserHistoryImporter *historyImporter; // @synthesize historyImporter=_historyImporter;
@property(retain, nonatomic) BrowserBookmarkImporter *bookmarkImporter; // @synthesize bookmarkImporter=_bookmarkImporter;
@property(retain, nonatomic) NSXPCConnection *browserDataImporterServiceConnection; // @synthesize browserDataImporterServiceConnection=_browserDataImporterServiceConnection;
- (void)_postCompletionNotificationsAndResetState;
- (void)_invalidateBrowserDataImporterServiceConnectionIfPossible;
- (id)_existingBrowserDataImporterServiceConnection;
- (void)_didCompleteImportingDataTypes:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)_updateStoredState;
- (id)_storedState;
- (BOOL)_isStoredStateValid;
- (void)_resetState;
- (unsigned long long)_dataTypesRemainingToBeImportedOnAccessQueue;
- (BOOL)_importHasBeenCanceledOnAccessQueue;
- (BOOL)_importHasBeenCanceled;
- (id)undoControllerForBookmarkImporter:(id)arg1;
- (id)_chromeApplicationBundle;
@property(readonly, nonatomic) NSArray *browserBundleURLs;
@property(readonly, nonatomic) NSArray *firefoxBundleURLs;
@property(readonly, nonatomic) NSURL *chromeBundleURL;
@property(readonly, nonatomic) BOOL canImportFromFirefox;
@property(readonly, nonatomic) BOOL canImportFromChrome;
- (BOOL)_isImportingOnAccessQueue;
@property(readonly, nonatomic) BOOL isImporting;
@property(readonly, nonatomic) BOOL canResumeInterruptedImport;
- (void)cancelImport;
- (void)abandonInterruptedImport;
- (id)_sourceBrowserDataDirectoriesInImportState:(id)arg1;
- (id)_sourceBrowserBundleInImportState:(id)arg1;
- (void)_resumeInterruptedImport;
- (void)resumeInterruptedImport;
- (void)_importDataTypes:(unsigned long long)arg1 forBrowserDataDirectories:(id)arg2;
- (void)importDataTypes:(unsigned long long)arg1 forBrowserDataDirectories:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


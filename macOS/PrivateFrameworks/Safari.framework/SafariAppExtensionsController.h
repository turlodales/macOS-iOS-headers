//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/SafariExtensionsController.h>

#import <Safari/SFSafariExtensionHostDelegate-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SafariAppExtensionsController : SafariExtensionsController <SFSafariExtensionHostDelegate>
{
    NSMutableDictionary *_contentBlockerToAssociatedAppExtensionMap;
    id _keyBagLockStatusObservationToken;
    BOOL _shouldReadFromKeychainAfterKeyBagIsUnlocked;
}

+ (id)_styleSheetsFromExtensionDictionary:(id)arg1;
+ (id)_contentScriptsFromExtensionDictionary:(id)arg1;
+ (id)_extensionWebsiteAccessForExtensionDictionary:(id)arg1;
+ (id)_baseURIForExtension:(id)arg1;
+ (void)_reportEnabledExtensionsCountToMessageTracer:(unsigned int)arg1 disabledExtensionCount:(unsigned int)arg2;
+ (void)_reportExtensionToMessageTracer:(id)arg1 enabled:(BOOL)arg2;
+ (id)_extensionsStateWithoutUnsignedExtensions:(id)arg1;
+ (id)_extensionsFromExtensionsState:(id)arg1;
+ (id)_composedIdentifierForStateOfExtensionWithBundleIdentifier:(id)arg1 developerIdentifier:(id)arg2;
+ (id)_extensionStateEnabledKey;
+ (id)extensionsCrashReporterMessageBundleParameterKey;
+ (id)_extensionsCrashReporterMessageTitle;
+ (id)extensionIdentifierToBaseURIMapBundleParameterKey;
+ (id)extensionURLScheme;
+ (id)_extensionPointIdentifier;
+ (id)_skipLoadingEnabledExtensionsAtLaunchPreferenceKey;
+ (BOOL)_initializeExtensionData:(id)arg1 forExtension:(id)arg2;
+ (id)_extensionDataClass;
+ (id)sharedController;
- (void).cxx_destruct;
- (void)_handleKeyBagUnlock;
- (void)_listenForKeyBagUnlockEvent;
- (void)getBaseURIOfExtensionWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showPopoverFromToolbarItem:(id)arg1 forExtensionWithUUID:(id)arg2;
- (void)setToolbarItem:(id)arg1 forExtensionWithUUID:(id)arg2 label:(id)arg3;
- (void)setToolbarItem:(id)arg1 forExtensionWithUUID:(id)arg2 imageData:(id)arg3;
- (void)setToolbarItem:(id)arg1 forExtensionWithUUID:(id)arg2 badgeText:(id)arg3;
- (void)setToolbarItem:(id)arg1 forExtensionWithUUID:(id)arg2 isEnabled:(BOOL)arg3;
- (void)setToolbarItem:(id)arg1 forExtensionWithUUID:(id)arg2 isEnabled:(BOOL)arg3 withBadgeText:(id)arg4;
- (void)setToolbarItemsNeedUpdateForExtensionWithUUID:(id)arg1;
- (void)openWindowWithURL:(id)arg1 forExtensionWithUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getActiveWindowWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeTab:(id)arg1;
- (void)navigateTab:(id)arg1 toURL:(id)arg2;
- (void)activateTab:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getWindowForTab:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPagesInTab:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getActivePageInTab:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)closeWindow:(id)arg1;
- (void)getAllWindowsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getToolbarItemInWindow:(id)arg1 forExtensionWithUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openTabInWindow:(id)arg1 withURL:(id)arg2 forExtensionWithUUID:(id)arg3 makeActiveIfPossible:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getAllTabsInWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getActiveTabInWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getScreenshotOfVisibleAreaForPage:(id)arg1 forExtensionWithUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getTabForPage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPropertiesOfPage:(id)arg1 forExtensionWithUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reloadPage:(id)arg1;
- (void)dispatchMessageWithName:(id)arg1 fromExtensionWithUUID:(id)arg2 toPage:(id)arg3 userInfo:(id)arg4;
- (void)pageWithUUID:(id)arg1 willNavigateToURL:(id)arg2;
- (void)contentBlockerWithIdentifier:(id)arg1 blockedResourceWithURL:(id)arg2 inPageWithUUID:(id)arg3;
- (void)getExtensionHeadersForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)canAnyExtensionsAddHeadersToURL:(id)arg1;
- (BOOL)_canExtension:(id)arg1 addHeadersToURL:(id)arg2;
- (BOOL)_canExtensionWithUUID:(id)arg1 accessBrowserContentViewController:(id)arg2;
- (BOOL)_canExtensionWithUUID:(id)arg1 accessURL:(id)arg2;
- (void)_getAPIProxyForExtensionWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dispatchMessageFromContainingAppWithName:(id)arg1 userInfo:(id)arg2 toExtensionWithUUID:(id)arg3;
- (void)dispatchPopoverDidCloseInWindow:(id)arg1 toExtensionWithUUID:(id)arg2;
- (void)dispatchPopoverWillShowInWindow:(id)arg1 toExtensionWithUUID:(id)arg2;
- (void)dispatchValidateContextMenuItem:(id)arg1 toExtensionWithUUID:(id)arg2 fromPageWithUUID:(id)arg3 validationHandler:(CDUnknownBlockType)arg4;
- (void)dispatchContextMenuItemSelected:(id)arg1 toExtensionWithUUID:(id)arg2 fromPageWithUUID:(id)arg3 withUserInfo:(id)arg4;
- (void)dispatchValidateToolbarItem:(id)arg1 toExtensionWithUUID:(id)arg2 inWindow:(id)arg3;
- (void)dispatchToolbarItemClickedInWindow:(id)arg1 toExtensionWithUUID:(id)arg2;
- (void)dispatchMessage:(id)arg1 userInfo:(id)arg2 fromPageWithUUID:(id)arg3 toExtensionWithUUID:(id)arg4;
- (void)_connectToExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadPopoverForExtensionWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadAssociatedContentBlockersForExtension:(id)arg1;
- (id)_localizedContextMenuItemLabelForLocalizedInfoDictionary:(id)arg1 withCommand:(id)arg2;
- (void)_loadContextMenuForExtension:(id)arg1;
- (id)_contextMenuForExtensionDictionary:(id)arg1 localizedInfoDictionary:(id)arg2 extensionUUID:(id)arg3;
- (void)_insertToolbarItemForExtensionIfNecessary:(id)arg1;
- (id)_localizedToolbarItemLabelForLocalizedInfoDictionary:(id)arg1 withIdentifier:(id)arg2;
- (void)_loadToolbarItemForExtension:(id)arg1 withCodeRef:(struct __SecCode *)arg2;
- (id)_toolbarItemForExtensionDictionary:(id)arg1 localizedInfoDictionary:(id)arg2 extensionIdentifier:(id)arg3 extensionUUID:(id)arg4 imagePathForName:(CDUnknownBlockType)arg5 validateResourceHandler:(CDUnknownBlockType)arg6;
- (void)_loadContentScriptsAndStylesheetsForExtension:(id)arg1 withCodeRef:(struct __SecCode *)arg2;
- (void)_connectContextToSessionWithRequestIdentifier:(id)arg1 remoteViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_extensionHasPopover:(id)arg1;
- (id)_cdHashForCodeSigningDictionary:(id)arg1;
- (void)setContextMenuEventUserInfo:(id)arg1 forPageWithUUID:(id)arg2 forExtensionWithUUID:(id)arg3;
- (void)invalidateContextMenuUserInfoForPageWithUUID:(id)arg1;
- (id)contextMenuItemsForEnabledExtensionsForPageWithUUID:(id)arg1 withCurrentURL:(id)arg2;
- (id)toolbarItemForIdentifier:(id)arg1 browserWindowController:(id)arg2;
- (id)toolbarItemIdentifiers;
- (id)extensionDataForExtension:(id)arg1;
- (void)_loadEnabledExtension:(id)arg1;
- (void)_unloadPreviouslyEnabledExtension:(id)arg1;
- (id)_readExtensionsStateFromStorage;
- (void)_saveExtensionsStateToStorage;
- (void)_connectToExtensionForValidation:(id)arg1 untrustedCodeSigningDictionary:(id)arg2 attemptRetryOnFailure:(BOOL)arg3;
- (void)_deferAccessToExtensionsDataInStorageDuringLoad:(BOOL)arg1;
- (BOOL)_canAccessExtensionsDataInStorage;

@end


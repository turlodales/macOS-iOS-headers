//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class BrowserDataDirectories;

@protocol BrowserDataImportingService
- (void)exit;
- (void)createCredentialImporterWithBrowserDataDirectories:(BrowserDataDirectories *)arg1 reply:(void (^)(id <BrowserCredentialImportEngine>))arg2;
- (void)createHistoryImporterWithBrowserDataDirectories:(BrowserDataDirectories *)arg1 reply:(void (^)(id <BrowserHistoryImporter>))arg2;
- (void)createBookmarkImporterWithBrowserDataDirectories:(BrowserDataDirectories *)arg1 reply:(void (^)(id <BrowserBookmarkImportEngine>))arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL;

@interface AMCache : NSObject
{
    NSURL *_cacheFileURL;
    NSArray *_actionLocations;
    NSArray *_cacheLocationEntries;
    BOOL _didLoadAllActions;
    BOOL _cacheIsDirty;
}

+ (id)cacheFileURLForDomain:(long long)arg1;
+ (id)readOnlySystemCacheFileURL;
+ (id)_cacheFileURLWithCacheFileName:(id)arg1 inDomain:(unsigned long long)arg2;
+ (id)actionLocationsForDomain:(long long)arg1;
+ (id)_automatorLibraryFolderURLsForDomainMask:(unsigned long long)arg1;
+ (unsigned long long)_actionDiscoveryDomainMaskForActionDomain:(long long)arg1;
- (void).cxx_destruct;
@property BOOL cacheIsDirty; // @synthesize cacheIsDirty=_cacheIsDirty;
@property BOOL didLoadAllActions; // @synthesize didLoadAllActions=_didLoadAllActions;
@property(retain) NSURL *cacheFileURL; // @synthesize cacheFileURL=_cacheFileURL;
@property(retain) NSArray *actionLocations; // @synthesize actionLocations=_actionLocations;
@property(retain) NSArray *cacheLocationEntries; // @synthesize cacheLocationEntries=_cacheLocationEntries;
- (id)dateAddedForActionWithBundleIdentifier:(id)arg1;
- (void)writeUpdatedCacheFileIfNeeded;
- (BOOL)_writeCacheFileForLocationEntries:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)_cacheFileDataForCacheLocationEntries:(id)arg1 error:(id *)arg2;
- (id)actionWithBundleIdentifier:(id)arg1;
- (id)actionsForActionType:(id)arg1;
- (void)loadAllActionsIfNeededForActionType:(id)arg1;
- (id)_cacheLocationEntriesFromCacheFileURL:(id)arg1 expectedActionLocationURLs:(id)arg2 shouldDirtyCache:(char *)arg3;
- (id)_validCacheLocationEntriesFromCacheFileURL:(id)arg1 expectedActionLocationURLs:(id)arg2 shouldDirtyCache:(char *)arg3;
- (id)_dataFromCacheFileAtURL:(id)arg1 error:(id *)arg2;
- (id)_cacheLocationEntryURLsFromCacheFileData:(id)arg1 error:(id *)arg2;
- (BOOL)validateCacheFileData:(id)arg1 error:(id *)arg2;
- (id)_currentLanguages;
- (id)description;
- (id)initWithCacheFileURL:(id)arg1 actionLocations:(id)arg2;

@end


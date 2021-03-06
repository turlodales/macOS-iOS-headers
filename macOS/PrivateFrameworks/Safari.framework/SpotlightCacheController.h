//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSFileManagerDelegate-Protocol.h>
#import <Safari/SpotlightCacheController-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SpotlightCacheController : NSObject <SpotlightCacheController, NSFileManagerDelegate>
{
    BOOL _updateInProgress;
    BOOL _needsUpdate;
    BOOL _kickingOffUpdaterThread;
    BOOL _updateImmediately;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_fileExtensions;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
}

+ (id)sharedController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updaterThreadBody:(id)arg1;
- (void)deleteAllCachedFilesForType:(id)arg1;
- (BOOL)updateCacheFilesForType:(id)arg1;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (BOOL)forciblyCreateDirectory:(id)arg1;
- (id)createCacheSubdirectoryForDataType:(id)arg1;
- (id)createCacheParentDirectory;
- (id)cacheSubdirectoryForDataType:(id)arg1;
- (id)cacheParentDirectory;
- (void)updaterThreadFinished;
- (void)updateCacheSoon;
- (void)updateCache;
- (void)dealloc;
- (id)init;
- (void)clearAllMetadataFromDiskIfExistsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)URLToVisitFromSpotlightCacheFile:(id)arg1;
- (void)registerSpotlightDataSource:(id)arg1 andWriter:(id)arg2 forType:(id)arg3;
- (void)partialUpdateNeededForType:(id)arg1 immediately:(BOOL)arg2;
- (void)partialUpdateNeededForType:(id)arg1;
- (void)fullUpdateNeededForType:(id)arg1 immediately:(BOOL)arg2;
- (void)fullUpdateNeededForType:(id)arg1;
- (BOOL)fileIsSpotlightCacheFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemMigration/SMMigrationEngineStep.h>

#import <SystemMigration/SMPathsPreliminaryPathGroupSizeCallback-Protocol.h>

@class SMCopyEngine, SMPreflightEngine;

@interface SMMigrateFiles : SMMigrationEngineStep <SMPathsPreliminaryPathGroupSizeCallback>
{
    BOOL _kextCacheNeedsUpdate;
    SMCopyEngine *_fileCopyEngine;
    SMPreflightEngine *_preflightEngine;
    unsigned long long _prelimFileCount;
}

+ (BOOL)shouldCopyNonSystemReceiptsForUpgrade;
+ (unsigned long long)finalSizeWithEngine:(id)arg1;
- (void).cxx_destruct;
@property unsigned long long prelimFileCount; // @synthesize prelimFileCount=_prelimFileCount;
@property BOOL kextCacheNeedsUpdate; // @synthesize kextCacheNeedsUpdate=_kextCacheNeedsUpdate;
@property(retain) SMPreflightEngine *preflightEngine; // @synthesize preflightEngine=_preflightEngine;
@property(retain) SMCopyEngine *fileCopyEngine; // @synthesize fileCopyEngine=_fileCopyEngine;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)estimatedTimeRemainingChanged:(double)arg1;
- (void)transferRateChanged:(double)arg1;
- (void)copierFailed:(id)arg1 error:(id)arg2;
- (void)dedupeWallpaper;
- (BOOL)localizeFoldersForApplications;
- (BOOL)setupCopiesForFileGroups;
- (void)preliminarySize:(unsigned long long)arg1 andCount:(unsigned long long)arg2 forPathGroup:(unsigned long long)arg3;
- (BOOL)setupPreflightCopiesForAppDownloadBundles;
- (BOOL)setupPreflightActionsForFileGroups;
- (void)setupCopyNonSystemReceiptsForUpgrade;
- (id)postProcess;
- (id)process;
- (id)prepare;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)arg1;
- (double)estimatedTimeToCompletePhase:(unsigned long long)arg1;
- (id)copyPaths;
- (id)description;
- (void)cancel;
- (id)initWithEngine:(id)arg1;

@end


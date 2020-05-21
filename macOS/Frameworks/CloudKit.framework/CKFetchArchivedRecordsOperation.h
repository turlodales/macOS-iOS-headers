//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchArchivedRecordsOperation : CKDatabaseOperation
{
    BOOL _fetchAllChanges;
    BOOL _shouldFetchAssetContents;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _recordZoneChangeTokensUpdatedBlock;
    CDUnknownBlockType _recordZoneFetchCompletionBlock;
    CDUnknownBlockType _fetchArchivedRecordsCompletionBlock;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    NSMutableDictionary *_statusByZoneID;
    NSMutableDictionary *_perItemErrors;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(retain, nonatomic) NSMutableDictionary *perItemErrors; // @synthesize perItemErrors=_perItemErrors;
@property(nonatomic) BOOL shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(retain, nonatomic) NSMutableDictionary *statusByZoneID; // @synthesize statusByZoneID=_statusByZoneID;
@property(nonatomic) BOOL fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(copy, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property(copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)recordZoneArchivesStatusByZoneID;
@property(copy, nonatomic) CDUnknownBlockType fetchArchivedRecordsCompletionBlock; // @synthesize fetchArchivedRecordsCompletionBlock=_fetchArchivedRecordsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchCompletionBlock; // @synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneChangeTokensUpdatedBlock; // @synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
- (id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2;
- (id)init;

@end


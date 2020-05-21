//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKDModifyWebSharingOperation : CKDDatabaseOperation
{
    int _numSaveAttempts;
    CDUnknownBlockType _recordWebSharedBlock;
    CDUnknownBlockType _recordWebUnsharedBlock;
    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToUnshare;
    NSArray *_recordIDsToShareReadWrite;
    NSMutableSet *_fetchedRecordIDs;
    NSMutableDictionary *_recordsToSaveByID;
}

+ (long long)isPredominatelyDownload;
- (void).cxx_destruct;
@property(nonatomic) int numSaveAttempts; // @synthesize numSaveAttempts=_numSaveAttempts;
@property(retain, nonatomic) NSMutableDictionary *recordsToSaveByID; // @synthesize recordsToSaveByID=_recordsToSaveByID;
@property(retain, nonatomic) NSMutableSet *fetchedRecordIDs; // @synthesize fetchedRecordIDs=_fetchedRecordIDs;
@property(retain, nonatomic) NSArray *recordIDsToShareReadWrite; // @synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite;
@property(retain, nonatomic) NSArray *recordIDsToUnshare; // @synthesize recordIDsToUnshare=_recordIDsToUnshare;
@property(retain, nonatomic) NSArray *recordIDsToShare; // @synthesize recordIDsToShare=_recordIDsToShare;
@property(copy, nonatomic) CDUnknownBlockType recordWebUnsharedBlock; // @synthesize recordWebUnsharedBlock=_recordWebUnsharedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordWebSharedBlock; // @synthesize recordWebSharedBlock=_recordWebSharedBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_fetchRecords;
- (void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (struct _PCSIdentityData *)_copyShareProtectionFromRecord:(id)arg1 error:(id *)arg2;
- (void)_saveRecords;
- (void)_handleRecordSaved:(id)arg1 error:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end


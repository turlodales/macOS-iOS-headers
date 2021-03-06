//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDCKSyncState;
@protocol IMDCKAbstractSyncControllerDelegate;

@interface IMDCKAbstractSyncController : NSObject
{
    BOOL _isSyncing;
    id <IMDCKAbstractSyncControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <IMDCKAbstractSyncControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isSyncing; // @synthesize isSyncing=_isSyncing;
- (BOOL)_fetchedAllChangesFromCloudKit;
- (void)syncBatchCompleted:(unsigned long long)arg1;
- (void)addSyncDebuggingInfoToDictionary:(id)arg1;
- (id)syncStateDebuggingInfo:(id)arg1;
- (void)setBroadcastedSyncStateToStartingInitialSync;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateToUploading;
- (void)setBroadcastedSyncStateToDownloading;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateStateToFinished;
- (long long)syncControllerRecordType;
- (void)clearLocalSyncState:(unsigned long long)arg1;
@property(readonly, nonatomic) IMDCKSyncState *syncState;
- (id)ckUtilities;
@property(readonly, nonatomic) BOOL isUsingStingRay;

@end


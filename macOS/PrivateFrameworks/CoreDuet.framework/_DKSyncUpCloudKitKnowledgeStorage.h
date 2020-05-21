//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKSyncRemoteKnowledgeStorage.h"

@class _DKSyncCloudKitKnowledgeStorage;

@interface _DKSyncUpCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage>
{
    _DKSyncCloudKitKnowledgeStorage *_common;
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) _DKSyncCloudKitKnowledgeStorage *common; // @synthesize common=_common;
- (long long)transportType;
- (id)name;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setFetchDelegate:(id)arg1;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)clearPrewarmedFlag;
- (void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2;
- (BOOL)hasDeletionsFlagForPeer:(id)arg1;
- (void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2;
- (BOOL)hasAdditionsFlagForPeer:(id)arg1;
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelOutstandingOperations;
- (void)start;
@property(getter=isAvailable) BOOL available;
- (id)init;

@end


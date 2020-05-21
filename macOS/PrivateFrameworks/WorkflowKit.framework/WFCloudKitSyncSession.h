//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainer, CKDatabase, CKRecordID, CKRecordZoneID;

@interface WFCloudKitSyncSession : NSObject
{
    CKContainer *_container;
    CKDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    CKRecordID *_userRecordID;
}

+ (id)mergePreviousOrdering:(id)arg1 incomingOrdering:(id)arg2 outgoingOrdering:(id)arg3 sendOutgoingChange:(char *)arg4 saveLocalChange:(char *)arg5;
+ (id)checkForConflictsBetweenIncomingChanges:(id)arg1 incomingDeletes:(id)arg2 outgoingChanges:(id)arg3 outgoingDeletes:(id)arg4 incomingOrderedWorkflowIDs:(id)arg5 outgoingOrderedWorkflowIDs:(id)arg6 detectingDuplicateWorkflowsInDatabase:(id)arg7 outWorkflowIDsToRename:(id *)arg8 outLocalWorkflowsToDelete:(id *)arg9;
+ (void)setVoiceShortcutMigrationDidSync:(BOOL)arg1;
+ (BOOL)voiceShortcutMigrationDidSync;
+ (void)setVoiceShortcutMigrationDidRun:(BOOL)arg1;
+ (BOOL)voiceShortcutMigrationDidRun;
+ (void)setIgnoresUserDeletedZoneErrors:(BOOL)arg1;
+ (BOOL)ignoresUserDeletedZoneErrors;
+ (BOOL)isSyncOrderingEnabled;
+ (void)setSyncEnabled:(BOOL)arg1;
+ (BOOL)isSyncEnabled;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
@property(readonly, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (BOOL)pushChangesToCloudKit:(id)arg1 deletes:(id)arg2 ordering:(id)arg3 outSuccessfulChanges:(out id *)arg4 outSuccessfulDeletes:(out id *)arg5 outOrderingSaved:(char *)arg6 database:(id)arg7 error:(id *)arg8;
- (BOOL)saveIncomingChanges:(id)arg1 incomingDeletes:(id)arg2 conflicts:(id)arg3 mergedOrderedWorkflowIDs:(id)arg4 sentChanges:(id)arg5 sentDeletes:(id)arg6 sentOrdering:(BOOL)arg7 saveOrderingLocally:(BOOL)arg8 isOrderingEnabled:(BOOL)arg9 localWorkflowsToDelete:(id)arg10 workflowIDsToRename:(id)arg11 preSyncHashes:(id)arg12 serverChangeToken:(id)arg13 inDatabase:(id)arg14;
- (BOOL)buildOutgoingChangesFromDatabase:(id)arg1 sendAllChanges:(BOOL)arg2 outChangedWorkflows:(out id *)arg3 outPreSyncHashes:(out id *)arg4 outDeletedWorkflowIDs:(out id *)arg5 outOrderedWorkflowIDs:(out id *)arg6;
- (void)pruneIncomingChanges:(id)arg1 deletes:(id)arg2 inDatabase:(id)arg3 outWorkflowsToReupload:(id *)arg4;
- (BOOL)fetchChangesFromCloudKitSinceChangeToken:(id)arg1 outChangedWorkflowRecords:(out id *)arg2 outDeleted:(out id *)arg3 outOrderedWorkflowIDs:(out id *)arg4 outNewServerChangeToken:(out id *)arg5 error:(id *)arg6;
- (BOOL)createRecordZoneIfNecessaryWithDatabase:(id)arg1 error:(id *)arg2;
- (void)clearSyncStateForWorkflows:(id)arg1 inDatabase:(id)arg2;
- (id)accountNameForSyncToken;
- (long long)fetchCurrentAccountInfo;
- (void)syncDatabase:(id)arg1 includingOrdering:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)applyConflictResolution:(id)arg1 inDatabase:(id)arg2;
- (void)syncDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSubscriptionForRemoteChanges;
- (id)init;

@end


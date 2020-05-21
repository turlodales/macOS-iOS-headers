//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

#import "FPDaemonActionOperationClient.h"

@class FPDownloadInfo, NSArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_source>, NSObservation;

@interface FPDownloadOperation : FPActionOperation <FPDaemonActionOperationClient>
{
    NSArray *_items;
    FPDownloadInfo *_info;
    NSMutableSet *_itemsPendingDownload;
    NSObject<OS_dispatch_source> *_stitchingTimer;
    id <NSXPCProxyCreating><FPDaemonActionOperation> _remoteMoveOperation;
    NSMutableDictionary *_progressByRoot;
    NSObservation *_observation;
    NSMutableDictionary *_childProxies;
    NSMutableDictionary *_globalChildProxies;
    BOOL _recursively;
    CDUnknownBlockType _downloadCompletionBlock;
    CDUnknownBlockType __t_patchActionOperationInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType _t_patchActionOperationInfo; // @synthesize _t_patchActionOperationInfo=__t_patchActionOperationInfo;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(nonatomic) BOOL recursively; // @synthesize recursively=_recursively;
- (void)_retrieveChildProgressForItem:(id)arg1 childProxies:(id)arg2 parentSetup:(CDUnknownBlockType)arg3;
- (void)_removeProgressWithItemID:(id)arg1;
- (void)_updateGlobalParentProgressForItem:(id)arg1;
- (void)_updateParentProgressForItem:(id)arg1;
- (void)_setupParentProgress;
- (void)_updateProgressWithUpdatedFileCountForItem:(id)arg1;
- (void)showItemsAsDownloadingEvenIfDownloaded:(BOOL)arg1;
- (void)_runWithRemoteOperation:(id)arg1;
- (void)remoteOperationProgressesAreReady;
- (void)remoteOperationFinishedSendingPastUpdates;
- (void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithRemoteOperation:(id)arg1 info:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)_completedWithResultsByRoot:(id)arg1 errorsByRoot:(id)arg2 error:(id)arg3;
- (void)actionMain;
- (id)fp_prettyDescription;
- (void)presendNotifications;
- (id)initWithItems:(id)arg1;
- (void)_recomputeDownloadInfoIfNecessary;

@end


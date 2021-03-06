//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailing/QLIncrementalThumbnailGenerationHandler-Protocol.h>

@class NSMutableDictionary, QLThumbnailServiceProxy;
@protocol OS_dispatch_queue;

@interface QLThumbnailGenerator : NSObject <QLIncrementalThumbnailGenerationHandler>
{
    NSMutableDictionary *_requests;
    unsigned long long _batchingCount;
    NSMutableDictionary *_pendingCancelledRequests;
    NSMutableDictionary *_pendingGenerationRequests;
    NSMutableDictionary *_preparingGenerationRequests;
    QLThumbnailServiceProxy *_thumbnailServiceProxy;
    QLThumbnailServiceProxy *_syncThumbnailServiceProxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_requestPreparationQueue;
    NSObject<OS_dispatch_queue> *_serialResponseQueue;
}

+ (id)errorWithCode:(long long)arg1 request:(id)arg2 additionalUserInfo:(id)arg3;
+ (id)sharedGenerator;
+ (void)initialize;
+ (id)debugDescriptionForErrorCode:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialResponseQueue; // @synthesize serialResponseQueue=_serialResponseQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *requestPreparationQueue; // @synthesize requestPreparationQueue=_requestPreparationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) QLThumbnailServiceProxy *syncThumbnailServiceProxy; // @synthesize syncThumbnailServiceProxy=_syncThumbnailServiceProxy;
@property(retain, nonatomic) QLThumbnailServiceProxy *thumbnailServiceProxy; // @synthesize thumbnailServiceProxy=_thumbnailServiceProxy;
@property(retain, nonatomic) NSMutableDictionary *preparingGenerationRequests; // @synthesize preparingGenerationRequests=_preparingGenerationRequests;
@property(retain, nonatomic) NSMutableDictionary *pendingGenerationRequests; // @synthesize pendingGenerationRequests=_pendingGenerationRequests;
@property(retain, nonatomic) NSMutableDictionary *pendingCancelledRequests; // @synthesize pendingCancelledRequests=_pendingCancelledRequests;
@property(nonatomic) unsigned long long batchingCount; // @synthesize batchingCount=_batchingCount;
@property(retain, nonatomic) NSMutableDictionary *requests; // @synthesize requests=_requests;
- (BOOL)_requestRepresentationTypeIsMoreRepresentative:(id)arg1 thanType:(long long)arg2;
- (void)_createSyncThumbnailServiceProxy;
- (void)_createThumbnailServiceProxy;
- (void)failedToGenerateThumbnailOfType:(long long)arg1 forRequestWithUUID:(id)arg2 error:(id)arg3;
- (void)didGenerateThumbnailForRequestWithUUID:(id)arg1 data:(id)arg2 bitmapFormat:(id)arg3 metadata:(id)arg4 contentRect:(struct CGRect)arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(BOOL)arg8;
- (void)didUpdateStatus:(long long)arg1 ofThumbnailGenerationWithUUID:(id)arg2;
- (void)_logRequestDuration:(id)arg1;
- (void)_finishAllRequestsWithError:(id)arg1;
- (BOOL)__finishRequestIfNeeded:(id)arg1;
- (BOOL)_finishRequestIfNeeded:(id)arg1;
- (BOOL)__finishRequestIfInvalid:(id)arg1;
- (BOOL)_finishRequestIfInvalid:(id)arg1;
- (void)__finishRequestWithoutError:(id)arg1;
- (void)_finishRequestWithoutError:(id)arg1;
- (void)__callCompletionBlockOfRequest:(id)arg1 withError:(id)arg2;
- (void)_callCompletionBlockOfRequest:(id)arg1 withError:(id)arg2;
- (void)__finishRequest:(id)arg1 withError:(id)arg2;
- (void)_finishRequest:(id)arg1 withError:(id)arg2;
- (void)_finishAndCallCompletionBlockOfRequest:(id)arg1 withError:(id)arg2;
- (void)_setMostRepresentativeThumbnail:(id)arg1 forRequest:(id)arg2;
- (void)_callUpdateBlockOfRequestIfRunning:(id)arg1 andUpdateMostRepresentativeThumbnail:(id)arg2 type:(long long)arg3 error:(id)arg4;
- (id)thumbnailIconForContentType:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconVariant:(long long)arg4;
- (id)thumbnailIconForRequest:(id)arg1;
- (void)__notifyClientWithNewThumbnailRepresentationForRequestIfNeeded:(id)arg1 thumbnail:(id)arg2 type:(long long)arg3 error:(id)arg4;
- (void)_notifyClientWithNewThumbnailRepresentationForRequestIfNeeded:(id)arg1 thumbnail:(id)arg2 type:(long long)arg3 error:(id)arg4;
- (void)_handleThumbnailGenerationCompletionWithUUID:(id)arg1 data:(id)arg2 format:(id)arg3 metadata:(id)arg4 contentRect:(struct CGRect)arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(BOOL)arg8 error:(id)arg9;
- (BOOL)_queueThumbnailGenerationForRequestIfNeeded:(id)arg1;
- (void)_queueIconGenerationForRequestIfNeeded:(id)arg1;
- (void)_prepareSyncThumbnailRequest:(id)arg1;
- (void)_queueThumbnailRequest:(id)arg1;
- (void)_prepareThumbnailRequestForQueueOrSending:(id)arg1 synchronous:(BOOL)arg2;
- (void)_sendPendingCancelledRequests;
- (void)_sendPendingGenerationRequests;
- (void)_sendSyncGenerationRequest:(id)arg1;
- (void)_sendPendingBatches;
- (BOOL)__requestWithUUIDIsStillRunning:(id)arg1;
- (id)__requestWithUUID:(id)arg1;
- (id)_requestWithUUID:(id)arg1;
- (void)__removeRequestWithUUID:(id)arg1;
- (void)_removeRequest:(id)arg1;
- (void)_addRequest:(id)arg1;
- (BOOL)_isBuildingBatch;
- (void)_performInBatch:(CDUnknownBlockType)arg1;
- (void)performInBatch:(CDUnknownBlockType)arg1;
- (BOOL)_cancelRequestIfNeeded:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)saveBestRepresentationForRequest:(id)arg1 toFileAtURL:(id)arg2 withContentType:(id)arg3 allowingThumbnailDownloads:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)saveBestRepresentationForRequest:(id)arg1 toFileAtURL:(id)arg2 withContentType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)synchronousGenerateThumbnailForRequest:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 statusHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)generateThumbnailForRequest:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 statusHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)generateRepresentationsForRequest:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)generateBestRepresentationForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end


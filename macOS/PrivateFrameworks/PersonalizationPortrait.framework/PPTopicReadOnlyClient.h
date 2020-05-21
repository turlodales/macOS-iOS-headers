//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PPTopicClientProtocol.h"

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPTopicReadOnlyClient : NSObject <PPTopicClientProtocol>
{
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3 handleBatch:(CDUnknownBlockType)arg4;
- (BOOL)topicRecordsWithQuery:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;
- (BOOL)rankedTopicsWithQuery:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)scoredMappedTopicBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)topicRecordBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)topicBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_unblockPendingQueries;
- (id)init;

@end


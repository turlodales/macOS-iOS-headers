//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainer, NSOperationQueue;

@interface CKDatabase : NSObject
{
    CKContainer *_container;
    long long _scope;
    NSOperationQueue *_operationQueue;
}

@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(nonatomic) __weak CKContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)clearCacheEntriesForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCacheEntriesForRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCachesWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearAuthTokensForRecordWithID:(id)arg1;
- (void)clearRecordCache;
- (void)showAssetCache;
- (void)clearAssetCache;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)addOperation:(id)arg1;
@property(readonly, nonatomic) long long databaseScope;
- (id)description;
- (id)CKPropertiesDescription;
- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;
- (id)init;
- (void)fetchAllSubscriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllRecordZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleOperation:(id)arg1;

@end


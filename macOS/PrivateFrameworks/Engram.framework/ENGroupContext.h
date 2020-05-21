//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ENAccountIdentity, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface ENGroupContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    ENAccountIdentity *_accountIdentity;
    NSMutableArray *_middlewares;
    id <ENGroupContextDataSource> _dataSource;
    NSArray *_allMiddlewares;
}

+ (id)_missingItemsInNotFoundError:(id)arg1 remainingErrors:(id *)arg2;
+ (id)_errorWithNotFoundItems:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <ENGroupContextDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableArray *middlewares; // @synthesize middlewares=_middlewares;
@property(retain, nonatomic) ENAccountIdentity *accountIdentity; // @synthesize accountIdentity=_accountIdentity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_qDidReceiveRegistrationIdentityUpdate;
- (void)_qDidReceiveDecryptionFailureForGroup:(id)arg1;
- (void)_qDidUpdateGroup:(id)arg1 withGroup:(id)arg2;
- (void)_qDidCacheGroup:(id)arg1;
- (void)_qDidCreateGroup:(id)arg1;
- (void)_qFetchDataSourceGroupWithGroupID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_qFetchCachedGroupWithGroupID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_qUpsertGroupWithParticipants:(id)arg1 previousGroup:(id)arg2 sharedApplicationData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_qCacheMiddlewaresContainedInCost:(long long)arg1;
- (id)_middlwareConformingToProtocol:(id)arg1;
- (id)_qObserverMiddlewares;
- (id)_qCacheMiddlewares;
- (void)_qCacheGroup:(id)arg1 toMiddlewares:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_noteRegistrationIdentityUpdate;
- (void)_noteDecryptionFailureForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchGroupWithGroupID:(id)arg1 skipCache:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_groupFromPublicDataRepresentation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_publicDataRepresentationForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dropLocalCacheForGroupID:(id)arg1 compeltion:(CDUnknownBlockType)arg2;
- (void)_dropLocalCache:(CDUnknownBlockType)arg1;
- (void)_fetchAllLocalKnownGroups:(CDUnknownBlockType)arg1;
- (void)_cacheGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didReceiveRegistrationIdentityUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_didReceiveDecryptionFailureForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_didCacheGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didCreateGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *allMiddlewares; // @synthesize allMiddlewares=_allMiddlewares;
- (void)removeMiddleware:(id)arg1;
- (void)appendMiddleware:(id)arg1;
- (void)cacheIncomingGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLatestGroupWithStableID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchGroupWithGroupID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateGroup:(id)arg1 withParticipants:(id)arg2 sharedApplicationData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createGroupWithParticipants:(id)arg1 sharedApplicationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAccountIdentity:(id)arg1 dataSource:(id)arg2 queue:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSDate, NSString, PPSource;

@protocol PPNamedEntityReadWriteServerProtocol
- (void)donateLocationNamedEntities:(NSArray *)arg1 bundleId:(NSString *)arg2 groupId:(NSString *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)clearWithCompletion:(void (^)(BOOL, unsigned long long, NSError *))arg1;
- (void)cloudSyncWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)removeMapItemsBeforeCutoffDate:(NSDate *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)removeMapItemForPlaceName:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)donateMapItem:(NSData *)arg1 forPlaceName:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(NSString *)arg1 groupId:(NSString *)arg2 olderThanDate:(NSDate *)arg3 completion:(void (^)(BOOL, unsigned long long, NSError *))arg4;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(NSString *)arg1 groupIds:(NSArray *)arg2 completion:(void (^)(BOOL, unsigned long long, NSError *))arg3;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(NSString *)arg1 documentIds:(NSArray *)arg2 completion:(void (^)(BOOL, unsigned long long, NSError *))arg3;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(NSString *)arg1 completion:(void (^)(BOOL, unsigned long long, NSError *))arg2;
- (void)flushDonationsWithCompletion:(void (^)(void))arg1;
- (void)donateNamedEntities:(NSArray *)arg1 source:(PPSource *)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 completion:(void (^)(BOOL, NSError *))arg6;
@end


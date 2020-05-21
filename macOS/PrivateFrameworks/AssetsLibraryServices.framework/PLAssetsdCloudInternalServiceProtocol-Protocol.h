//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, NSURL;

@protocol PLAssetsdCloudInternalServiceProtocol <NSObject>
- (void)getResetSyncStatusWithReply:(void (^)(unsigned long long))arg1;
- (void)queryUserIdentitiesWithEmails:(NSArray *)arg1 phoneNumbers:(NSArray *)arg2 reply:(void (^)(BOOL, NSDictionary *, NSError *))arg3;
- (void)forceSyncMomentShareWithUUID:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)acceptMomentShareWithUUID:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)fetchMomentShareWithURL:(NSURL *)arg1 reply:(void (^)(BOOL, NSString *, NSError *))arg2;
- (void)publishMomentShareWithUUID:(NSString *)arg1 reply:(void (^)(BOOL, NSURL *, NSError *))arg2;
- (void)overrideSystemBudgetsForSyncSession:(BOOL)arg1 systemBudgets:(unsigned long long)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)getSystemBudgetsWithReply:(void (^)(BOOL, BOOL, NSError *))arg1;
- (void)getNotUploadedCount:(void (^)(unsigned long long, unsigned long long, unsigned long long, NSError *))arg1;
- (void)getCurrentTransferProgress:(void (^)(unsigned long long, unsigned long long, unsigned long long, unsigned long long))arg1;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 reply:(void (^)(BOOL, unsigned long long, NSError *))arg3;
- (void)setCloudPhotoLibraryPauseState:(BOOL)arg1 reason:(short)arg2;
- (void)setCloudPhotoLibraryEnabledState:(BOOL)arg1;
- (void)syncCloudPhotoLibrary;
- (void)shouldAutoEnableiCPLOnOSXWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)isReadyForCloudPhotoLibraryWithReply:(void (^)(BOOL))arg1;
- (void)setPersonInfoDictionary:(NSDictionary *)arg1 forPersonID:(NSString *)arg2;
- (void)personInfoDictionaryForPersonID:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)emailAddressForKey:(long long)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)keyForEmailAddress:(NSString *)arg1 reply:(void (^)(long long, NSError *))arg2;
- (void)cloudSharingSpaceManagementRequestWithType:(unsigned long long)arg1 optionalBytesToPurge:(unsigned long long)arg2 reply:(void (^)(unsigned long long, NSError *))arg3;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)enablePhotostreamsWithStreamID:(NSString *)arg1;
- (void)createPhotostreamAlbumWithStreamID:(NSString *)arg1;
@end


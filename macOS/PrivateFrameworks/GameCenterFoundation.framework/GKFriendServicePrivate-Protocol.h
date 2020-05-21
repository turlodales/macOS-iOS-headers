//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKFriendService.h"

@class GKConcernInternal, GKPlayerInternal, NSArray, NSString;

@protocol GKFriendServicePrivate <GKFriendService>
- (oneway void)requestGKPlayerIDforiCloudIDs:(NSArray *)arg1 handler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)reportConcern:(GKConcernInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getConcernsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)removeAllFriendsWithHandler:(void (^)(BOOL))arg1;
- (oneway void)removeFriendWithPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getCommonFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)acceptFriendRequestWithIdentifier:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)cancelFriendRequestWithIdentifier:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)createFriendRequestWithIdentifier:(NSString *)arg1 handler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getPlayerIDFromFriendCode:(NSString *)arg1 handler:(void (^)(NSString *, NSError *))arg2;
@end


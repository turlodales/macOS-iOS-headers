//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol ASDInGameAnalyticsServiceProtocol
- (void)heartBeatForSessionID:(NSString *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)gamePlayDidEndWithReason:(long long)arg1 andSessionID:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)gamePlayDidBeginWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
@end


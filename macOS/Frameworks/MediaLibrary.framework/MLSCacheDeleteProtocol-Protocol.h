//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol MLSCacheDeleteProtocol <NSObject>
- (void)cacheDeletePeriodic:(NSDictionary *)arg1 urgency:(long long)arg2 completionHandler:(void (^)(NSDictionary *))arg3;
- (void)cacheDeleteCancel;
- (void)cacheDeletePurge:(NSDictionary *)arg1 urgency:(long long)arg2 completionHandler:(void (^)(NSDictionary *))arg3;
- (void)cacheDeletePurgeable:(NSDictionary *)arg1 urgency:(long long)arg2 completionHandler:(void (^)(NSDictionary *))arg3;
@end


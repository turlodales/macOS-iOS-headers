//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/WBSSandboxExtensionStore-Protocol.h>

@class NSData, NSDate, NSDictionary, NSURL, WBSSetInt64;
@protocol NSObject;

@protocol SandboxExtensionStore <WBSSandboxExtensionStore>
- (void)removeExtensionsWithCategory:(long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeExtensionsOlderThanDate:(NSDate *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeExtensionWithIdentifier:(id <NSObject>)arg1 category:(long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)addExtensions:(NSDictionary *)arg1 identifier:(id <NSObject>)arg2 category:(long long)arg3 options:(long long)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)addExtension:(NSData *)arg1 permissions:(long long)arg2 identifier:(id <NSObject>)arg3 category:(long long)arg4 url:(NSURL *)arg5 options:(long long)arg6 completionHandler:(void (^)(NSError *))arg7;
- (void)extensionsWithCategories:(WBSSetInt64 *)arg1 options:(long long)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)extensionsWithIdentifier:(id <NSObject>)arg1 category:(long long)arg2 options:(long long)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
@end


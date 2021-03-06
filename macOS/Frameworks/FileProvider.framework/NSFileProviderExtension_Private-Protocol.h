//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class FPCTLTermDumper, NSArray, NSDate, NSError, NSFileProviderItemVersion, NSProgress, NSString, NSURL;
@protocol NSFileProviderItem;

@protocol NSFileProviderExtension_Private <NSObject>

@optional
- (void)waitForStabilizationWithCompletionHandler:(void (^)(NSError *))arg1;
- (NSArray *)customPushTopics;
- (void)preflightReparentItemWithIdentifier:(NSString *)arg1 toParentItemWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)preflightTrashItemWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)attemptRecoveryFromError:(NSError *)arg1 optionIndex:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)handleEventsForBackgroundURLSession:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (NSProgress *)disconnectWithOptions:(unsigned long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)changeItem:(id <NSFileProviderItem>)arg1 baseVersion:(NSFileProviderItemVersion *)arg2 changedFields:(unsigned long long)arg3 contents:(NSURL *)arg4 options:(unsigned long long)arg5 completionHandler:(void (^)(id <NSFileProviderItem>, unsigned long long, BOOL, NSError *))arg6;
- (void)evictItemWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(id <NSFileProviderItem>, NSError *))arg2;
- (NSProgress *)fetchPublishingURLForItemIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)reparentItemWithIdentifier:(NSString *)arg1 toParentItemWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(id <NSFileProviderItem>, NSError *))arg3;
- (NSProgress *)fetchThumbnailsForItemIdentifiers:(NSArray *)arg1 requestedSize:(struct CGSize)arg2 perThumbnailCompletionHandlerWithType:(void (^)(NSString *, NSData *, NSString *, NSError *))arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)_additionalDumpInfoWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)_dumpInternalStateToTermDumper:(FPCTLTermDumper *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)_removeTrashedItemsOlderThanDate:(NSDate *)arg1 completionHandler:(void (^)(void))arg2;
- (NSProgress *)_defaultApplicationContainerForBundleIdentifier:(NSString *)arg1 completionHandler:(void (^)(id <NSFileProviderItem>, NSError *))arg2;
- (id <NSFileProviderItem>)_propertiesForItemAtURL:(NSURL *)arg1 error:(id *)arg2;
- (void)acknowledgeUserVisibleRootLocationDidChangeToURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startProvidingItemAtURL:(NSURL *)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
@end


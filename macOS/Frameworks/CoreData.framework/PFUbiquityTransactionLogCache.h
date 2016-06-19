//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString, PFUbiquityGlobalObjectIDCache;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionLogCache : NSObject
{
    NSString *_localPeerID;
    NSMutableDictionary *_transactionLogCache;
    NSRecursiveLock *_transactionLogCacheLock;
    PFUbiquityGlobalObjectIDCache *_gidCache;
}

- (void)removeLogsCachedForStoreNamed:(id)arg1 withUbiquityRootLocation:(id)arg2;
- (void)cacheExportedLog:(id)arg1;
- (id)retainedCachedLogForLocation:(id)arg1 loadWithRetry:(BOOL)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 andGlobalIDCache:(id)arg2;
- (id)init;

@end


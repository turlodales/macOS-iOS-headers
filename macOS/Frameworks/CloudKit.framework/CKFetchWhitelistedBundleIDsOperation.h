//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKFetchWhitelistedBundleIDsOperation : CKOperation
{
    CDUnknownBlockType _fetchWhitelistedBundleIDsCompletionBlock;
    NSArray *_bundleIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (Class)operationInfoClass;
- (id)activityCreate;
@property(copy, nonatomic) CDUnknownBlockType fetchWhitelistedBundleIDsCompletionBlock; // @synthesize fetchWhitelistedBundleIDsCompletionBlock=_fetchWhitelistedBundleIDsCompletionBlock;

@end


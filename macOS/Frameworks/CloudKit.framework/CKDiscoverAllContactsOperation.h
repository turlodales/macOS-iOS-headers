//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSMutableArray;

@interface CKDiscoverAllContactsOperation : CKOperation
{
    CDUnknownBlockType _discoverAllContactsCompletionBlock;
    NSMutableArray *_discoveredUserInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *discoveredUserInfos; // @synthesize discoveredUserInfos=_discoveredUserInfos;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (Class)operationInfoClass;
@property(copy, nonatomic) CDUnknownBlockType discoverAllContactsCompletionBlock; // @synthesize discoverAllContactsCompletionBlock=_discoverAllContactsCompletionBlock;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AVAsset, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface MBAssetLoaderOperation : NSOperation
{
    BOOL finished;
    BOOL executing;
    NSArray *_prefetchKeys;
    NSURL *_identifierURL;
    AVAsset *_asset;
    CDUnknownBlockType _preCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType preCompletionBlock; // @synthesize preCompletionBlock=_preCompletionBlock;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSURL *identifierURL; // @synthesize identifierURL=_identifierURL;
@property(retain, nonatomic) NSArray *prefetchKeys; // @synthesize prefetchKeys=_prefetchKeys;
@property(getter=isExecuting) BOOL executing; // @synthesize executing;
@property(getter=isFinished) BOOL finished; // @synthesize finished;
- (void)finish;
- (void)start;
- (BOOL)isConcurrent;
- (id)initWithIdentifierURL:(id)arg1;

@end


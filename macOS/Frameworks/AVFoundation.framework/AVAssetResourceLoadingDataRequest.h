//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject
{
    AVAssetResourceLoadingDataRequestInternal *_dataRequest;
}

- (void)respondWithData:(id)arg1;
- (struct __CFDictionary *)_requestInfo;
- (id)_loadingRequest;
@property(readonly, nonatomic) long long currentOffset;
@property(readonly, nonatomic) BOOL requestsAllDataToEndOfResource;
@property(readonly, nonatomic) long long requestedLength;
@property(readonly, nonatomic) long long requestedOffset;
- (id)description;
- (void)dealloc;
- (id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 requestsAllDataToEndOfResource:(BOOL)arg4 canSupplyIncrementalDataImmediately:(BOOL)arg5;
- (id)init;

@end


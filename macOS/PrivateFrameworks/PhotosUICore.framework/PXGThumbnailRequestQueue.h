//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXGThumbnailRequestQueue : NSObject
{
    long long _capacity;
    long long _count;
    struct PXGThumbnailRequest *_requests;
}

@property(readonly, nonatomic) struct PXGThumbnailRequest *requests; // @synthesize requests=_requests;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void)removeAllRequests;
- (void)sortRequests;
- (void)enqueueRequestsWithItemRange:(struct _NSRange)arg1 textureRequestIDs:(struct _NSRange)arg2 displayAssetFetchResult:(id)arg3 targetSize:(struct CGSize)arg4;
- (id)description;
- (void)dealloc;
- (id)init;

@end


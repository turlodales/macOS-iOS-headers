//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, NSObject<OS_dispatch_queue>;

@interface AVAssetWriterInputMediaDataRequester : NSObject
{
    NSObject<OS_dispatch_queue> *_requestQueue;
    CDUnknownBlockType _requestBlock;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    AVWeakReference *_weakReferenceToDelegate;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void)requestMediaDataIfNecessary;
@property __weak id <AVAssetWriterInputMediaDataRequesterDelegate> delegate;
- (void)finalize;
- (void)dealloc;
- (void)_collectUncollectables_invokedFromDeallocAndFinalize;
- (id)init;
- (id)initWithRequestQueue:(id)arg1 requestBlock:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface HMDCloudAccount : HMFObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)addAccountOperation:(CDUnknownBlockType)arg1;
- (id)initWithClientQueue:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalAsyncBlockPerformer.h"

@class NSObject<OS_dispatch_queue>;

@interface CalDispatchQueueAsyncBlockPerformer : NSObject <CalAsyncBlockPerformer>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)performAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)performAsync:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1;

@end


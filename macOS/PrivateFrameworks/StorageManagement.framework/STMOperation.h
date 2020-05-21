//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, NSOperationQueue;

@interface STMOperation : NSOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
    double _startTime;
    double _finishTime;
    NSError *_error;
    NSOperationQueue *_operationQueue;
}

+ (id)operation;
- (void).cxx_destruct;
@property __weak NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)setIsFinished:(BOOL)arg1;
- (void)setIsExecuting:(BOOL)arg1;
- (void)start;
@property(readonly) double duration;
@property(readonly) double finishTime;
@property(readonly) double startTime;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (void)willDequeueFromOperationQueue:(id)arg1;
- (void)willEnqueueInOperationQueue:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)init;

@end


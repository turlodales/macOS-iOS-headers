//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNFuture.h"
#import "CNPromise.h"

@class NSMutableArray, NSString;

@interface CNFuture : NSObject <CNFuture, CNPromise>
{
    id <CNFutureImpl> _impl;
    NSMutableArray *_calculationDependencies;
}

+ (id)join:(id)arg1;
+ (id)sequence:(id)arg1;
+ (id)chain:(id)arg1;
+ (void)finishPromise:(id)arg1 withFuture:(id)arg2;
+ (id)recover:(id)arg1 withBlock:(CDUnknownBlockType)arg2 schedulerProvider:(id)arg3;
+ (id)flatMap:(id)arg1 withBlock:(CDUnknownBlockType)arg2 schedulerProvider:(id)arg3;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2 schedulerProvider:(id)arg3;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1 schedulerProvider:(id)arg2;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithResult:(id)arg1;
+ (id)future;
+ (id)promiseFuture;
- (void).cxx_destruct;
- (id)recover:(CDUnknownBlockType)arg1 schedulerProvider:(id)arg2;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)flatMap:(CDUnknownBlockType)arg1 schedulerProvider:(id)arg2;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)boolErrorCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (CDUnknownBlockType)completionHandlerAdapter;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (BOOL)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(readonly, getter=isFinished) BOOL finished;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
- (void)addCalculationDependency:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithImpl:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)init;
- (void)_flushCompletionBlocks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


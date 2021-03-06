//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/NSObject-Protocol.h>

@class CNFuture, NSDate;
@protocol CNScheduler;

@protocol CNFuture <NSObject>
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(readonly, getter=isFinished) BOOL finished;
- (CNFuture *)recover:(id <CNFuture> (^)(NSError *))arg1;
- (CNFuture *)flatMap:(id <CNFuture> (^)(id))arg1;
- (void)addFailureBlock:(void (^)(NSError *))arg1 scheduler:(id <CNScheduler>)arg2;
- (void)addFailureBlock:(void (^)(NSError *))arg1;
- (void)addSuccessBlock:(void (^)(id))arg1 scheduler:(id <CNScheduler>)arg2;
- (void)addSuccessBlock:(void (^)(id))arg1;
- (BOOL)cancel;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id *)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
@end


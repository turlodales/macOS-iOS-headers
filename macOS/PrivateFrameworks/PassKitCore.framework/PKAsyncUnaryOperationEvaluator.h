//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKCancelable.h"

@class NSMutableArray, NSString, PKAsyncOperationState;

@interface PKAsyncUnaryOperationEvaluator : NSObject <PKCancelable>
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_operations;
    id _value;
    CDUnknownBlockType _completion;
    _Bool _started;
    _Bool _escaped;
    _Bool _canceled;
    PKAsyncOperationState *_runningOperationState;
}

- (void).cxx_destruct;
- (_Bool)_performOperation;
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled;
- (void)cancel;
- (id)evaluateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_initWithOperations:(id)arg1 input:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


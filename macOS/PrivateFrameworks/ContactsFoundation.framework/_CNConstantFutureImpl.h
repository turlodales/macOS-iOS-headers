//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNFutureImpl.h"

@class NSString;

@interface _CNConstantFutureImpl : NSObject <CNFutureImpl>
{
    id _result;
}

- (void).cxx_destruct;
- (void)updateDescriptionWithBuilder:(id)arg1;
- (BOOL)cancel;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)initWithResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


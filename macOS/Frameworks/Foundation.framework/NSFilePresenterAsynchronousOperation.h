//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

__attribute__((visibility("hidden")))
@interface NSFilePresenterAsynchronousOperation : NSOperation
{
    CDUnknownBlockType _block;
    BOOL _isFinished;
    BOOL _isExecuting;
}

+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
- (void)finish;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (void)start;

@end


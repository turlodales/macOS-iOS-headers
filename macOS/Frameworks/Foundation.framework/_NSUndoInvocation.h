//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/_NSUndoObject.h>

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface _NSUndoInvocation : _NSUndoObject
{
    NSInvocation *_invocation;
}

- (id)description;
- (void)dealloc;
- (void)invoke;
- (id)initWithTarget:(id)arg1 invocation:(id)arg2;

@end


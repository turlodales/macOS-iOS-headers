//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/_NSUndoObject.h>

__attribute__((visibility("hidden")))
@interface _NSUndoBlockInvocation : _NSUndoObject
{
    CDUnknownBlockType _handler;
}

- (void)invoke;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end


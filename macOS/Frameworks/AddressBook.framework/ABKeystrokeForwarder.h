//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

@class NSMutableArray;

@interface ABKeystrokeForwarder : NSResponder
{
    NSMutableArray *_handlers;
}

- (BOOL)sampleHandler:(id)arg1;
- (BOOL)forwardKeystroke:(id)arg1 toHandler:(id)arg2;
- (void)keyDown:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEventsPassingTest:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithPreviousResponder:(id)arg1;

@end


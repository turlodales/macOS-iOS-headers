//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/_NSEventObserver.h>

__attribute__((visibility("hidden")))
@interface _NSLocalEventObserver : _NSEventObserver
{
    BOOL _isAdditive;
}

+ (void)initialize;
- (void)recomputeObserverMask;
- (void)invalidate;
- (id)initMatchingEvents:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;

@end


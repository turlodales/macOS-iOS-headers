//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSHMDDisplayLink.h>

@class NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _NSHMDDisplayLink : NSHMDDisplayLink
{
    CDUnknownBlockType _displayTimingBlock;
    NSObject<OS_dispatch_source> *_timer;
    _Atomic unsigned long long _suspensions;
}

- (void)resume;
- (void)suspend;
- (BOOL)isValid;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithDisplayTiming:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;

@end


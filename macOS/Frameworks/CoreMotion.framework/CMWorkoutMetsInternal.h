//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface CMWorkoutMetsInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (void)_queryWorkoutMetsWithSessionId:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end


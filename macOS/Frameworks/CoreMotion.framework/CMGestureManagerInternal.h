//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMGestureManagerInternal : NSObject
{
    int fPriority;
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fGestureHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

- (void)stopGestureUpdatesPrivate;
- (void)startGestureUpdatesWithHandlerPrivate:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPriority:(int)arg1;

@end


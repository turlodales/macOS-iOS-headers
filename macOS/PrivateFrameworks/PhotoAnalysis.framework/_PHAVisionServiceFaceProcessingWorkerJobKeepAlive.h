//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, PHAWorkerJob;

@interface _PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    PHAWorkerJob *_job;
    BOOL _continueReporting;
}

- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)_extendTimeoutAndDispatchAgainIfNecessary;
- (id)initWithJob:(id)arg1;

@end


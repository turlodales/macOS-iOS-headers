//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>;

@interface HMDCameraRecordingSessionRetryContext : NSObject
{
    double _retryInterval;
    NSDictionary *_homePresenceByPairingIdentity;
    double _maxRetryInterval;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) double maxRetryInterval; // @synthesize maxRetryInterval=_maxRetryInterval;
@property(readonly) NSDictionary *homePresenceByPairingIdentity; // @synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity;
- (void)computeNextRetryInterval;
@property double retryInterval; // @synthesize retryInterval=_retryInterval;
- (id)initWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2 preferences:(id)arg3;
- (id)initWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2;

@end


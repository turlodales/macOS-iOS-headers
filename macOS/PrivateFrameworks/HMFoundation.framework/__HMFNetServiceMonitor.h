//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFNetMonitor.h>

@class HMFNetService;

__attribute__((visibility("hidden")))
@interface __HMFNetServiceMonitor : HMFNetMonitor
{
    HMFNetService *_service;
}

- (void).cxx_destruct;
@property(readonly) HMFNetService *service; // @synthesize service=_service;
- (id)logIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)reachabilityPath;
- (id)netAddress;
- (void)dealloc;
- (id)initWithNetService:(id)arg1;
- (id)initWithNetAddress:(id)arg1;

@end


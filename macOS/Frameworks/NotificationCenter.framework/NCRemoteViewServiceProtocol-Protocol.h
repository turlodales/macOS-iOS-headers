//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotificationCenter/NSObject-Protocol.h>

@class NSDictionary;

@protocol NCRemoteViewServiceProtocol <NSObject>
- (void)remoteViewServiceRequestDebugSnapshot:(void (^)(NSData *))arg1;
- (void)remoteViewServiceDestorySnippet;
- (void)remoteViewServiceExitOnIdle;
- (void)remoteViewServiceSimulateCrash;
- (void)remoteViewServiceRequestSnapshot:(double)arg1;
- (void)remoteViewServiceDeactivateNow;
- (void)remoteViewServiceChangedDisplay:(unsigned int)arg1;
- (void)remoteViewServiceChangedActiveState:(_Bool)arg1;
- (void)remoteViewServiceReadyForDisplay:(unsigned int)arg1 block:(void (^)(struct CGSize, unsigned long long, NSDictionary *))arg2;
- (void)remoteViewServiceConfigure:(NSDictionary *)arg1 reply:(void (^)(void))arg2;
@end


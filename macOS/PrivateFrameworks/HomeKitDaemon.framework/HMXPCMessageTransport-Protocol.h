//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMFMessage;

@protocol HMXPCMessageTransport <NSObject>
- (void)handleMessage:(HMFMessage *)arg1 responseHandler:(void (^)(NSError *, NSDictionary *))arg2;
- (void)handleMessage:(HMFMessage *)arg1;
@end


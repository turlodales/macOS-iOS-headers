//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WiFiPeerToPeer/NSObject-Protocol.h>

@class WiFiAwareDatapathConfiguration, WiFiAwarePublishConfiguration, WiFiAwareSubscribeConfiguration;

@protocol WiFiP2PXPCProtocol <NSObject>
- (void)createDatapathWithConfiguration:(WiFiAwareDatapathConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)createPublishWithConfiguration:(WiFiAwarePublishConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)createSubscribeWithConfiguration:(WiFiAwareSubscribeConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol HPDAuthAgentProtocol
@property BOOL suppressUI;
- (void)unregisterForAuthenticationNotifications;
- (void)registerForAuthenticationNotifications;
- (void)isNetworkConnected:(void (^)(long long))arg1;
- (void)disconnectFromNetwork;
- (void)connectToNetwork;
- (void)authenticateWithServiceName:(NSString *)arg1 environment:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSString *, NSError *))arg3;
@end


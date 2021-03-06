//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSError, NSString, RPCompanionLinkDevice, RPEndpoint, RPSession;

@protocol RPCompanionLinkXPCClientInterface

@optional
- (void)xpcServerHidePassword:(unsigned int)arg1;
- (void)xpcServerShowPassword:(NSString *)arg1 flags:(unsigned int)arg2;
- (void)xpcServerAcceptSession:(RPSession *)arg1 completion:(void (^)(NSError *))arg2;
- (void)xpcDiscoveryChangedEndpoint:(RPEndpoint *)arg1;
- (void)xpcDiscoveryLostEndpoint:(RPEndpoint *)arg1;
- (void)xpcDiscoveryFoundEndpoint:(RPEndpoint *)arg1;
- (void)companionLinkReceivedRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 options:(NSDictionary *)arg3 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4;
- (void)companionLinkReceivedEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3;
- (void)companionLinkLocalDeviceUpdated:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkChangedDevice:(RPCompanionLinkDevice *)arg1 changes:(unsigned int)arg2;
- (void)companionLinkLostDevice:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkFoundDevice:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkAuthCompleted:(NSError *)arg1;
- (void)companionLinkPromptForPasswordType:(int)arg1 flags:(unsigned int)arg2 throttleSeconds:(int)arg3;
@end


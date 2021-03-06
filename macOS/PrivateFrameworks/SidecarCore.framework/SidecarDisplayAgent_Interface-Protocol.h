//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, SidecarDevice, SidecarDisplayConfig;

@protocol SidecarDisplayAgent_Interface
- (void)preferencesChanged:(NSArray *)arg1;
- (void)displayCurrentConfig:(void (^)(SidecarDisplayConfig *, NSError *))arg1;
- (void)displayAgentDevices:(void (^)(SidecarDevice *, NSArray *, NSError *))arg1;
- (void)displayAgentDisconnectFromDevice:(SidecarDevice *)arg1 completion:(void (^)(NSError *))arg2;
- (void)displayAgentConnectToDevice:(SidecarDevice *)arg1 withConfig:(SidecarDisplayConfig *)arg2 completion:(void (^)(NSError *))arg3;
@end


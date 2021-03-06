//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDVideoStreamInterface, NSError;

@protocol HMDVideoStreamInterfaceDelegate <NSObject>
- (void)videoStreamDidUpdateConfiguration:(HMDVideoStreamInterface *)arg1;
- (void)videoStreamDidNetworkDeteriorate:(HMDVideoStreamInterface *)arg1;
- (void)videoStreamDidNetworkImprove:(HMDVideoStreamInterface *)arg1;
- (void)videoStream:(HMDVideoStreamInterface *)arg1 didStop:(NSError *)arg2;
- (void)videoStream:(HMDVideoStreamInterface *)arg1 didStart:(NSError *)arg2;
- (void)videoStream:(HMDVideoStreamInterface *)arg1 didStartRelay:(NSError *)arg2;
@end


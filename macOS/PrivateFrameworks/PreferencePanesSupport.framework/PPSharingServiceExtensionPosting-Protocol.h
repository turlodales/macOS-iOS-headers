//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PreferencePanesSupport/PPSharingServiceExtensionHosting-Protocol.h>

@class NSString, NSXPCListenerEndpoint;

@protocol PPSharingServiceExtensionPosting <PPSharingServiceExtensionHosting>
- (void)extension:(NSString *)arg1 viewBridgeEndpoint:(NSXPCListenerEndpoint *)arg2;
- (void)switchToPanel:(NSString *)arg1;
- (void)setServiceAvailable:(BOOL)arg1;
- (void)setServiceState:(long long)arg1;
- (void)setServiceHidden:(BOOL)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEProvider.h>

#import "NSExtensionRequestHandling.h"

@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider : NEProvider <NSExtensionRequestHandling>
{
    BOOL _reasserting;
    BOOL _onDemandEnabled;
    NEVPNProtocol *_protocolConfiguration;
    NSArray *_appRules;
}

- (void).cxx_destruct;
@property BOOL onDemandEnabled; // @synthesize onDemandEnabled=_onDemandEnabled;
@property(retain) NSArray *appRules; // @synthesize appRules=_appRules;
@property(retain) NEVPNProtocol *protocolConfiguration; // @synthesize protocolConfiguration=_protocolConfiguration;
@property(readonly) long long routingMethod;
- (void)handleAppMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property BOOL reasserting;
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


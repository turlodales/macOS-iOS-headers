//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ScreenSaverExtensionHosting.h"

@class NSString, NSXPCListenerEndpoint;

@protocol ScreenSaverExtensionPosting <ScreenSaverExtensionHosting>
- (void)extension:(NSString *)arg1 viewBridgeEndpoint:(NSXPCListenerEndpoint *)arg2;
@end


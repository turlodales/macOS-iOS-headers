//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NEExtensionTunnelProviderHostProtocol.h"

@class NSData, NSString;

@protocol NEExtensionPacketTunnelProviderHostProtocol <NEExtensionTunnelProviderHostProtocol>
- (void)requestSocket:(BOOL)arg1 interface:(NSString *)arg2 local:(NSData *)arg3 remote:(NSData *)arg4 completionHandler:(void (^)(NSFileHandle *))arg5;
@end


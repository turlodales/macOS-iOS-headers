//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSXPCListenerEndpoint;

@protocol TKProtocolSlotClientNotification
- (void)setSlotWithName:(NSString *)arg1 endpoint:(NSXPCListenerEndpoint *)arg2 type:(NSString *)arg3 reply:(void (^)(void))arg4;
@end


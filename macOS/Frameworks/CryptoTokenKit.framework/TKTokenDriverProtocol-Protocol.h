//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, NSXPCListenerEndpoint;

@protocol TKTokenDriverProtocol <NSObject>
- (void)releaseTokenWithInstanceID:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)configureWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)acquireTokenWithSlot:(NSXPCListenerEndpoint *)arg1 AID:(NSData *)arg2 reply:(void (^)(NSXPCListenerEndpoint *, NSString *, NSError *))arg3;
- (void)acquireTokenWithInstanceID:(NSString *)arg1 reply:(void (^)(NSXPCListenerEndpoint *, NSError *))arg2;
@end


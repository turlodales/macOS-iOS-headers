//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol ACCTransportXPCServerProtocol <NSObject>
- (void)processIncomingData:(NSData *)arg1 forEndpointWithUUID:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)identifierForEndpointWithUUID:(NSString *)arg1 withReply:(void (^)(NSString *))arg2;
- (void)identifierForConnectionWithUUID:(NSString *)arg1 withReply:(void (^)(NSString *))arg2;
- (void)propertiesForEndpointWithUUID:(NSString *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)propertiesForConnectionWithUUID:(NSString *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)accessoryInfoForEndpointWithUUID:(NSString *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)accessoryInfoForConnectionWithUUID:(NSString *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)setConnectionAuthenticated:(NSString *)arg1 state:(_Bool)arg2;
- (void)isConnectionAuthenticatedForUUID:(NSString *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)authStatusForConnectionWithUUID:(NSString *)arg1 authType:(int)arg2 withReply:(void (^)(int))arg3;
- (void)endpointUUIDsForConnectionWithUUID:(NSString *)arg1 withReply:(void (^)(NSArray *))arg2;
- (void)connectionUUIDForEndpointWithUUID:(NSString *)arg1 withReply:(void (^)(NSString *))arg2;
- (void)destroyConnectionWithUUID:(NSString *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)destroyEndpointWithUUID:(NSString *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)publishConnectionWithUUID:(NSString *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)removeProperty:(NSString *)arg1 forEndpointWithUUID:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)setProperties:(NSDictionary *)arg1 forEndpointWithUUID:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)setAccessoryInfo:(NSDictionary *)arg1 forEndpointWithUUID:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)createEndpointWithTransportType:(int)arg1 andProtocol:(int)arg2 andIdentifier:(NSString *)arg3 forConnectionWithUUID:(NSString *)arg4 withReply:(void (^)(BOOL, NSString *))arg5;
- (void)removeProperty:(NSString *)arg1 forConnectionWithUUID:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)setProperties:(NSDictionary *)arg1 forConnectionWithUUID:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)createConnectionWithType:(int)arg1 andIdentifier:(NSString *)arg2 withReply:(void (^)(BOOL, NSString *))arg3;
- (void)launchServer;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TKTokenDriverHostProtocol <NSObject>
- (void)auditAuthOperation:(NSString *)arg1 auditToken:(CDStruct_6ad76789)arg2 success:(BOOL)arg3 reply:(void (^)(void))arg4;
- (void)getTokenConfigurationEndpointWithReply:(void (^)(NSXPCListenerEndpoint *))arg1;
@end


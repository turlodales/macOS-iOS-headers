//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol PLXPCProxyCreating <NSObject>
- (id)_unboostingRemoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
- (id)remoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;

@optional
- (void)addBarrierBlock:(void (^)(void))arg1;
@end


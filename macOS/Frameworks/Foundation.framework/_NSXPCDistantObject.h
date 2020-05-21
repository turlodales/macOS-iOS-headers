//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "NSXPCProxyCreating.h"

@class NSDictionary, NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding>
{
    NSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    NSDictionary *_userInfo;
    CDUnknownBlockType _errorBlock;
    unsigned long long _proxyNumber;
    unsigned long long _generationCount;
    unsigned long long _flags;
    double _timeout;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDictionary *_userInfo; // @synthesize _userInfo;
@property double _timeout; // @synthesize _timeout;
@property(readonly, copy) CDUnknownBlockType _errorBlock; // @synthesize _errorBlock;
@property(retain) NSXPCInterface *_remoteInterface; // @synthesize _remoteInterface;
@property(readonly, retain) NSXPCConnection *_connection; // @synthesize _connection;
@property(readonly) unsigned long long _generationCount; // @synthesize _generationCount;
@property(readonly) unsigned long long _proxyNumber; // @synthesize _proxyNumber;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_unboostingRemoteObjectProxy;
- (id)remoteObjectProxy;
- (void)_forwardStackInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) BOOL _sync;
@property(readonly) BOOL _noImportance;
@property(readonly) BOOL _exported;
- (void)dealloc;
- (id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3;
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 options:(unsigned long long)arg5 error:(CDUnknownBlockType)arg6;

@end


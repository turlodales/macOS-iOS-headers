//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BoardServices/BSXPCServiceConnectionRootContext.h>

@class NSObject<OS_xpc_object>;

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext
{
    NSObject<OS_xpc_object> *_endpoint;
    BOOL _nonLaunching;
}

+ (id)uniqueClientContextWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 description:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isNonLaunching) BOOL nonLaunching; // @synthesize nonLaunching=_nonLaunching;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *endpoint; // @synthesize endpoint=_endpoint;
- (BOOL)isClient;
- (id)_initWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 eDesc:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface TKClientToken : NSObject
{
    NSXPCListenerEndpoint *_serverEndpoint;
    NSXPCConnection *_serverConnection;
    BOOL _namedConnection;
    NSNumber *_targetUID;
    long long _connectionIdentifier;
    NSString *_tokenID;
    NSXPCConnection *_tokenConnection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCConnection *tokenConnection; // @synthesize tokenConnection=_tokenConnection;
@property(readonly, nonatomic) NSString *tokenID; // @synthesize tokenID=_tokenID;
- (void)dealloc;
- (id)sessionWithLAContext:(id)arg1 error:(id *)arg2;
- (id)withError:(id *)arg1 invoke:(CDUnknownBlockType)arg2;
- (BOOL)ensureConnectionWithError:(id *)arg1;
@property(readonly, nonatomic) NSXPCListenerEndpoint *watcherEndpoint;
@property(readonly, nonatomic) NSXPCListenerEndpoint *configurationEndpoint;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property(readonly, nonatomic) NSXPCConnection *serverConnection;
- (id)initWithTokenID:(id)arg1;
- (id)initWithTokenID:(id)arg1 serverEndpoint:(id)arg2 targetUID:(id)arg3;

@end


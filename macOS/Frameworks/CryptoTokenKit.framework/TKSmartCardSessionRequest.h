//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSXPCConnection;

@interface TKSmartCardSessionRequest : NSObject
{
    NSDictionary *_parameters;
    CDUnknownBlockType _reply;
    NSXPCConnection *_connection;
}

@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;

@end


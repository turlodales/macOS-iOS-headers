//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDDiagnosticsProtocol.h"

@class NSString, NSXPCConnection;

@interface IDDiagnosticsConnection : NSObject <IDDiagnosticsProtocol>
{
    NSXPCConnection *_connection;
}

+ (id)sharedConnection;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)clearDiagnosticMessages:(CDUnknownBlockType)arg1;
- (void)clearSingleDiagnosticMessage:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)recordDiagnosticMessage:(long long)arg1 withData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)finishMessageTransport;
- (void)startMessageTransport;
- (void)finishInstall;
- (void)startNewInstall;
- (id)connectionWithErrorHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


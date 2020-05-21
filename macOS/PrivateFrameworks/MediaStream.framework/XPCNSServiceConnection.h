//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XPCServiceConnectionDelegate.h"

@class NSString, XPCServiceConnection;

@interface XPCNSServiceConnection : NSObject <XPCServiceConnectionDelegate>
{
    XPCServiceConnection *_serviceConnection;
    id <XPCNSServiceConnectionDelegate> _delegate;
    id <NSObject> _context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(nonatomic) __weak id <XPCNSServiceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)XPCServiceConnectionDidDisconnect:(id)arg1;
- (void)XPCServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned long long)arg3;
@property(readonly, retain, nonatomic) NSString *serviceName;
- (void)sendMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithXPCServiceConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


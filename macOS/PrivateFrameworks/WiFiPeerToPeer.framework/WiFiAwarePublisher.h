//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WiFiAwarePublisherXPCDelegate.h"

@class NSNumber, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, WiFiAwarePublishConfiguration;

@interface WiFiAwarePublisher : NSObject <WiFiAwarePublisherXPCDelegate>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_publishID;
    id <WiFiAwarePublisherXPC> _publisherProxy;
    id <WiFiAwarePublisherDelegate> _delegate;
    WiFiAwarePublishConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WiFiAwarePublishConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <WiFiAwarePublisherDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)publishTerminatedWithReason:(long long)arg1;
- (void)publishReceivedMessage:(id)arg1 fromSubscriberID:(unsigned char)arg2 subscriberAddress:(id)arg3;
- (void)publishFailedToStartWithError:(long long)arg1;
- (void)publishDataTerminatedForHandle:(id)arg1 reason:(long long)arg2;
- (void)publishDataConfirmedForHandle:(id)arg1 localInterfaceIndex:(unsigned int)arg2 serviceSpecificInfo:(id)arg3;
- (void)publishStartedWithInstanceID:(unsigned char)arg1;
- (void)updateDatapathServiceSpecificInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateServiceSpecificInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)terminateDataSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 toPeerAddress:(id)arg2 withInstanceID:(unsigned char)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stop;
- (void)start;
- (void)startPublishSync;
- (BOOL)isConnected;
- (void)resetState;
- (void)handleError;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


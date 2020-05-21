//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADSingleton.h"

#import "ADOptInStatus_XPC.h"
#import "NSXPCListenerDelegate.h"

@class NSString, NSXPCListener;

@interface ADOptInStatusService : ADSingleton <NSXPCListenerDelegate, ADOptInStatus_XPC>
{
    BOOL _requestInFlight;
    NSXPCListener *_listener;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) BOOL requestInFlight; // @synthesize requestInFlight=_requestInFlight;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (id)optInStatusString:(long long)arg1;
- (void)advertisingIdentifier:(CDUnknownBlockType)arg1;
- (void)advertisingIdentifierChanged:(CDUnknownBlockType)arg1;
- (long long)optInStatusFromRecord:(id)arg1;
- (void)requestOptInStatusFromJingle:(CDUnknownBlockType)arg1;
- (void)clearAdvertisingIdentifier;
- (void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)reconcileAndUpdateBeforeResponding:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)callOptInStatusCompletionHandler:(long long)arg1 refreshWeakToken:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setOptInStatus:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


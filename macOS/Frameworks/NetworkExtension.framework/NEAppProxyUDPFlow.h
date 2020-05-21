//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEAppProxyFlow.h>

@class NWEndpoint;

@interface NEAppProxyUDPFlow : NEAppProxyFlow
{
    NWEndpoint *_localEndpoint;
}

- (void).cxx_destruct;
@property(readonly) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
- (id)description;
- (void)writeDatagrams:(id)arg1 sentByEndpoints:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readDatagramsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openWithLocalEndpoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithNEFlow:(struct _NEFlow *)arg1 queue:(id)arg2;

@end


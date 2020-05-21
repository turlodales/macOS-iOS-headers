//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HAPAccessoryServerBrowser : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _linkType;
    id <HAPKeyStore> _keyStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <HAPKeyStore> keyStore; // @synthesize keyStore=_keyStore;
@property(readonly, nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end


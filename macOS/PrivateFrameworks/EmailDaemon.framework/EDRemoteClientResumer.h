//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDResumable-Protocol.h>

@class EDRemoteClient, NSString;

@interface EDRemoteClientResumer : NSObject <EDResumable>
{
    EDRemoteClient *_remoteClient;
}

- (void).cxx_destruct;
@property __weak EDRemoteClient *remoteClient; // @synthesize remoteClient=_remoteClient;
- (void)resumeForUpdates;
- (id)initWithRemoteClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


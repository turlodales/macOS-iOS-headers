//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCListener, NSXPCListenerEndpoint, NSXPCStoreServer;

@interface PLXPCPhotoLibraryStoreContainer : NSObject
{
    NSXPCStoreServer *_server;
    NSXPCListener *_listener;
}

+ (id)newContainerWithPathManager:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSXPCStoreServer *server; // @synthesize server=_server;
@property(readonly) NSXPCListenerEndpoint *listenerEndpoint;
- (id)initWithServer:(id)arg1 listener:(id)arg2;

@end


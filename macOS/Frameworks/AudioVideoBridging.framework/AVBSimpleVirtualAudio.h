//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface AVBSimpleVirtualAudio : NSObject
{
    NSXPCConnection *_daemonConnection;
    id <ADDDeviceService> _daemonObject;
}

+ (id)simpleVirtualAudio;
- (void)dealloc;
- (void)getSimpleVirtualAudioInterfaceList:(CDUnknownBlockType)arg1;
- (void)removeSimpleVirtualAudioOnInterface:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addSimpleVirtualAudioOnInterface:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end


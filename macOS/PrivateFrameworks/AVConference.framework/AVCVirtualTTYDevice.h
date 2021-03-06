//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient;
@protocol AVCVirtualTTYDeviceDelegate;

@interface AVCVirtualTTYDevice : NSObject
{
    AVConferenceXPCClient *_connection;
    id _delegate;
    BOOL _isStarted;
}

- (void)terminateSession;
- (void)deregisterBlocksForDelegateNotifications;
- (void)registerBlocksForDelegateNotifications;
- (BOOL)sendText:(id)arg1;
- (id)sendCharacter:(unsigned short)arg1;
- (void)stop;
- (void)start;
@property(nonatomic) id <AVCVirtualTTYDeviceDelegate> delegate;
- (void)dealloc;
- (id)initWithMode:(long long)arg1 error:(id *)arg2 streamToken:(long long)arg3;
- (id)initWithMode:(long long)arg1 error:(id *)arg2;
- (id)initWithStreamToken:(long long)arg1 error:(id *)arg2;

@end


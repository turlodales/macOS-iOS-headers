//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface RemoteDeviceManager : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

- (void)sendMessage:(const char *)arg1 args:(id)arg2;
- (void)disconnectDevice:(id)arg1;
- (void)dealloc;
- (id)init;

@end


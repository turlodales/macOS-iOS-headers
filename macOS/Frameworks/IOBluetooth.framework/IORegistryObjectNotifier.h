//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IORegistryObjectNotifier : NSObject
{
    id _connectObserver;
    SEL _connectSelector;
    id _disconnectObserver;
    SEL _disconnectSelector;
    struct IONotificationPort *_IORegistryObjectNotifierNotificationPort;
    unsigned int _deviceConnectNotification;
    unsigned int _deviceDisconnectNotification;
}

+ (BOOL)objectPresent:(id)arg1;
- (void)removeAllObservers;
- (BOOL)setDisconnectObserver:(id)arg1 selector:(SEL)arg2;
- (BOOL)setConnectObserver:(id)arg1 selector:(SEL)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initForObjectsOfClass:(id)arg1 observer:(id)arg2 selector:(SEL)arg3;
- (id)initForObjectsOfClass:(id)arg1;
- (id)init;
- (void)releaseAllPorts;
- (int)setupNotificationPort;
- (void)objectDisconnected:(id)arg1;
- (void)objectConnected:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, VKMapView;

@interface MIController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    VKMapView *_mapView;
    BOOL _isActive;
}

+ (id)sharedController;
@property(readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
- (void)decodeDebugTreeData:(id)arg1;
- (void)sendData:(id)arg1;
- (void)recievedData:(id)arg1;
- (void)handleXPCEvent:(id)arg1;
- (void)deactivateController;
- (void)activateController:(id)arg1;
- (id)init;

@end


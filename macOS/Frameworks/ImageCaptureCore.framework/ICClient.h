//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface ICClient : NSObject
{
    struct os_unfair_lock_s _resourceLock;
    BOOL _openSession;
    BOOL _forwardPTPEvents;
    NSXPCConnection *_connection;
    NSMutableArray *_notifications;
    unsigned long long _objectHandle;
}

@property BOOL forwardPTPEvents; // @synthesize forwardPTPEvents=_forwardPTPEvents;
@property unsigned long long objectHandle; // @synthesize objectHandle=_objectHandle;
@property BOOL openSession; // @synthesize openSession=_openSession;
@property(readonly) NSMutableArray *notifications; // @synthesize notifications=_notifications;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)remNotifications:(id)arg1;
- (void)addNotifications:(id)arg1;
- (BOOL)interestedInNotification:(id)arg1;
- (void)dealloc;
- (void)unlock;
- (void)lock;
@property(readonly) int pid; // @dynamic pid;
- (id)initWithConnection:(id)arg1;

@end


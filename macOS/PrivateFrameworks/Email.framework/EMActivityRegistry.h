//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EMRemoteConnection, NSMapTable;

@interface EMActivityRegistry : NSObject
{
    NSMapTable *_observerWrappersByObserver;
    struct os_unfair_lock_s _lock;
    EMRemoteConnection *_connection;
}

+ (id)observerInterface;
+ (id)remoteInterface;
- (void).cxx_destruct;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (id)registerActivityObserver:(id)arg1;
- (id)initWithRemoteConnection:(id)arg1;

@end


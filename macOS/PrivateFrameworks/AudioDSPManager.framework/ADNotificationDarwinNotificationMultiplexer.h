//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface ADNotificationDarwinNotificationMultiplexer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_callbacksByNotificationName;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *callbacksByNotificationName; // @synthesize callbacksByNotificationName=_callbacksByNotificationName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)unregisterNotificationToken:(id)arg1;
- (id)registerForNotification:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotificationCenter, NSObject<OS_dispatch_queue>;

@interface MDSNotificationCenter : NSObject
{
    NSNotificationCenter *_localCenter;
    NSObject<OS_dispatch_queue> *_postingQueue;
}

+ (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (void)postNotificationName:(id)arg1 object:(id)arg2;
+ (void)postNotification:(id)arg1;
+ (id)currentCenter;
+ (void)initialize;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotification:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end


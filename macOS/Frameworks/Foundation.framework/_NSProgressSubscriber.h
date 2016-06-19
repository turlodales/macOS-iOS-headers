//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSProgressSubscriber.h"

@class NSLock, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _NSProgressSubscriber : NSObject <NSProgressSubscriber>
{
    CDUnknownBlockType _publishingHandler;
    NSString *_subscriberID;
    NSMutableDictionary *_proxiesByPublisherID;
    BOOL _started;
    NSLock *_lock;
}

- (oneway void)removePublisherForID:(id)arg1;
- (oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(BOOL)arg4;
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4;
- (void)stop;
- (void)startForFileURL:(id)arg1;
- (void)startForCategory:(id)arg1;
- (void)dealloc;
- (id)initWithPublishingHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


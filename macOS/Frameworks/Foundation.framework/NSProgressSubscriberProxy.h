//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSProgressSubscriber.h"

@class NSFileAccessNode, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSProgressSubscriberProxy : NSObject <NSProgressSubscriber>
{
    id <NSProgressSubscriber> _forwarder;
    id _subscriberID;
    NSString *_bundleID;
    NSString *_lowerCaseCategoryName;
    NSFileAccessNode *_itemLocation;
    NSXPCConnection *_connection;
}

@property(copy) NSString *category; // @synthesize category=_lowerCaseCategoryName;
- (BOOL)isFromConnection:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndenting:(id)arg1;
- (oneway void)removePublisherForID:(id)arg1;
- (oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;
- (oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4;
@property NSFileAccessNode *itemLocation;
- (id)appBundleID;
- (void)dealloc;
- (id)initWithForwarder:(id)arg1 onConnection:(id)arg2 subscriberID:(id)arg3 appBundleID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol BacklightdXPCProtocol <NSObject>
- (void)registerNotificationForProperties:(NSArray *)arg1;
- (void)reconnect;
- (void)clientCopyPropertyWithKey:(id)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)clientSetPropertyWithKey:(id)arg1 property:(NSArray *)arg2;
@end


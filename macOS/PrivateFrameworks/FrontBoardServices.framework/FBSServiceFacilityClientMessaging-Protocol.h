//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSXPCMessage, NSObject<OS_dispatch_queue>;

@protocol FBSServiceFacilityClientMessaging <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
- (void)sendMessage:(FBSXPCMessage *)arg1 withType:(long long)arg2 replyHandler:(void (^)(FBSXPCMessage *))arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5;
- (void)sendMessage:(FBSXPCMessage *)arg1 withType:(long long)arg2;
@end


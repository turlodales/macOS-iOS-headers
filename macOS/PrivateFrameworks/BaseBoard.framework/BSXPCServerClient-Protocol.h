//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSObject;
@protocol OS_xpc_object;

@protocol BSXPCServerClient <NSObject>
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)invalidate;
- (void)suspend;
- (void)resume;
@end


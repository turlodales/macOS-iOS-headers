//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_RWIClientToRelayMessageProxy.h"

@class RWITarget;

__attribute__((visibility("hidden")))
@interface RWIServiceConnection : NSObject <_RWIClientToRelayMessageProxy>
{
    RWITarget *_target;
    id <RWIServiceConnectionDelegate> _delegate;
    BOOL _closed;
}

@property(nonatomic) __weak id <RWIServiceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) RWITarget *target; // @synthesize target=_target;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dispatchRelayMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)closeInternal;
- (BOOL)isConnected;
- (void)closeFromConnection;
- (void)close;
- (void)_closeAndNotifyDelegate:(BOOL)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 delegate:(id)arg2;

@end


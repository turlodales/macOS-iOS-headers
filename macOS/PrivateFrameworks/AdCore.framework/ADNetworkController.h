//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSTimer;

@interface ADNetworkController : NSObject
{
    struct __SCDynamicStore *_store;
    NSTimer *_notificationTimer;
    int _networkType;
    struct __SCNetworkReachability *_reachability;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _canReachTheNetwork;
    BOOL _isUpdating;
}

+ (id)sharedNetworkController;
- (void).cxx_destruct;
@property BOOL isUpdating; // @synthesize isUpdating=_isUpdating;
@property BOOL canReachTheNetwork; // @synthesize canReachTheNetwork=_canReachTheNetwork;
- (void)_checkForNetworkAndNotify;
- (void)_checkForNetwork;
- (id)getDataContext:(id)arg1;
- (int)cellNetworkType;
- (int)dataIndicatorToConnection:(int)arg1;
- (int)networkType;
- (void)start;
- (void)_updateStatus:(BOOL)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _FBSDisplayLayoutService;

@interface _FBSDisplayLayoutEndpointServices : NSObject
{
    _FBSDisplayLayoutService *_sharedLock_services[3];
    unsigned long long _sharedLock_servicesRefCnt[3];
}

+ (void)_checkinService:(id)arg1;
+ (id)_checkoutServiceWithEndpoint:(id)arg1 qos:(BOOL)arg2;
- (void).cxx_destruct;

@end


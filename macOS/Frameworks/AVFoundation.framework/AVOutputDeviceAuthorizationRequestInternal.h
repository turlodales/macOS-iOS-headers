//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceAuthorizationRequestInternal : NSObject
{
    id <AVOutputDeviceAuthorizationRequestImpl> impl;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long status;
    NSError *error;
}

@end


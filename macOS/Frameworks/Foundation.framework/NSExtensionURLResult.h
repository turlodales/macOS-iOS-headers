//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>, NSURL;

__attribute__((visibility("hidden")))
@interface NSExtensionURLResult : NSObject
{
    NSObject<OS_dispatch_semaphore> *_sema;
    NSURL *_url;
    struct os_unfair_lock_s _lock;
}

- (void)dealloc;
- (BOOL)wait:(double)arg1;
- (void)signal;
@property(copy, setter=setURL:) NSURL *url;
- (id)copiedURL;
- (id)init;

@end


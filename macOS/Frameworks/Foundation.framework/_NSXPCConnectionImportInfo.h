//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionImportInfo : NSObject
{
    unsigned long long _generationCount;
    struct __CFDictionary *_proxyNumberToCount;
    void *_secTaskRef;
    struct os_unfair_lock_s _lock;
    BOOL _secTaskClearedOnce;
}

- (void)_clearEntitlementCache;
- (id)_valueForEntitlement:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;
- (BOOL)removeProxy:(id)arg1;
- (void)addProxy:(id)arg1;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RMPolicyStore : NSObject
{
    id _policyChangeLock;
}

- (void).cxx_destruct;
- (void)_setCurrentPolicyByKey:(id)arg1;
- (id)currentPolicyByKey;
- (id)policyWithKey:(id)arg1;
- (void)removePolicyWithKey:(id)arg1;
- (void)addOrUpdatePolicy:(id)arg1;
- (id)init;

@end


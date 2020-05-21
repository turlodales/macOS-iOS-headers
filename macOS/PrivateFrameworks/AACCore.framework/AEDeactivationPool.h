//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface AEDeactivationPool : NSObject
{
    NSArray *_persistentDeactivations;
    id <AEPolicyStore> _policyStore;
    id <AEPerformancePrimitives> _performancePrimitives;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AEPerformancePrimitives> performancePrimitives; // @synthesize performancePrimitives=_performancePrimitives;
@property(readonly, nonatomic) id <AEPolicyStore> policyStore; // @synthesize policyStore=_policyStore;
@property(readonly, copy, nonatomic) NSArray *persistentDeactivations; // @synthesize persistentDeactivations=_persistentDeactivations;
- (void)deactivateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 persistentDeactivations:(id)arg3;

@end


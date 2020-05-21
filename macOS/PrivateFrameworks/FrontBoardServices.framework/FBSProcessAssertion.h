//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class BKSProcessAssertion, FBSProcessExecutionPolicy, NSString;

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding>
{
    NSString *_name;
    id <FBSProcess> _process;
    FBSProcessExecutionPolicy *_policy;
    unsigned long long _activationCount;
    BOOL _invalidated;
    BKSProcessAssertion *_assertion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
@property(readonly, nonatomic) unsigned long long activationCount; // @synthesize activationCount=_activationCount;
@property(readonly, nonatomic) FBSProcessExecutionPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak id <FBSProcess> process; // @synthesize process=_process;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic, getter=isActivated) BOOL activated;
- (void)dealloc;
- (id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


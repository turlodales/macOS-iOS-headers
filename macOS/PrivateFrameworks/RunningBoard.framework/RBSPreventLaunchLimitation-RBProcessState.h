//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RBSPreventLaunchLimitation.h"

@interface RBSPreventLaunchLimitation (RBProcessState)
- (BOOL)conflictsWithAttribute:(id)arg1;
- (BOOL)isValidForContext:(id)arg1 withError:(id *)arg2;
- (void)applyToAcquisitionContext:(id)arg1;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
@end


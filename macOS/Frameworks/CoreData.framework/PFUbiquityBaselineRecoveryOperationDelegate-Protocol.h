//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, PFUbiquityBaseline, PFUbiquityBaselineRecoveryOperation;

@protocol PFUbiquityBaselineRecoveryOperationDelegate <NSObject>
- (void)recoveryOperation:(PFUbiquityBaselineRecoveryOperation *)arg1 encounteredAnError:(NSError *)arg2 duringRecoveryOfBaseline:(PFUbiquityBaseline *)arg3;
- (void)recoveryOperation:(PFUbiquityBaselineRecoveryOperation *)arg1 didReplaceLocalStoreFileWithBaseline:(PFUbiquityBaseline *)arg2;
@end


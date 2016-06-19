//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _AMMessageTracerUtilities : NSObject
{
}

+ (void)loadTypesFromAction:(id)arg1 intoDictionary:(id)arg2;
+ (id)identifierForAction:(id)arg1 withResult:(id)arg2;
+ (id)identifierForAction:(id)arg1;
+ (long long)countOfInput:(id)arg1;
+ (void)logActionRun:(id)arg1;
+ (void)logWorkflowRun:(id)arg1;
+ (void)logAMWorkflowRun;
+ (void)logTypes:(id)arg1;
+ (void)logWithDomain:(id)arg1 forAction:(id)arg2 withInput:(id)arg3 duration:(double)arg4 error:(id)arg5 workflowID:(id)arg6 executionID:(id)arg7;
+ (void)logWorkflowDuration:(double)arg1 workflowID:(id)arg2 executionID:(id)arg3;
+ (void)logTimeIntervalSinceAutomatorLaunch:(double)arg1;
+ (void)logMessageForDomain:(id)arg1 signatures:(id)arg2 values:(id)arg3 result:(id)arg4 message:(id)arg5 uuid:(id)arg6;
+ (void)initialize;

@end


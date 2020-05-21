//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OS_sec_experiment.h"

@class NSString, SecExperiment;

__attribute__((visibility("hidden")))
@interface SecExpConcrete_sec_experiment : NSObject <OS_sec_experiment>
{
    SecExperiment *innerExperiment;
    unsigned long long numRuns;
    unsigned long long successRuns;
}

- (void).cxx_destruct;
- (id)copyExperimentConfiguration;
- (BOOL)isSamplingDisabled;
- (BOOL)isSamplingDisabledWithDefault:(BOOL)arg1;
- (BOOL)experimentIsAllowedForProcess;
- (const char *)identifier;
- (const char *)name;
- (id)initWithInnerExperiment:(id)arg1;
- (id)initWithName:(const char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


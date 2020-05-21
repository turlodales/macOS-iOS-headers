//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PREResponsesMetricsProtocol.h"

@class NSObject<PREResponsesTrialProtocol>, NSString, PETEventTracker2;

@interface PREResponsesMetricsPET : NSObject <PREResponsesMetricsProtocol>
{
    PETEventTracker2 *_tracker;
    NSObject<PREResponsesTrialProtocol> *_trial;
    BOOL _isApricotDevice;
    NSString *_processName;
}

- (void).cxx_destruct;
- (id)tracker;
- (BOOL)isApricotDevice;
- (void)registerResponseTapped:(id)arg1;
- (id)_responseListFromGeneratedEvent:(id)arg1;
- (void)registerResponsesGenerated:(id)arg1;
- (id)initWithTracker:(id)arg1 trial:(id)arg2;
- (id)initWithTrial:(id)arg1;

@end


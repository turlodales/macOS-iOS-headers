//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SDRDiagnosticReporter;

@interface SRFBugReporter : NSObject
{
    SDRDiagnosticReporter *_diagnosticReporter;
}

+ (id)sharedReporter;
- (void).cxx_destruct;
@property(retain) SDRDiagnosticReporter *diagnosticReporter; // @synthesize diagnosticReporter=_diagnosticReporter;
- (void)reportIssue:(id)arg1 subtype:(id)arg2 description:(id)arg3;
- (void)reportIssue:(id)arg1 subtype:(id)arg2 description:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end


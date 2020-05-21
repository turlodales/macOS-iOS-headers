//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSUUID;

@interface EOSDiagnosticSummary : NSObject
{
    BOOL _userAuth;
    BOOL _preflighted;
    BOOL _restoreAfterBootFailure;
    BOOL _submittedFailureLogsToCrashReporter;
    NSString *_fromBuild;
    NSString *_productionMode;
    NSString *_clientName;
    NSString *_toBuild;
    NSString *_toVariant;
    NSString *_installType;
    unsigned long long _retries;
    NSError *_error;
    long long _failingPhase;
    NSUUID *_uuid;
}

- (void).cxx_destruct;
@property BOOL submittedFailureLogsToCrashReporter; // @synthesize submittedFailureLogsToCrashReporter=_submittedFailureLogsToCrashReporter;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property long long failingPhase; // @synthesize failingPhase=_failingPhase;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL restoreAfterBootFailure; // @synthesize restoreAfterBootFailure=_restoreAfterBootFailure;
@property unsigned long long retries; // @synthesize retries=_retries;
@property(retain) NSString *installType; // @synthesize installType=_installType;
@property BOOL preflighted; // @synthesize preflighted=_preflighted;
@property BOOL userAuth; // @synthesize userAuth=_userAuth;
@property(retain) NSString *toVariant; // @synthesize toVariant=_toVariant;
@property(retain) NSString *toBuild; // @synthesize toBuild=_toBuild;
@property(retain) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain) NSString *productionMode; // @synthesize productionMode=_productionMode;
@property(retain) NSString *fromBuild; // @synthesize fromBuild=_fromBuild;
- (void)_addRestoreUUIDToNVRAM;
- (BOOL)_submitFailureLogsToCrashReporter;
- (void)_submitToInstallerDiagnostics;
- (id)_summaryForLogging;
- (void)_populateInformationFromCurrentDevice;
- (void)submitDiagnostics;
- (id)init;

@end


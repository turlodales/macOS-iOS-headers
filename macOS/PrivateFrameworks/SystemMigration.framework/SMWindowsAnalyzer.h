//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, SMSystem_Daemon, SMSystem_Daemon_Windows;

@interface SMWindowsAnalyzer : NSObject
{
    BOOL _finished;
    BOOL _cancelled;
    SMSystem_Daemon_Windows *_system;
    SMSystem_Daemon *_comparisonSystem;
    NSArray *_customPaths;
    NSObject<OS_dispatch_queue> *_analysisQueue;
    unsigned long long _customSystemPathsSize;
    unsigned long long _customSystemToUserPathsSize;
    NSMutableDictionary *_customUserToUserPathSizes;
    NSMutableDictionary *_customUserToSystemPathSizes;
    NSMutableDictionary *_preliminaryComponentSizeDelegates;
    NSMutableArray *_preliminaryCustomPathsSizeDelegates;
}

+ (BOOL)hasCustomPaths;
+ (id)loadCustomPathsFromProfile;
+ (id)customPathsFromProfile:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSMutableArray *preliminaryCustomPathsSizeDelegates; // @synthesize preliminaryCustomPathsSizeDelegates=_preliminaryCustomPathsSizeDelegates;
@property(retain) NSMutableDictionary *preliminaryComponentSizeDelegates; // @synthesize preliminaryComponentSizeDelegates=_preliminaryComponentSizeDelegates;
@property(retain) NSMutableDictionary *customUserToSystemPathSizes; // @synthesize customUserToSystemPathSizes=_customUserToSystemPathSizes;
@property(retain) NSMutableDictionary *customUserToUserPathSizes; // @synthesize customUserToUserPathSizes=_customUserToUserPathSizes;
@property unsigned long long customSystemToUserPathsSize; // @synthesize customSystemToUserPathsSize=_customSystemToUserPathsSize;
@property unsigned long long customSystemPathsSize; // @synthesize customSystemPathsSize=_customSystemPathsSize;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property BOOL finished; // @synthesize finished=_finished;
@property(retain) NSObject<OS_dispatch_queue> *analysisQueue; // @synthesize analysisQueue=_analysisQueue;
@property(retain) NSArray *customPaths; // @synthesize customPaths=_customPaths;
@property(retain, nonatomic) SMSystem_Daemon *comparisonSystem; // @synthesize comparisonSystem=_comparisonSystem;
@property(retain, nonatomic) SMSystem_Daemon_Windows *system; // @synthesize system=_system;
- (void)messageTraceAnalysis;
- (void)removePreliminaryCustomPathsSizeDelegate:(id)arg1;
- (void)addPreliminaryCustomPathsSizeDelegate:(id)arg1;
- (void)notifyPreliminarySizeDelegatesForCustomPaths:(unsigned long long)arg1 type:(unsigned long long)arg2 user:(id)arg3;
- (void)removePreliminarySizeDelegate:(id)arg1 forComponent:(id)arg2;
- (void)addPreliminarySizeDelegate:(id)arg1 forComponent:(id)arg2;
- (void)notifyPreliminarySizeDelegatesForComponent:(id)arg1 preliminarySize:(unsigned long long)arg2;
- (id)customPathsFromProfile;
- (void)sizeOfCustomPathsType:(unsigned long long)arg1 user:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)sizeOfComponent:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (void)cancelAnalysis;
- (BOOL)isSystemAnalyzed;
- (void)ensureSystemIsAnalyzed;
- (void)doAnalysis;
- (void)analyzeSystem;
- (id)initWithSystem:(id)arg1 comparisonSystem:(id)arg2;

@end


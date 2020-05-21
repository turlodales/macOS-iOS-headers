//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DataDetectorsNaturalLanguage/IPFeatureScanner.h>

@class NSArray, NSMutableArray;

@interface IPFeatureTextMessageScanner : IPFeatureScanner
{
    BOOL _followProposal;
    NSArray *_contextMessageUnits;
    NSMutableArray *_detectedEventsInContext;
    NSMutableArray *_dataFeaturesExtractedInContextAndMain;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *dataFeaturesExtractedInContextAndMain; // @synthesize dataFeaturesExtractedInContextAndMain=_dataFeaturesExtractedInContextAndMain;
@property BOOL followProposal; // @synthesize followProposal=_followProposal;
@property(retain) NSMutableArray *detectedEventsInContext; // @synthesize detectedEventsInContext=_detectedEventsInContext;
@property(retain) NSArray *contextMessageUnits; // @synthesize contextMessageUnits=_contextMessageUnits;
- (id)commonComponentsForConfidence;
- (id)eventSpecificComponentsForConfidence:(id)arg1;
- (double)experimentalConfidenceForEvent:(id)arg1 experimentalBaseConfidence:(double)arg2;
- (void)experimentalConfidenceForEvents:(id)arg1;
- (double)confidenceForEvent:(id)arg1 baseConfidence:(double)arg2;
- (void)confidenceForEvents:(id)arg1;
- (void)resetScanState;
- (unsigned long long)mainSentencePolarityFromMessageUnit:(id)arg1 index:(unsigned long long)arg2;
- (id)keywordFeaturesForMessageUnit:(id)arg1;
- (id)sentenceFeaturesForMessageUnit:(id)arg1;
- (id)dataDetectorsFeaturesForMessageUnit:(id)arg1 context:(id)arg2;
- (id)processScanOfMainMessageUnit:(id)arg1 contextMessageUnits:(id)arg2;
- (unsigned long long)mainSentencePolarityFrom:(id)arg1;
- (void)doSynchronousScanWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)scanEventsInMessageUnits:(id)arg1 contextMessageUnits:(id)arg2 synchronously:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


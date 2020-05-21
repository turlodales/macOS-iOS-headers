//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SNResultsGating.h"
#import "SNTimeConverting.h"

@class AVAudioFormat, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, SNAudioProcessorCache;

@interface SNAudioStreamAnalyzer : NSObject <SNTimeConverting, SNResultsGating>
{
    SNAudioProcessorCache *_processorCache;
    struct list<SoundAnalysis::ProcessingContext, std::__1::allocator<SoundAnalysis::ProcessingContext>> _processingContexts;
    struct ProcessingTree _processingTree;
    AVAudioFormat *_currentFormat;
    NSArray *_requests;
    NSMutableArray *_analyzerInfos;
    BOOL _shouldRebuildProcessingTree;
    BOOL _isInErrorState;
    NSObject<OS_dispatch_queue> *_analyzerQueue;
    BOOL _shouldProduceResults;
}

+ (void)validateFormatIsPCM:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldProduceResults; // @synthesize shouldProduceResults=_shouldProduceResults;
- (id)detailedDescription;
- (void)writeDSPGraphDotFilesToDirectory:(id)arg1;
@property(readonly, nonatomic) double clientSampleRate;
- (long long)clientSampleTimeFromSampleTime:(long long)arg1 fromBox:(struct Box *)arg2;
- (void)handleAnalyzeAudioBufferError;
- (void)sendErrorToAllRequests:(id)arg1;
- (void)enterErrorState:(id)arg1;
- (void)_analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;
- (void)analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;
- (void)completeAnalysis;
- (void)analyzeAudioBufferList:(struct AudioBufferList *)arg1 withAudioFrameCount:(unsigned int)arg2 atAudioFramePosition:(long long)arg3;
- (BOOL)configureAnalysisTreeWithFormat:(id)arg1;
- (void)updateProcessingTreeFormat:(id)arg1;
- (BOOL)updateTreeProcessingContexts;
- (BOOL)configureAnalyzer:(id)arg1 withFormat:(id)arg2;
- (void)removeAllRequests;
- (void)_removeRequest:(id)arg1;
- (void)removeRequest:(id)arg1;
- (BOOL)_addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (void)removeAnalyzerInfoForRequest:(id)arg1;
- (id)createAnalyzerInfoForRequest:(id)arg1 resultsObserver:(id)arg2;
- (id)analyzerInfoForRequest:(id)arg1;
- (id)initWithFormat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


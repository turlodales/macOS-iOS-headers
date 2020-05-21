//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SNAnalyzing.h"

@class NSString, SNSystemConfiguration;

__attribute__((visibility("hidden")))
@interface SNDetectSignalThresholdRequestImpl : NSObject <SNAnalyzing>
{
    SNSystemConfiguration *_systemConfiguration;
    shared_ptr_f6ac7592 _graph;
    unsigned int _blockSize;
    double _sampleRate;
    double _magnitudeThreshold;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double magnitudeThreshold; // @synthesize magnitudeThreshold=_magnitudeThreshold;
@property(nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)sharedProcessorConfiguration;
@property(readonly, nonatomic) struct Box *resultsBox;
- (BOOL)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (void)updateGraph;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


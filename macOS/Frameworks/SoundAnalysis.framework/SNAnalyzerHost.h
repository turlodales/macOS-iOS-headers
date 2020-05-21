//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SNProcessing.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SNAnalyzerHost : NSObject <SNProcessing>
{
    id <SNAnalyzerProviding> _request;
    id <SNAnalyzing> _analyzer;
    id <SNTimeConverting> _timeConverter;
    id <SNResultsObserving> _resultsObserver;
    id <SNResultsGating> _resultsGater;
    long long _requestState;
}

- (void).cxx_destruct;
@property(nonatomic) long long requestState; // @synthesize requestState=_requestState;
- (void)primeAnalyzerGraph;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
@property(readonly, nonatomic) id sharedProcessorConfiguration;
- (void)requestDidReturnError:(id)arg1;
- (id)clientResultsFromProcessorResults:(id)arg1;
- (void)handleAnalyzerError:(id)arg1;
- (void)handleAnalyzerCompletion;
- (BOOL)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithRequest:(id)arg1 resultsObserver:(id)arg2 timeConverter:(id)arg3 resultsGater:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


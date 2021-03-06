//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, NLModelConfiguration, NLModelImpl, NSData, NSDictionary;
@protocol OS_dispatch_queue;

@interface NLModel : NSObject
{
    NLModelConfiguration *_configuration;
    NSDictionary *_infoDictionary;
    NLModelImpl *_modelImpl;
    NSData *_data;
    MLModel *_mlModel;
    void *_container;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

+ (id)modelWithData:(id)arg1 error:(id *)arg2;
+ (id)modelWithMLModel:(id)arg1 error:(id *)arg2;
+ (id)modelWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)testResultsWithDataSet:(id)arg1;
- (id)testResultsWithDataProvider:(id)arg1;
- (id)sequenceTestResultsWithDataProvider:(id)arg1;
- (id)classifierTestResultsWithDataProvider:(id)arg1;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (id)embeddingData;
- (id)embedding;
- (id)gazetteer;
- (id)documentFrequencyMap;
- (id)vocabularyMap;
- (id)labelArray;
- (id)labelMap;
- (unsigned long long)systemVersion;
- (id)mlModel;
@property(readonly, copy) NLModelConfiguration *configuration;
- (BOOL)writeMLModelToURL:(id)arg1 atomically:(BOOL)arg2 error:(id *)arg3;
- (BOOL)writeMLModelToURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 error:(id *)arg3;
- (id)data;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithMLModel:(id)arg1 error:(id *)arg2;
- (id)initWithClassifierMLModel:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 mlModel:(id)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 modelImpl:(id)arg2;

@end


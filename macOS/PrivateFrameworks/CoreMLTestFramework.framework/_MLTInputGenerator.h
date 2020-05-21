//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_MLTInputProvider.h"

@class MLModel, NSArray, NSDictionary, NSString, _MLTInputGeneratorUtils;

@interface _MLTInputGenerator : NSObject <_MLTInputProvider>
{
    BOOL _dataAvailable;
    NSString *_inputDataKey;
    NSString *_vecDataKey;
    NSString *_otherFrameWorkPredictionKey;
    NSString *_testCaseNameKey;
    NSArray *_outputTestData;
    NSDictionary *_inputDescriptions;
    NSDictionary *_outputDescriptions;
    MLModel *_model;
    struct __CVBuffer *_buffer;
    _MLTInputGeneratorUtils *_inputGeneratorUtils;
    NSArray *_testCases;
    unsigned long long _currentCase;
    _MLTInputGeneratorUtils *_util;
    long long _seed;
    unsigned long long _monteCarloCount;
}

+ (id)inputGeneratorWithModel:(id)arg1;
+ (id)inputGeneratorWithModel:(id)arg1 seed:(long long)arg2 monteCarloIterations:(unsigned long long)arg3;
- (void).cxx_destruct;
@property unsigned long long monteCarloCount; // @synthesize monteCarloCount=_monteCarloCount;
@property long long seed; // @synthesize seed=_seed;
@property(retain, nonatomic) _MLTInputGeneratorUtils *util; // @synthesize util=_util;
@property(nonatomic) unsigned long long currentCase; // @synthesize currentCase=_currentCase;
@property(retain, nonatomic) NSArray *testCases; // @synthesize testCases=_testCases;
@property(retain, nonatomic) _MLTInputGeneratorUtils *inputGeneratorUtils; // @synthesize inputGeneratorUtils=_inputGeneratorUtils;
@property(nonatomic) struct __CVBuffer *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) MLModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSDictionary *outputDescriptions; // @synthesize outputDescriptions=_outputDescriptions;
@property(retain, nonatomic) NSDictionary *inputDescriptions; // @synthesize inputDescriptions=_inputDescriptions;
@property(copy, nonatomic) NSArray *outputTestData; // @synthesize outputTestData=_outputTestData;
@property(copy, nonatomic) NSString *testCaseNameKey; // @synthesize testCaseNameKey=_testCaseNameKey;
@property(copy, nonatomic) NSString *otherFrameWorkPredictionKey; // @synthesize otherFrameWorkPredictionKey=_otherFrameWorkPredictionKey;
@property(copy, nonatomic) NSString *vecDataKey; // @synthesize vecDataKey=_vecDataKey;
@property(copy, nonatomic) NSString *inputDataKey; // @synthesize inputDataKey=_inputDataKey;
@property BOOL dataAvailable; // @synthesize dataAvailable=_dataAvailable;
- (void)dealloc;
- (id)nextDataSet:(id *)arg1;
- (id)allDataSets:(id *)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 seed:(long long)arg2 monteCarloIterations:(unsigned long long)arg3;

@end


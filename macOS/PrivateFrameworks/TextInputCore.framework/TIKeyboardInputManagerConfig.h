//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, TIInputMode;

@interface TIKeyboardInputManagerConfig : NSObject
{
    BOOL _allowsSpaceCorrections;
    BOOL _usesTextChecker;
    BOOL _usesRetrocorrection;
    BOOL _usesWordNgramModel;
    BOOL _usesAdaptation;
    BOOL _completionsShouldSharePrefix;
    BOOL _usesStemSuffixCorrectionFactor;
    BOOL _languageAllowsCP;
    BOOL _usesContinuousPath;
    BOOL _usesContinuousPathProgressiveCandidates;
    BOOL _continuousPathDeleteWholeWord;
    BOOL _continuousPathDetectPause;
    BOOL _continuousPathCompletesWords;
    BOOL _insertsSpaceAfterPredictiveInput;
    BOOL _usesContinuousPathRetrocorrection;
    BOOL _shouldIgnoreCPRequirements;
    BOOL _usesCJContinuousPath;
    BOOL _testing;
    BOOL _usesCustomNgramModel;
    BOOL _usesCustomStaticDictionary;
    BOOL _usesDODMLLogging;
    BOOL _sensorKitEnabled;
    BOOL _allowRelaxedOVSPolicy;
    BOOL _usesUserModelLogging;
    int _continuousPathEnabledAlgorithms;
    int _cpConfidenceModelType;
    TIInputMode *_inputMode;
    NSString *_staticDictionaryPath;
    NSString *_dynamicResourcePath;
    NSString *_ngramModelPath;
    NSString *_shapeStoreResourceDir;
    unsigned long long _maxWordsPerPrediction;
    NSDictionary *_continuousPathParams;
    double _continuousPathLanguageWeight;
    unsigned long long _sensorKitWordsThreshold;
}

+ (id)configurationForInputMode:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL usesUserModelLogging; // @synthesize usesUserModelLogging=_usesUserModelLogging;
@property(nonatomic) BOOL allowRelaxedOVSPolicy; // @synthesize allowRelaxedOVSPolicy=_allowRelaxedOVSPolicy;
@property(nonatomic) unsigned long long sensorKitWordsThreshold; // @synthesize sensorKitWordsThreshold=_sensorKitWordsThreshold;
@property(nonatomic) BOOL sensorKitEnabled; // @synthesize sensorKitEnabled=_sensorKitEnabled;
@property(nonatomic) BOOL usesDODMLLogging; // @synthesize usesDODMLLogging=_usesDODMLLogging;
@property(nonatomic) BOOL usesCustomStaticDictionary; // @synthesize usesCustomStaticDictionary=_usesCustomStaticDictionary;
@property(nonatomic) BOOL usesCustomNgramModel; // @synthesize usesCustomNgramModel=_usesCustomNgramModel;
@property(nonatomic, getter=isTesting) BOOL testing; // @synthesize testing=_testing;
@property(nonatomic) BOOL usesCJContinuousPath; // @synthesize usesCJContinuousPath=_usesCJContinuousPath;
@property(nonatomic) int cpConfidenceModelType; // @synthesize cpConfidenceModelType=_cpConfidenceModelType;
@property(nonatomic) BOOL shouldIgnoreCPRequirements; // @synthesize shouldIgnoreCPRequirements=_shouldIgnoreCPRequirements;
@property(nonatomic) BOOL usesContinuousPathRetrocorrection; // @synthesize usesContinuousPathRetrocorrection=_usesContinuousPathRetrocorrection;
@property(nonatomic) int continuousPathEnabledAlgorithms; // @synthesize continuousPathEnabledAlgorithms=_continuousPathEnabledAlgorithms;
@property(nonatomic) BOOL insertsSpaceAfterPredictiveInput; // @synthesize insertsSpaceAfterPredictiveInput=_insertsSpaceAfterPredictiveInput;
@property(nonatomic) BOOL continuousPathCompletesWords; // @synthesize continuousPathCompletesWords=_continuousPathCompletesWords;
@property(nonatomic) BOOL continuousPathDetectPause; // @synthesize continuousPathDetectPause=_continuousPathDetectPause;
@property(nonatomic) BOOL continuousPathDeleteWholeWord; // @synthesize continuousPathDeleteWholeWord=_continuousPathDeleteWholeWord;
@property(nonatomic) double continuousPathLanguageWeight; // @synthesize continuousPathLanguageWeight=_continuousPathLanguageWeight;
@property(nonatomic) BOOL usesContinuousPathProgressiveCandidates; // @synthesize usesContinuousPathProgressiveCandidates=_usesContinuousPathProgressiveCandidates;
@property(copy, nonatomic) NSDictionary *continuousPathParams; // @synthesize continuousPathParams=_continuousPathParams;
@property(nonatomic) BOOL usesContinuousPath; // @synthesize usesContinuousPath=_usesContinuousPath;
@property(nonatomic) BOOL languageAllowsCP; // @synthesize languageAllowsCP=_languageAllowsCP;
@property(nonatomic) BOOL usesStemSuffixCorrectionFactor; // @synthesize usesStemSuffixCorrectionFactor=_usesStemSuffixCorrectionFactor;
@property(nonatomic) BOOL completionsShouldSharePrefix; // @synthesize completionsShouldSharePrefix=_completionsShouldSharePrefix;
@property(nonatomic) unsigned long long maxWordsPerPrediction; // @synthesize maxWordsPerPrediction=_maxWordsPerPrediction;
@property(nonatomic) BOOL usesAdaptation; // @synthesize usesAdaptation=_usesAdaptation;
@property(nonatomic) BOOL usesWordNgramModel; // @synthesize usesWordNgramModel=_usesWordNgramModel;
@property(nonatomic) BOOL usesRetrocorrection; // @synthesize usesRetrocorrection=_usesRetrocorrection;
@property(nonatomic) BOOL usesTextChecker; // @synthesize usesTextChecker=_usesTextChecker;
@property(nonatomic) BOOL allowsSpaceCorrections; // @synthesize allowsSpaceCorrections=_allowsSpaceCorrections;
@property(copy, nonatomic) NSString *shapeStoreResourceDir; // @synthesize shapeStoreResourceDir=_shapeStoreResourceDir;
@property(copy, nonatomic) NSString *ngramModelPath; // @synthesize ngramModelPath=_ngramModelPath;
@property(copy, nonatomic) NSString *dynamicResourcePath; // @synthesize dynamicResourcePath=_dynamicResourcePath;
@property(copy, nonatomic) NSString *staticDictionaryPath; // @synthesize staticDictionaryPath=_staticDictionaryPath;
@property(retain, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
- (id)propertyList;
@property(nonatomic) BOOL usesWordNgramModelAdaptation;

@end


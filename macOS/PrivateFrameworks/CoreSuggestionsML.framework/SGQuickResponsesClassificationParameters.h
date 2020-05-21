//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SGQuickResponsesClassificationParameters : NSObject
{
    double _positiveSamplingRate;
    double _negativeSamplingRate;
    unsigned long long _maxPromptLength;
    double _maxPromptWindowSeconds;
    NSString *_promptJoiningString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *promptJoiningString; // @synthesize promptJoiningString=_promptJoiningString;
@property(readonly, nonatomic) double maxPromptWindowSeconds; // @synthesize maxPromptWindowSeconds=_maxPromptWindowSeconds;
@property(readonly, nonatomic) unsigned long long maxPromptLength; // @synthesize maxPromptLength=_maxPromptLength;
@property(readonly, nonatomic) double negativeSamplingRate; // @synthesize negativeSamplingRate=_negativeSamplingRate;
@property(readonly, nonatomic) double positiveSamplingRate; // @synthesize positiveSamplingRate=_positiveSamplingRate;
- (id)initWithDictionary:(id)arg1;

@end


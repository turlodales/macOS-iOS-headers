//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PRSRankingCosineComponents : NSObject
{
    NSArray *_termFrequencies;
    NSArray *_termFrequenciesWeighted;
    NSArray *_inverseDocFrequencies;
    NSArray *_termInverseDoc;
    NSArray *_termInverseDocWeighted;
    unsigned long long _fieldLength;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long fieldLength; // @synthesize fieldLength=_fieldLength;
@property(retain, nonatomic) NSArray *termInverseDocWeighted; // @synthesize termInverseDocWeighted=_termInverseDocWeighted;
@property(retain, nonatomic) NSArray *termInverseDoc; // @synthesize termInverseDoc=_termInverseDoc;
@property(retain, nonatomic) NSArray *inverseDocFrequencies; // @synthesize inverseDocFrequencies=_inverseDocFrequencies;
@property(retain, nonatomic) NSArray *termFrequenciesWeighted; // @synthesize termFrequenciesWeighted=_termFrequenciesWeighted;
@property(retain, nonatomic) NSArray *termFrequencies; // @synthesize termFrequencies=_termFrequencies;

@end


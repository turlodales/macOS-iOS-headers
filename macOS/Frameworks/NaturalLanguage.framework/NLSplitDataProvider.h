//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NaturalLanguage/NLDataProvider.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NLSplitDataProvider : NLDataProvider
{
    NLDataProvider *_dataProvider;
    NSArray *_indexes;
}

- (void).cxx_destruct;
- (unsigned long long)numberOfVocabularyEntries;
- (unsigned long long)numberOfLabels;
- (id)documentFrequencyMap;
- (id)vocabularyMap;
- (id)inverseLabelMap;
- (id)labelMap;
- (struct __CFStringTokenizer *)tokenizer;
- (void)_generateMaps;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfInstances;
- (id)configuration;
- (id)initWithDataProvider:(id)arg1 indexes:(id)arg2;

@end


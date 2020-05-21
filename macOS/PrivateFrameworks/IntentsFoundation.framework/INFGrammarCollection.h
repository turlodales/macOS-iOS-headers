//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface INFGrammarCollection : NSObject
{
    NSMutableDictionary *_tokensDictionary;
    NSMutableDictionary *_sentencesDictionary;
}

+ (id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3;
+ (id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2;
+ (id)grammarCollection;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sentencesDictionary; // @synthesize sentencesDictionary=_sentencesDictionary;
@property(retain, nonatomic) NSMutableDictionary *tokensDictionary; // @synthesize tokensDictionary=_tokensDictionary;
- (void)writeToFileAtPath:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSArray *tokens;
- (id)tokenWithIdentifier:(id)arg1;
- (void)addToken:(id)arg1;
- (id)createAdjectiveWithIdentifier:(id)arg1 language:(id)arg2;
- (id)createNounWithGender:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3;
- (id)createNounWithIdentifier:(id)arg1 language:(id)arg2;
@property(readonly, nonatomic) NSArray *sentences;
- (void)addSentence:(id)arg1;
- (id)sentenceWithIdentifier:(id)arg1;
- (id)createSentenceWithIdentifier:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithGrammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3;
- (id)init;

@end


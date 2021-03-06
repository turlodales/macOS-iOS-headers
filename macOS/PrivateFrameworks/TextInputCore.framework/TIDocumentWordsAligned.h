//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject
{
    NSMutableArray *_inDocumentWordsStack;
    NSMutableDictionary *_leftContextToWordMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *leftContextToWordMap; // @synthesize leftContextToWordMap=_leftContextToWordMap;
@property(retain, nonatomic) NSMutableArray *inDocumentWordsStack; // @synthesize inDocumentWordsStack=_inDocumentWordsStack;
- (id)lastWord;
- (id)description;
- (unsigned long long)wordsCount;
- (BOOL)deleteWordsUptoContext:(id)arg1;
- (id)updateWordEntryAtIndex:(unsigned long long)arg1 withAcceptedString:(id)arg2 documentContext:(id)arg3;
- (void)insertWord:(id)arg1 atIndex:(long long)arg2;
- (id)wordsForContext:(id)arg1;
- (void)removeFromContextMap:(id)arg1;
- (void)addToContextMap:(id)arg1;
- (void)pushWordToDocument:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IPMessage, NSArray, NSIndexSet, NSMutableArray, NSString;

@interface IPMessageUnit : NSObject
{
    NSMutableArray *_followups;
    NSArray *_flatMessageThread;
    NSArray *_features;
    NSArray *_sentenceFeatures;
    NSArray *_dataFeatures;
    NSArray *_keywordFeatures;
    NSIndexSet *_rejectionRanges;
    NSIndexSet *_proposalAndAcceptationRanges;
    NSIndexSet *_neutralRanges;
    NSString *_bestLanguage;
    NSString *_lowercaseText;
    NSString *_text;
    IPMessageUnit *_previous;
    IPMessage *_originalMessage;
    long long _indexInOriginalMessage;
    struct _NSRange _interactedDateRange;
}

- (void).cxx_destruct;
@property struct _NSRange interactedDateRange; // @synthesize interactedDateRange=_interactedDateRange;
@property(readonly) long long indexInOriginalMessage; // @synthesize indexInOriginalMessage=_indexInOriginalMessage;
@property(readonly) __weak IPMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property(readonly) NSArray *keywordFeatures; // @synthesize keywordFeatures=_keywordFeatures;
@property(readonly) NSArray *dataFeatures; // @synthesize dataFeatures=_dataFeatures;
@property(readonly) NSArray *sentenceFeatures; // @synthesize sentenceFeatures=_sentenceFeatures;
@property(readonly) __weak IPMessageUnit *previous; // @synthesize previous=_previous;
@property(readonly, copy) NSString *text; // @synthesize text=_text;
- (id)description;
- (id)bestLanguageID;
- (id)proposalAndAcceptationRanges;
- (id)neutralRanges;
- (id)rejectionRanges;
@property(readonly) NSArray *features; // @synthesize features=_features;
@property(readonly, copy) NSString *lowercaseText;
- (void)setKeywordFeatures:(id)arg1;
- (void)setDataFeatures:(id)arg1;
- (void)setSentenceFeatures:(id)arg1;
- (void)setFeatures:(id)arg1;
@property(readonly) NSArray *followups;
- (void)addFollowup:(id)arg1;
- (id)initWithText:(id)arg1 originalMessage:(id)arg2 index:(long long)arg3;

@end


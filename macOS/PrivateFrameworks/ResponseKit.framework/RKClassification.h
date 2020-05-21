//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface RKClassification : NSObject
{
    int _sensitive;
    NSString *_language;
    unsigned long long _sentenceType;
    unsigned long long _gender;
    NSArray *_customResponses;
    NSString *_taggedText;
    NSArray *_sentenceEntities;
    NSArray *_matchedRanges;
}

- (void).cxx_destruct;
@property(retain) NSArray *matchedRanges; // @synthesize matchedRanges=_matchedRanges;
@property(retain) NSArray *sentenceEntities; // @synthesize sentenceEntities=_sentenceEntities;
@property(retain) NSString *taggedText; // @synthesize taggedText=_taggedText;
@property(retain) NSArray *customResponses; // @synthesize customResponses=_customResponses;
@property unsigned long long gender; // @synthesize gender=_gender;
@property(getter=isSensitive) int sensitive; // @synthesize sensitive=_sensitive;
@property unsigned long long sentenceType; // @synthesize sentenceType=_sentenceType;
@property(retain) NSString *language; // @synthesize language=_language;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface MMScanner : NSObject
{
    NSString *_string;
    NSArray *_lineRanges;
    unsigned long long _startLocation;
    unsigned long long _rangeIndex;
    NSMutableArray *_transactions;
    struct _NSRange _currentRange;
}

+ (id)scannerWithString:(id)arg1 lineRanges:(id)arg2;
+ (id)scannerWithString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *transactions; // @synthesize transactions=_transactions;
@property(nonatomic) unsigned long long rangeIndex; // @synthesize rangeIndex=_rangeIndex;
@property(nonatomic) struct _NSRange currentRange; // @synthesize currentRange=_currentRange;
@property(nonatomic) unsigned long long startLocation; // @synthesize startLocation=_startLocation;
@property(readonly, copy, nonatomic) NSArray *lineRanges; // @synthesize lineRanges=_lineRanges;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, nonatomic) struct _NSRange currentLineRange;
- (unsigned long long)_locationOfCharacter:(unsigned short)arg1 inRange:(struct _NSRange)arg2;
- (id)_lineRangesForString:(id)arg1;
@property(nonatomic) unsigned long long location;
- (unsigned long long)skipWhitespaceAndNewlines;
- (unsigned long long)skipWhitespace;
- (unsigned long long)skipToLastCharacterOfLine;
- (unsigned long long)skipToEndOfLine;
- (unsigned long long)skipNestedBracketsWithDelimiter:(unsigned short)arg1;
- (unsigned long long)skipIndentationUpTo:(unsigned long long)arg1;
- (unsigned long long)skipEmptyLines;
- (unsigned long long)skipCharactersFromSet:(id)arg1 max:(unsigned long long)arg2;
- (unsigned long long)skipCharactersFromSet:(id)arg1;
- (BOOL)matchString:(id)arg1;
- (void)advanceToNextLine;
- (void)advance;
- (id)nextWordWithCharactersFromSet:(id)arg1;
- (id)previousWordWithCharactersFromSet:(id)arg1;
- (id)nextWord;
- (id)previousWord;
- (unsigned short)nextCharacter;
- (unsigned short)previousCharacter;
- (BOOL)atEndOfString;
- (BOOL)atEndOfLine;
- (BOOL)atBeginningOfLine;
- (void)commitTransaction:(BOOL)arg1;
- (void)beginTransaction;
- (id)initWithString:(id)arg1 lineRanges:(id)arg2;
- (id)initWithString:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface SGStringPreprocessor : NSObject
{
    NSMutableData *_buffer;
}

- (void).cxx_destruct;
- (void)addToEnd:(id)arg1 withValue:(id)arg2;
- (void)addToStart:(id)arg1 withValue:(id)arg2;
- (void)transformFullwidthToHalfwidthASCII:(id)arg1;
- (void)transformFullwidthToHalfwidth:(id)arg1;
- (void)removeSymbolsWithExceptions:(id)arg1 withValue:(id)arg2;
- (void)removeSymbols:(id)arg1;
- (void)removePunctuationWithExceptions:(id)arg1 withValue:(id)arg2;
- (void)replaceAllWhitespaceWithSpaces:(id)arg1;
- (void)removeNonBaseCharacters:(id)arg1;
- (void)stripNonBaseCharacters:(id)arg1;
- (void)stripCombiningMarks:(id)arg1;
- (void)decomposeAndRecomposeStringWithCompatibilityMapping:(id)arg1;
- (void)decomposeStringWithCompatibilityMapping:(id)arg1;
- (void)removeNonBasicMultilingualPlane:(id)arg1;
- (void)trimWhitespace:(id)arg1;
- (void)replaceLinksWithString:(id)arg1 withValue:(id)arg2;
- (void)mergeAnyConsecutiveCharacters:(id)arg1;
- (void)mergeTwoOrMoreConsecutiveCharacters:(id)arg1;
- (void)replaceNumbersWithString:(id)arg1 withValue:(id)arg2;
- (void)mergeNumbersSeparatedByASCIISpace:(id)arg1;
- (void)removeDuplicateWhitespace:(id)arg1;
- (void)removeSpacingModifierLetters:(id)arg1;
- (void)removePunctuation:(id)arg1;
- (void)removeNonASCII:(id)arg1;
- (void)replaceCharactersWithSpaces:(id)arg1 withValue:(id)arg2;
- (void)removeCharacters:(id)arg1 withValue:(id)arg2;
- (void)separateCharacter:(id)arg1 withValue:(id)arg2;
- (void)lowerCase:(id)arg1;
- (id)characterSetFromString:(id)arg1;
- (void)removeCharacters:(id)arg1 withExceptions:(id)arg2 fromString:(id)arg3;
- (void)replace:(id)arg1 withBuffer:(unsigned short *)arg2 toIndex:(unsigned long long)arg3;
- (unsigned short *)bufferPtrWithMinimumLength:(unsigned long long)arg1;
- (id)init;

@end


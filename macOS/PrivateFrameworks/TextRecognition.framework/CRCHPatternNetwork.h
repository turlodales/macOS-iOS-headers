//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface CRCHPatternNetwork : NSObject
{
    struct CRCHNetwork *_network;
    NSDictionary *_symbols;
    NSDictionary *_startEdges;
    NSDictionary *_startCursorForContentTypes;
}

+ (BOOL)isFinalCursor:(id)arg1 inNetwork:(id)arg2;
+ (id)cursorByAdvancingWithSymbol:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (id)cursorByAdvancingWithString:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (id)rootCursorForContentType:(int)arg1 inNetwork:(id)arg2;
+ (id)patternToSymbolMap;
+ (id)kUrlPatterns;
+ (id)kEmailPatterns;
+ (id)kDefaultPatterns;
+ (id)kDefaultPatternsPlusUrlsAndEmails;
- (void)dealloc;
- (id)initWithFile:(id)arg1;
- (id)advanceCursor:(id)arg1 withSymbol:(unsigned long long)arg2;

@end


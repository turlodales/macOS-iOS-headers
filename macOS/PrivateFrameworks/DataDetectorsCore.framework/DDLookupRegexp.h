//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsCore/DDBasicRegexp.h>

#import <DataDetectorsCore/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDLookupRegexp : DDBasicRegexp <NSCopying>
{
    long long _tokenId;
    NSString *_name;
}

- (void)appendDescriptionToString:(id)arg1 depth:(int)arg2;
- (id)prettyPrintWithPriority:(int)arg1;
- (int)splitRegexpWithDelegate:(id)arg1 owner:(id)arg2;
- (BOOL)acceptEmptyWordWithManager:(id)arg1;
- (long long)token;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)initWithTokenId:(long long)arg1;
- (id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3;
- (id)monElement;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class NSData, SISchemaLocaleIdentifier;

@interface SISchemaDictationAlternativesPresent : PBCodable
{
    BOOL _multilingualIsLowConfidence;
    int _numberOfUnderlines;
    int _countOfWordsUnderlined;
    SISchemaLocaleIdentifier *_alternativesLocale;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL multilingualIsLowConfidence; // @synthesize multilingualIsLowConfidence=_multilingualIsLowConfidence;
@property(retain, nonatomic) SISchemaLocaleIdentifier *alternativesLocale; // @synthesize alternativesLocale=_alternativesLocale;
@property(nonatomic) int countOfWordsUnderlined; // @synthesize countOfWordsUnderlined=_countOfWordsUnderlined;
@property(nonatomic) int numberOfUnderlines; // @synthesize numberOfUnderlines=_numberOfUnderlines;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end


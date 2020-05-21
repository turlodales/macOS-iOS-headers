//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBIntentSlotVocabularyPolicy.h"

@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyPolicy : PBCodable <_INPBIntentSlotVocabularyPolicy, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSArray *_intentSlotNames;
    NSArray *_intentSlotVocabularyConcepts;
}

+ (BOOL)supportsSecureCoding;
+ (Class)intentSlotVocabularyConceptsType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *intentSlotVocabularyConcepts; // @synthesize intentSlotVocabularyConcepts=_intentSlotVocabularyConcepts;
@property(copy, nonatomic) NSArray *intentSlotNames; // @synthesize intentSlotNames=_intentSlotNames;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)intentSlotVocabularyConceptsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentSlotVocabularyConceptsCount;
- (void)addIntentSlotVocabularyConcepts:(id)arg1;
- (void)clearIntentSlotVocabularyConcepts;
- (id)intentSlotNamesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentSlotNamesCount;
- (void)addIntentSlotNames:(id)arg1;
- (void)clearIntentSlotNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


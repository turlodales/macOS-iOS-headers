//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_PARSuggestion.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARSuggestion : PBCodable <_PARSuggestion, NSSecureCoding>
{
    int _type;
    float _score;
    NSString *_suggestion;
    NSString *_topic;
}

- (void).cxx_destruct;
@property(nonatomic) float score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


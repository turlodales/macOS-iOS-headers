//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_PARSearchResponse_QuerySuggestion.h"

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse_QuerySuggestion : PBCodable <_PARSearchResponse_QuerySuggestion, NSSecureCoding>
{
    BOOL _previouslyEngaged;
    float _score;
    NSString *_suggestion;
    NSString *_query;
    NSData *_feedback;
    NSArray *_entities;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) BOOL previouslyEngaged; // @synthesize previouslyEngaged=_previouslyEngaged;
@property(copy, nonatomic) NSData *feedback; // @synthesize feedback=_feedback;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (void)addEntities:(id)arg1;
- (void)clearEntities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


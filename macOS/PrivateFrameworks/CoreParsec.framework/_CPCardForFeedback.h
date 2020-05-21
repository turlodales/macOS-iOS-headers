//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPCardForFeedback.h"

@class NSArray, NSData, NSString;

@interface _CPCardForFeedback : PBCodable <_CPCardForFeedback, NSSecureCoding>
{
    NSArray *_cardSections;
    NSString *_fbr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(copy, nonatomic) NSArray *cardSections; // @synthesize cardSections=_cardSections;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)addCardSections:(id)arg1;
- (void)clearCardSections;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


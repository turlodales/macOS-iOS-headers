//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_PARBagResponse.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARBagResponse : PBCodable <_PARBagResponse, NSSecureCoding>
{
    NSData *_legacyJSON;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *legacyJSON; // @synthesize legacyJSON=_legacyJSON;
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


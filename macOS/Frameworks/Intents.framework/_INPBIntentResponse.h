//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBIntentResponsePayloadFailure, _INPBIntentResponsePayloadSuccess;

@interface _INPBIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBIntentResponsePayloadFailure *_PayloadFailure;
    _INPBIntentResponsePayloadSuccess *_PayloadSuccess;
    int _type;
    CDStruct_f953fb60 _has;
}

@property(retain, nonatomic) _INPBIntentResponsePayloadFailure *PayloadFailure; // @synthesize PayloadFailure=_PayloadFailure;
@property(retain, nonatomic) _INPBIntentResponsePayloadSuccess *PayloadSuccess; // @synthesize PayloadSuccess=_PayloadSuccess;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPayloadFailure;
@property(readonly, nonatomic) BOOL hasPayloadSuccess;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end


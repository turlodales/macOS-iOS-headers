//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray, NSString, _DKPRSource, _DKPRStream, _DKPRValue;

@interface _DKPREvent : PBCodable <NSCopying>
{
    double _creationDate;
    double _endDate;
    double _startDate;
    NSString *_identifier;
    NSMutableArray *_metadatas;
    _DKPRSource *_source;
    _DKPRStream *_stream;
    _DKPRValue *_value;
    struct {
        unsigned int creationDate:1;
    } _has;
}

+ (Class)metadataType;
- (void).cxx_destruct;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSMutableArray *metadatas; // @synthesize metadatas=_metadatas;
@property(retain, nonatomic) _DKPRSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _DKPRValue *value; // @synthesize value=_value;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) _DKPRStream *stream; // @synthesize stream=_stream;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCreationDate;
- (id)metadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)metadatasCount;
- (void)addMetadata:(id)arg1;
- (void)clearMetadatas;
@property(readonly, nonatomic) BOOL hasSource;

@end


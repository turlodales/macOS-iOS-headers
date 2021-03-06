//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPPlaceRequestResponse, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPSearchFeedbackContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_autocompleteSuggestionLists;
    GEORPPlaceRequestResponse *_requestContext;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_autocompleteSuggestionLists:1;
        unsigned int read_requestContext:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_autocompleteSuggestionLists:1;
        unsigned int wrote_requestContext:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)autocompleteSuggestionListType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEORPPlaceRequestResponse *requestContext;
@property(readonly, nonatomic) BOOL hasRequestContext;
- (void)_readRequestContext;
- (id)autocompleteSuggestionListAtIndex:(unsigned long long)arg1;
- (unsigned long long)autocompleteSuggestionListsCount;
- (void)_addNoFlagsAutocompleteSuggestionList:(id)arg1;
- (void)addAutocompleteSuggestionList:(id)arg1;
- (void)clearAutocompleteSuggestionLists;
@property(retain, nonatomic) NSMutableArray *autocompleteSuggestionLists;
- (void)_readAutocompleteSuggestionLists;
- (id)initWithData:(id)arg1;
- (id)init;

@end


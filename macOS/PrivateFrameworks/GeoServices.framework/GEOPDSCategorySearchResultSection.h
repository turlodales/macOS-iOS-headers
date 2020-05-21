//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSCategorySearchResultSection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_sectionHeaderDisplayName;
    NSString *_sectionSubHeaderDisplayName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _categorySearchResultSectionCellType;
    struct {
        unsigned int has_categorySearchResultSectionCellType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_sectionHeaderDisplayName:1;
        unsigned int read_sectionSubHeaderDisplayName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_sectionHeaderDisplayName:1;
        unsigned int wrote_sectionSubHeaderDisplayName:1;
        unsigned int wrote_categorySearchResultSectionCellType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
- (int)StringAsCategorySearchResultSectionCellType:(id)arg1;
- (id)categorySearchResultSectionCellTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasCategorySearchResultSectionCellType;
@property(nonatomic) int categorySearchResultSectionCellType;
@property(retain, nonatomic) NSString *sectionSubHeaderDisplayName;
@property(readonly, nonatomic) BOOL hasSectionSubHeaderDisplayName;
- (void)_readSectionSubHeaderDisplayName;
@property(retain, nonatomic) NSString *sectionHeaderDisplayName;
@property(readonly, nonatomic) BOOL hasSectionHeaderDisplayName;
- (void)_readSectionHeaderDisplayName;
- (id)initWithData:(id)arg1;
- (id)init;

@end


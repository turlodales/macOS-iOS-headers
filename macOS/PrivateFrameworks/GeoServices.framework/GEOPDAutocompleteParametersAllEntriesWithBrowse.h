//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDAutocompleteEntry, GEOPDRetainedSearchMetadata, GEOPDVenueIdentifier, GEOPDViewportInfo, NSData, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _supportedAutocompleteResultCellTypes;
    CDStruct_95bda58d _supportedListTypes;
    NSData *_categorySuggestionEntryMetadata;
    GEOPDAutocompleteEntry *_categorySuggestionEntry;
    GEOPDAutocompleteEntry *_querySuggestionEntry;
    NSString *_query;
    GEOPDRetainedSearchMetadata *_retainedSearch;
    GEOPDVenueIdentifier *_venueIdentifier;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _maxQueryBuilderSuggestions;
    int _maxResults;
    BOOL _highlightDiff;
    BOOL _interleaveCategorySuggestions;
    BOOL _supportClientRankingFeatureMetadata;
    BOOL _supportDirectionIntentSuggestions;
    BOOL _supportRapAffordance;
    BOOL _supportSectionHeader;
    BOOL _supportUnresolvedDirectionIntent;
    struct {
        unsigned int has_maxQueryBuilderSuggestions:1;
        unsigned int has_maxResults:1;
        unsigned int has_highlightDiff:1;
        unsigned int has_interleaveCategorySuggestions:1;
        unsigned int has_supportClientRankingFeatureMetadata:1;
        unsigned int has_supportDirectionIntentSuggestions:1;
        unsigned int has_supportRapAffordance:1;
        unsigned int has_supportSectionHeader:1;
        unsigned int has_supportUnresolvedDirectionIntent:1;
        unsigned int read_unknownFields:1;
        unsigned int read_supportedAutocompleteResultCellTypes:1;
        unsigned int read_supportedListTypes:1;
        unsigned int read_categorySuggestionEntryMetadata:1;
        unsigned int read_categorySuggestionEntry:1;
        unsigned int read_querySuggestionEntry:1;
        unsigned int read_query:1;
        unsigned int read_retainedSearch:1;
        unsigned int read_venueIdentifier:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_supportedAutocompleteResultCellTypes:1;
        unsigned int wrote_supportedListTypes:1;
        unsigned int wrote_categorySuggestionEntryMetadata:1;
        unsigned int wrote_categorySuggestionEntry:1;
        unsigned int wrote_querySuggestionEntry:1;
        unsigned int wrote_query:1;
        unsigned int wrote_retainedSearch:1;
        unsigned int wrote_venueIdentifier:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxQueryBuilderSuggestions:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_highlightDiff:1;
        unsigned int wrote_interleaveCategorySuggestions:1;
        unsigned int wrote_supportClientRankingFeatureMetadata:1;
        unsigned int wrote_supportDirectionIntentSuggestions:1;
        unsigned int wrote_supportRapAffordance:1;
        unsigned int wrote_supportSectionHeader:1;
        unsigned int wrote_supportUnresolvedDirectionIntent:1;
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
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSupportRapAffordance;
@property(nonatomic) BOOL supportRapAffordance;
- (int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1;
- (id)supportedAutocompleteResultCellTypesAsString:(int)arg1;
- (void)setSupportedAutocompleteResultCellTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsSupportedAutocompleteResultCellType:(int)arg1;
- (void)addSupportedAutocompleteResultCellType:(int)arg1;
- (void)clearSupportedAutocompleteResultCellTypes;
@property(readonly, nonatomic) int *supportedAutocompleteResultCellTypes;
@property(readonly, nonatomic) unsigned long long supportedAutocompleteResultCellTypesCount;
- (void)_readSupportedAutocompleteResultCellTypes;
@property(nonatomic) BOOL hasSupportSectionHeader;
@property(nonatomic) BOOL supportSectionHeader;
@property(nonatomic) BOOL hasMaxQueryBuilderSuggestions;
@property(nonatomic) int maxQueryBuilderSuggestions;
@property(nonatomic) BOOL hasSupportClientRankingFeatureMetadata;
@property(nonatomic) BOOL supportClientRankingFeatureMetadata;
@property(retain, nonatomic) GEOPDAutocompleteEntry *querySuggestionEntry;
@property(readonly, nonatomic) BOOL hasQuerySuggestionEntry;
- (void)_readQuerySuggestionEntry;
- (int)StringAsSupportedListTypes:(id)arg1;
- (id)supportedListTypesAsString:(int)arg1;
- (void)setSupportedListTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedListTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsSupportedListType:(int)arg1;
- (void)addSupportedListType:(int)arg1;
- (void)clearSupportedListTypes;
@property(readonly, nonatomic) int *supportedListTypes;
@property(readonly, nonatomic) unsigned long long supportedListTypesCount;
- (void)_readSupportedListTypes;
@property(nonatomic) BOOL hasSupportUnresolvedDirectionIntent;
@property(nonatomic) BOOL supportUnresolvedDirectionIntent;
@property(retain, nonatomic) GEOPDRetainedSearchMetadata *retainedSearch;
@property(readonly, nonatomic) BOOL hasRetainedSearch;
- (void)_readRetainedSearch;
@property(nonatomic) BOOL hasSupportDirectionIntentSuggestions;
@property(nonatomic) BOOL supportDirectionIntentSuggestions;
@property(retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier;
@property(readonly, nonatomic) BOOL hasVenueIdentifier;
- (void)_readVenueIdentifier;
@property(nonatomic) BOOL hasInterleaveCategorySuggestions;
@property(nonatomic) BOOL interleaveCategorySuggestions;
@property(retain, nonatomic) GEOPDAutocompleteEntry *categorySuggestionEntry;
@property(readonly, nonatomic) BOOL hasCategorySuggestionEntry;
- (void)_readCategorySuggestionEntry;
@property(retain, nonatomic) NSData *categorySuggestionEntryMetadata;
@property(readonly, nonatomic) BOOL hasCategorySuggestionEntryMetadata;
- (void)_readCategorySuggestionEntryMetadata;
@property(nonatomic) BOOL hasHighlightDiff;
@property(nonatomic) BOOL highlightDiff;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) int maxResults;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property(readonly, nonatomic) BOOL hasViewportInfo;
- (void)_readViewportInfo;
@property(retain, nonatomic) NSString *query;
@property(readonly, nonatomic) BOOL hasQuery;
- (void)_readQuery;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end


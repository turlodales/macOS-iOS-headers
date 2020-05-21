//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddress : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedAddress;
    NSMutableArray *_spokenNavigationAddress;
    NSMutableArray *_spokenStructuredAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _knownAccuracy;
    struct {
        unsigned int has_knownAccuracy:1;
        unsigned int read_unknownFields:1;
        unsigned int read_localizedAddress:1;
        unsigned int read_spokenNavigationAddress:1;
        unsigned int read_spokenStructuredAddress:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_localizedAddress:1;
        unsigned int wrote_spokenNavigationAddress:1;
        unsigned int wrote_spokenStructuredAddress:1;
        unsigned int wrote_knownAccuracy:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)spokenStructuredAddressType;
+ (Class)spokenNavigationAddressType;
+ (Class)localizedAddressType;
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
- (int)StringAsKnownAccuracy:(id)arg1;
- (id)knownAccuracyAsString:(int)arg1;
@property(nonatomic) BOOL hasKnownAccuracy;
@property(nonatomic) int knownAccuracy;
- (id)spokenStructuredAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenStructuredAddressCount;
- (void)_addNoFlagsSpokenStructuredAddress:(id)arg1;
- (void)addSpokenStructuredAddress:(id)arg1;
- (void)clearSpokenStructuredAddress;
@property(retain, nonatomic) NSMutableArray *spokenStructuredAddress;
- (void)_readSpokenStructuredAddress;
- (id)spokenNavigationAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenNavigationAddressCount;
- (void)_addNoFlagsSpokenNavigationAddress:(id)arg1;
- (void)addSpokenNavigationAddress:(id)arg1;
- (void)clearSpokenNavigationAddress;
@property(retain, nonatomic) NSMutableArray *spokenNavigationAddress;
- (void)_readSpokenNavigationAddress;
- (id)localizedAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedAddressCount;
- (void)_addNoFlagsLocalizedAddress:(id)arg1;
- (void)addLocalizedAddress:(id)arg1;
- (void)clearLocalizedAddress;
@property(retain, nonatomic) NSMutableArray *localizedAddress;
- (void)_readLocalizedAddress;
- (id)initWithData:(id)arg1;
- (id)init;

@end


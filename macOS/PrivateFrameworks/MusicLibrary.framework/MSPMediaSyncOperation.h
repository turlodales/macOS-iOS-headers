//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MIPAlbum, MIPArtist, MIPGenre, MIPMediaItem, MIPMultiverseIdentifier, MIPPlaylist, MIPSeries;

@interface MSPMediaSyncOperation : PBCodable <NSCopying>
{
    MIPAlbum *_album;
    MIPArtist *_artist;
    MIPGenre *_genre;
    MIPMediaItem *_mediaItem;
    MIPMultiverseIdentifier *_multiverseId;
    int _operationType;
    MIPPlaylist *_playlist;
    MIPSeries *_series;
    struct {
        unsigned int operationType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MIPPlaylist *playlist; // @synthesize playlist=_playlist;
@property(retain, nonatomic) MIPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) MIPSeries *series; // @synthesize series=_series;
@property(retain, nonatomic) MIPGenre *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) MIPAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) MIPMultiverseIdentifier *multiverseId; // @synthesize multiverseId=_multiverseId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPlaylist;
@property(readonly, nonatomic) BOOL hasMediaItem;
@property(readonly, nonatomic) BOOL hasSeries;
@property(readonly, nonatomic) BOOL hasGenre;
@property(readonly, nonatomic) BOOL hasAlbum;
@property(readonly, nonatomic) BOOL hasArtist;
@property(readonly, nonatomic) BOOL hasMultiverseId;
- (int)StringAsOperationType:(id)arg1;
- (id)operationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasOperationType;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;

@end


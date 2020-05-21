//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerProtobuf, _MROriginProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying>
{
    _MRNowPlayingClientProtobuf *_client;
    _MROriginProtobuf *_origin;
    _MRNowPlayingPlayerProtobuf *_player;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) _MRNowPlayingPlayerProtobuf *player; // @synthesize player=_player;
@property(retain, nonatomic) _MRNowPlayingClientProtobuf *client; // @synthesize client=_client;
@property(retain, nonatomic) _MROriginProtobuf *origin; // @synthesize origin=_origin;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPlayer;
@property(readonly, nonatomic) BOOL hasClient;
@property(readonly, nonatomic) BOOL hasOrigin;
- (id)customDescription;
- (id)customDictionaryRepresentation;
@property(readonly, nonatomic) BOOL isResolved;
@property(readonly, nonatomic) BOOL isLocal;

@end


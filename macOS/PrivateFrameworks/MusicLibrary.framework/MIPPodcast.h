//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MIPArtist, MIPSeries, NSString;

@interface MIPPodcast : PBCodable <NSCopying>
{
    MIPArtist *_artist;
    NSString *_externalGuid;
    NSString *_feedUrl;
    MIPSeries *_series;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *feedUrl; // @synthesize feedUrl=_feedUrl;
@property(retain, nonatomic) NSString *externalGuid; // @synthesize externalGuid=_externalGuid;
@property(retain, nonatomic) MIPSeries *series; // @synthesize series=_series;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasFeedUrl;
@property(readonly, nonatomic) BOOL hasExternalGuid;
@property(readonly, nonatomic) BOOL hasSeries;
@property(readonly, nonatomic) BOOL hasArtist;

@end


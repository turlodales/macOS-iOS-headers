//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBMediaDestination.h"

@class NSString, _INPBString;

@interface _INPBMediaDestination : PBCodable <_INPBMediaDestination, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int mediaDestinationType:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _mediaDestinationType;
    _INPBString *_playlistName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBString *playlistName; // @synthesize playlistName=_playlistName;
@property(nonatomic) int mediaDestinationType; // @synthesize mediaDestinationType=_mediaDestinationType;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasPlaylistName;
- (int)StringAsMediaDestinationType:(id)arg1;
- (id)mediaDestinationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMediaDestinationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface TVRMSAudioRouteMessage : PBCodable <NSCopying>
{
    long long _macAddress;
    NSString *_displayName;
    BOOL _selected;
    BOOL _supportsVideo;
    struct {
        unsigned int macAddress:1;
        unsigned int selected:1;
        unsigned int supportsVideo:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL supportsVideo; // @synthesize supportsVideo=_supportsVideo;
@property(nonatomic) long long macAddress; // @synthesize macAddress=_macAddress;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSelected;
@property(nonatomic) BOOL hasSupportsVideo;
@property(nonatomic) BOOL hasMacAddress;
@property(readonly, nonatomic) BOOL hasDisplayName;

@end


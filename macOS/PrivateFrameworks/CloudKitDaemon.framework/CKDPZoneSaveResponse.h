//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPZoneCapabilities;

__attribute__((visibility("hidden")))
@interface CKDPZoneSaveResponse : PBCodable <NSCopying>
{
    CKDPZoneCapabilities *_capabilities;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKDPZoneCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCapabilities;

@end


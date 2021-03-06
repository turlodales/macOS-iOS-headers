//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitPresenceRegion : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _numPresenceAuthUsers;
    unsigned int _numPresenceRegionValidUsers;
    unsigned int _numUsers;
    BOOL _primaryResident;
    struct {
        unsigned int timestamp:1;
        unsigned int numPresenceAuthUsers:1;
        unsigned int numPresenceRegionValidUsers:1;
        unsigned int numUsers:1;
        unsigned int primaryResident:1;
    } _has;
}

@property(nonatomic) BOOL primaryResident; // @synthesize primaryResident=_primaryResident;
@property(nonatomic) unsigned int numPresenceRegionValidUsers; // @synthesize numPresenceRegionValidUsers=_numPresenceRegionValidUsers;
@property(nonatomic) unsigned int numPresenceAuthUsers; // @synthesize numPresenceAuthUsers=_numPresenceAuthUsers;
@property(nonatomic) unsigned int numUsers; // @synthesize numUsers=_numUsers;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPrimaryResident;
@property(nonatomic) BOOL hasNumPresenceRegionValidUsers;
@property(nonatomic) BOOL hasNumPresenceAuthUsers;
@property(nonatomic) BOOL hasNumUsers;
@property(nonatomic) BOOL hasTimestamp;

@end


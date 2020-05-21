//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDHomeKitWHAAccessControl : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _privilegeLevel;
    BOOL _isP2PEnabled;
    BOOL _isPasswordSet;
    struct {
        unsigned int timestamp:1;
        unsigned int privilegeLevel:1;
        unsigned int isP2PEnabled:1;
        unsigned int isPasswordSet:1;
    } _has;
}

@property(nonatomic) BOOL isPasswordSet; // @synthesize isPasswordSet=_isPasswordSet;
@property(nonatomic) BOOL isP2PEnabled; // @synthesize isP2PEnabled=_isP2PEnabled;
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
@property(nonatomic) BOOL hasIsPasswordSet;
- (int)StringAsPrivilegeLevel:(id)arg1;
- (id)privilegeLevelAsString:(int)arg1;
@property(nonatomic) BOOL hasPrivilegeLevel;
@property(nonatomic) int privilegeLevel; // @synthesize privilegeLevel=_privilegeLevel;
@property(nonatomic) BOOL hasIsP2PEnabled;
@property(nonatomic) BOOL hasTimestamp;

@end


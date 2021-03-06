//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@class NSString;

@interface WBSAnalyticsSafariCKBookmarksMigrationFinishedEvent : PBCodable <NSCopying>
{
    unsigned long long _duration;
    unsigned long long _timestamp;
    NSString *_errorCode;
    NSString *_errorDomain;
    int _migratorType;
    int _result;
    struct {
        unsigned int duration:1;
        unsigned int timestamp:1;
        unsigned int migratorType:1;
        unsigned int result:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
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
@property(readonly, nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorDomain;
- (int)StringAsResult:(id)arg1;
- (id)resultAsString:(int)arg1;
@property(nonatomic) BOOL hasResult;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) BOOL hasDuration;
- (int)StringAsMigratorType:(id)arg1;
- (id)migratorTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMigratorType;
@property(nonatomic) int migratorType; // @synthesize migratorType=_migratorType;
@property(nonatomic) BOOL hasTimestamp;

@end


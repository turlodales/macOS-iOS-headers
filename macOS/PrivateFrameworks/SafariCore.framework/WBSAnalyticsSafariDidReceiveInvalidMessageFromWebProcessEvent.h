//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface WBSAnalyticsSafariDidReceiveInvalidMessageFromWebProcessEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_messageName;
    CDStruct_b5306035 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
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
@property(readonly, nonatomic) BOOL hasMessageName;
@property(nonatomic) BOOL hasTimestamp;

@end


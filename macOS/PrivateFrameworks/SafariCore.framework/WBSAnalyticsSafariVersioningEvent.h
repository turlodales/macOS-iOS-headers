//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface WBSAnalyticsSafariVersioningEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _variant;
    NSString *_version;
    struct {
        unsigned int timestamp:1;
        unsigned int variant:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
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
- (int)StringAsVariant:(id)arg1;
- (id)variantAsString:(int)arg1;
@property(nonatomic) BOOL hasVariant;
@property(nonatomic) int variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) BOOL hasVersion;
@property(nonatomic) BOOL hasTimestamp;

@end


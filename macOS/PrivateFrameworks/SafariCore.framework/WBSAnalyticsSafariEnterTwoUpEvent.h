//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface WBSAnalyticsSafariEnterTwoUpEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _method;
    CDStruct_64f0786c _has;
}

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
- (int)StringAsMethod:(id)arg1;
- (id)methodAsString:(int)arg1;
@property(nonatomic) BOOL hasMethod;
@property(nonatomic) int method; // @synthesize method=_method;
@property(nonatomic) BOOL hasTimestamp;

@end


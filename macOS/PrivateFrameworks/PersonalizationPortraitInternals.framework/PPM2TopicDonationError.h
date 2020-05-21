//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface PPM2TopicDonationError : PBCodable <NSCopying>
{
    int _reason;
    struct {
        unsigned int reason:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsReason:(id)arg1;
- (id)reasonAsString:(int)arg1;
@property(nonatomic) BOOL hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSString;

@interface TPPBVoucher : PBCodable <NSCopying>
{
    NSString *_beneficiary;
    int _reason;
    NSString *_sponsor;
    struct {
        unsigned int reason:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sponsor; // @synthesize sponsor=_sponsor;
@property(retain, nonatomic) NSString *beneficiary; // @synthesize beneficiary=_beneficiary;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSponsor;
@property(readonly, nonatomic) BOOL hasBeneficiary;
- (int)StringAsReason:(id)arg1;
- (id)reasonAsString:(int)arg1;
@property(nonatomic) BOOL hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;

@end


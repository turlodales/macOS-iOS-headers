//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class OTApplicantToSponsorRound2M1, OTSponsorToApplicantRound1M2, OTSponsorToApplicantRound2M2;

__attribute__((visibility("hidden")))
@interface OTPairingMessage : PBCodable <NSCopying>
{
    OTSponsorToApplicantRound1M2 *_epoch;
    OTApplicantToSponsorRound2M1 *_prepare;
    OTSponsorToApplicantRound2M2 *_voucher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OTSponsorToApplicantRound2M2 *voucher; // @synthesize voucher=_voucher;
@property(retain, nonatomic) OTApplicantToSponsorRound2M1 *prepare; // @synthesize prepare=_prepare;
@property(retain, nonatomic) OTSponsorToApplicantRound1M2 *epoch; // @synthesize epoch=_epoch;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasVoucher;
@property(readonly, nonatomic) BOOL hasPrepare;
@property(readonly, nonatomic) BOOL hasEpoch;

@end


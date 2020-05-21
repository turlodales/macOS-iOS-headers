//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBFinancialAccountValue.h"

@class NSString, _INPBBalanceAmountValue, _INPBDataString, _INPBValueMetadata;

@interface _INPBFinancialAccountValue : PBCodable <_INPBFinancialAccountValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int accountType:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _accountType;
    _INPBDataString *_accountNickname;
    NSString *_accountNumber;
    _INPBBalanceAmountValue *_balance;
    _INPBDataString *_organizationName;
    _INPBBalanceAmountValue *_secondaryBalance;
    _INPBValueMetadata *_valueMetadata;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) _INPBBalanceAmountValue *secondaryBalance; // @synthesize secondaryBalance=_secondaryBalance;
@property(retain, nonatomic) _INPBDataString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) _INPBBalanceAmountValue *balance; // @synthesize balance=_balance;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(retain, nonatomic) _INPBDataString *accountNickname; // @synthesize accountNickname=_accountNickname;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(readonly, nonatomic) BOOL hasSecondaryBalance;
@property(readonly, nonatomic) BOOL hasOrganizationName;
@property(readonly, nonatomic) BOOL hasBalance;
- (int)StringAsAccountType:(id)arg1;
- (id)accountTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAccountType;
@property(readonly, nonatomic) BOOL hasAccountNumber;
@property(readonly, nonatomic) BOOL hasAccountNickname;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CNPostalAddress, NSString, PKPhysicalCardPriceOption;

@interface PKPhysicalCardAction : NSObject <NSSecureCoding>
{
    unsigned long long _actionType;
    NSString *_activationCode;
    unsigned long long _reason;
    NSString *_artworkIdentifier;
    CNPostalAddress *_shippingAddress;
    NSString *_nameOnCard;
    PKPhysicalCardPriceOption *_priceOption;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) PKPhysicalCardPriceOption *priceOption; // @synthesize priceOption=_priceOption;
@property(copy, nonatomic) NSString *nameOnCard; // @synthesize nameOnCard=_nameOnCard;
@property(copy, nonatomic) CNPostalAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *activationCode; // @synthesize activationCode=_activationCode;
@property(readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (id)_shippingAddressJSONRepresentation;
- (id)jsonRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqualToPhysicalCardAction:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActionType:(unsigned long long)arg1;

@end


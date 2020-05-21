//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString;

@interface PKServiceProviderOrder : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_itemDescription;
    NSString *_serviceProviderIdentifier;
    NSDictionary *_serviceProviderData;
    unsigned long long _paymentInstrumentType;
    NSData *_appletValue;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *appletValue; // @synthesize appletValue=_appletValue;
@property(nonatomic) unsigned long long paymentInstrumentType; // @synthesize paymentInstrumentType=_paymentInstrumentType;
@property(copy, nonatomic) NSDictionary *serviceProviderData; // @synthesize serviceProviderData=_serviceProviderData;
@property(copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
@property(copy, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_paymentInstrumentDictionary;
- (id)_itemDictionary;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


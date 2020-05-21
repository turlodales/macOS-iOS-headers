//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface PKAccessPassProvisioningConfiguration : NSObject <NSSecureCoding>
{
    NSString *_pairingPassword;
    NSString *_issuerName;
    NSString *_appIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(copy, nonatomic) NSString *issuerName; // @synthesize issuerName=_issuerName;
@property(copy, nonatomic) NSString *pairingPassword; // @synthesize pairingPassword=_pairingPassword;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end


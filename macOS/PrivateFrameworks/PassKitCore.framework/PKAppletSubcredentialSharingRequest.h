//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, PKAppletSubcredential, PKAppletSubcredentialEntitlement, PKPaymentPass;

@interface PKAppletSubcredentialSharingRequest : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _forLocalDevice;
    PKPaymentPass *_pass;
    PKAppletSubcredential *_credential;
    NSString *_passIdentifier;
    NSString *_credentialIdentifier;
    PKAppletSubcredentialEntitlement *_entitlement;
    NSString *_recipientIdentifier;
    NSString *_recipientName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=isForLocalDevice) BOOL forLocalDevice; // @synthesize forLocalDevice=_forLocalDevice;
@property(copy, nonatomic) NSString *recipientName; // @synthesize recipientName=_recipientName;
@property(copy, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
@property(retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement; // @synthesize entitlement=_entitlement;
@property(readonly, copy, nonatomic) NSString *credentialIdentifier; // @synthesize credentialIdentifier=_credentialIdentifier;
@property(readonly, copy, nonatomic) NSString *passIdentifier; // @synthesize passIdentifier=_passIdentifier;
@property(retain, nonatomic) PKAppletSubcredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)invitations;
- (id)credentialWithIdentifier:(id)arg1;
- (id)credentialForPass:(id)arg1;
- (id)initWithPaymentPass:(id)arg1;

@end


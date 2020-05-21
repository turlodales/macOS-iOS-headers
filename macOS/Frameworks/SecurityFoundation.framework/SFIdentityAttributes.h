//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFKeychainItemAttributes.h"

@class NSString, _SFAsymmetricKeySpecifier;

__attribute__((visibility("hidden")))
@interface SFIdentityAttributes : NSObject <SFKeychainItemAttributes>
{
    id _identityAttributesInternal;
    NSString *persistentIdentifier;
    NSString *_privateKeyDomain;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *privateKeyDomain; // @synthesize privateKeyDomain=_privateKeyDomain;
@property(readonly, copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier;
@property(readonly, nonatomic) BOOL hasCertificate;
@property(copy, nonatomic) NSString *identityName;
- (void)setKeySpecifier:(id)arg1;
@property(readonly, copy, nonatomic) _SFAsymmetricKeySpecifier *keySpecifier;
@property(copy, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


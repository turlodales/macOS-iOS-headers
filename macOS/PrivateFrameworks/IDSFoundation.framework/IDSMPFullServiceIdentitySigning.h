//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

@class NSString;

@interface IDSMPFullServiceIdentitySigning : IDSMPIdentity
{
}

+ (id)identityWithData:(id)arg1 accountIdentity:(id)arg2 error:(id *)arg3;
+ (id)fullServiceIdentityWithFullAccountIdentity:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)publicServiceIdentitySigningWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *identityServiceTypeName;
@property(readonly, nonatomic) long long identityServiceType;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ODRecord : NSObject
{
}

+ (BOOL)accessInstanceVariablesDirectly;
- (BOOL)setNodeCredentialsWithBootstrapToken:(id)arg1 error:(id *)arg2;
- (BOOL)isMemberRecordRefresh:(id)arg1 error:(id *)arg2;
- (BOOL)isMemberRecord:(id)arg1 error:(id *)arg2;
- (BOOL)removeMemberRecord:(id)arg1 error:(id *)arg2;
- (BOOL)addMemberRecord:(id)arg1 error:(id *)arg2;
- (id)passwordContentSummaryAndReturnError:(id *)arg1;
@property(readonly) long long secondsUntilAuthenticationsExpire;
@property(readonly) long long secondsUntilPasswordExpires;
- (BOOL)willAuthenticationsExpire:(unsigned long long)arg1;
- (BOOL)willPasswordExpire:(unsigned long long)arg1;
- (BOOL)passwordChangeAllowed:(id)arg1 error:(id *)arg2;
- (BOOL)authenticationAllowedAndReturnError:(id *)arg1;
- (id)accountPoliciesAndReturnError:(id *)arg1;
- (BOOL)setAccountPolicies:(id)arg1 error:(id *)arg2;
- (BOOL)removeAccountPolicy:(id)arg1 fromCategory:(id)arg2 error:(id *)arg3;
- (BOOL)addAccountPolicy:(id)arg1 toCategory:(id)arg2 error:(id *)arg3;
- (BOOL)removePolicy:(id)arg1 error:(id *)arg2;
- (BOOL)setPolicy:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (BOOL)setPolicies:(id)arg1 error:(id *)arg2;
- (id)supportedPoliciesAndReturnError:(id *)arg1;
- (id)effectivePoliciesAndReturnError:(id *)arg1;
- (id)policiesAndReturnError:(id *)arg1;
- (BOOL)removeValue:(id)arg1 fromAttribute:(id)arg2 error:(id *)arg3;
- (BOOL)addValue:(id)arg1 toAttribute:(id)arg2 error:(id *)arg3;
- (BOOL)removeValuesForAttribute:(id)arg1 error:(id *)arg2;
- (BOOL)setValue:(id)arg1 forAttribute:(id)arg2 error:(id *)arg3;
- (BOOL)deleteRecordAndReturnError:(id *)arg1;
@property(readonly, copy, nonatomic) NSString *recordName;
@property(readonly, copy, nonatomic) NSString *recordType;
- (id)valuesForAttribute:(id)arg1 error:(id *)arg2;
- (id)recordDetailsForAttributes:(id)arg1 error:(id *)arg2;
- (BOOL)synchronizeAndReturnError:(id *)arg1;
- (BOOL)changePassword:(id)arg1 toPassword:(id)arg2 error:(id *)arg3;
- (BOOL)verifyExtendedWithAuthenticationType:(id)arg1 authenticationItems:(id)arg2 continueItems:(id *)arg3 context:(id *)arg4 error:(id *)arg5;
- (BOOL)verifyPassword:(id)arg1 error:(id *)arg2;
- (id)passwordPolicyAndReturnError:(id *)arg1;
- (BOOL)setNodeCredentialsUsingKerberosCache:(id)arg1 error:(id *)arg2;
- (BOOL)setNodeCredentialsWithRecordType:(id)arg1 authenticationType:(id)arg2 authenticationItems:(id)arg3 continueItems:(id *)arg4 context:(id *)arg5 error:(id *)arg6;
- (BOOL)setNodeCredentials:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (unsigned long long)_cfTypeID;
- (id)description;
- (struct __ODRecord *)__getODRecordRef;
- (id)enumerateMembershipWithOptions:(unsigned int)arg1 returnAttributes:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)enumerateMembersWithOptions:(unsigned int)arg1 returnAttributes:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)valueForUndefinedKey:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ODConfiguration;

@interface ODNode : NSObject
{
    void *_internal;
}

+ (id)nodeWithSession:(id)arg1 type:(unsigned int)arg2 error:(id *)arg3;
+ (id)nodeWithSession:(id)arg1 type:(unsigned int)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)nodeWithSession:(id)arg1 name:(id)arg2 error:(id *)arg3;
+ (id)nodeWithSession:(id)arg1 name:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (BOOL)passwordContentCheck:(id)arg1 forRecordName:(id)arg2 error:(id *)arg3;
- (id)accountPoliciesAndReturnError:(id *)arg1;
- (BOOL)setAccountPolicies:(id)arg1 error:(id *)arg2;
- (BOOL)removeAccountPolicy:(id)arg1 fromCategory:(id)arg2 error:(id *)arg3;
- (BOOL)addAccountPolicy:(id)arg1 toCategory:(id)arg2 error:(id *)arg3;
- (BOOL)removePolicy:(id)arg1 error:(id *)arg2;
- (BOOL)setPolicy:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (BOOL)setPolicies:(id)arg1 error:(id *)arg2;
- (id)supportedPoliciesAndReturnError:(id *)arg1;
- (id)policiesAndReturnError:(id *)arg1;
@property(readonly) ODConfiguration *configuration;
- (id)customFunction:(id)arg1 payload:(id)arg2 error:(id *)arg3;
- (id)customCall:(long long)arg1 sendData:(id)arg2 error:(id *)arg3;
- (id)customFunction:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)recordWithRecordType:(id)arg1 name:(id)arg2 attributes:(id)arg3 error:(id *)arg4;
- (id)createRecordWithRecordType:(id)arg1 name:(id)arg2 attributes:(id)arg3 error:(id *)arg4;
- (BOOL)verifyCredentialsWithRecordType:(id)arg1 authenticationType:(id)arg2 authenticationItems:(id)arg3 continueItems:(id *)arg4 context:(id *)arg5 error:(id *)arg6;
- (BOOL)setCredentialsUsingKerberosCache:(id)arg1 error:(id *)arg2;
- (BOOL)setCredentialsWithRecordType:(id)arg1 authenticationType:(id)arg2 authenticationItems:(id)arg3 continueItems:(id *)arg4 context:(id *)arg5 error:(id *)arg6;
- (BOOL)setCredentialsWithRecordType:(id)arg1 recordName:(id)arg2 password:(id)arg3 error:(id *)arg4;
- (id)supportedAttributesForRecordType:(id)arg1 error:(id *)arg2;
- (id)supportedRecordTypesAndReturnError:(id *)arg1;
- (id)nodeDetailsForKeys:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *nodeName;
- (id)unreachableSubnodeNamesAndReturnError:(id *)arg1;
- (id)subnodeNamesAndReturnError:(id *)arg1;
- (id)copy;
- (void)dealloc;
- (id)initWithSession:(id)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithSession:(id)arg1 type:(unsigned int)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithSession:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)initWithSession:(id)arg1 name:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (unsigned long long)_cfTypeID;
- (id)description;
- (struct __ODNode *)__getODNodeRef;

@end


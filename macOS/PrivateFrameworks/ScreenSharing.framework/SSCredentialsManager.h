//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface SSCredentialsManager : NSObject
{
    NSLock *mRequestsMapLock;
    NSLock *mOptionsLock;
    NSMutableDictionary *mRequestsToIDsMap;
    NSMutableDictionary *mRequestsToOptionsMap;
}

+ (id)kerberosUniquePrincipalNamesInSet:(id)arg1;
+ (id)kerberosCacheActiveSet;
+ (id)kerberosCacheSet;
+ (id)sharedManager;
+ (void)initialize;
- (int)_killNetAuthProcesses;
- (void)gatherCredentialsWithoutNetAuthWithOptions:(id)arg1 forRequester:(id)arg2;
- (void)gatherCredentialsWithOptions:(id)arg1 forRequester:(id)arg2;
- (id)optionsForRequester:(id)arg1;
- (void)removeRequestIDForRequester:(id)arg1;
- (id)requesterForRequestID:(void *)arg1;
- (void *)requestIDForRequester:(id)arg1;
- (void)returnCredentials:(id)arg1 forCompositeKey:(id)arg2 withStatus:(int)arg3;
- (void)returnCompositeKey:(id)arg1 withStatus:(int)arg2;
- (void)returnRequestGuestAccessForCompositeKey:(id)arg1;
- (void)returnClientPrincipal:(id)arg1 servicePrincipal:(id)arg2 forCompositeKey:(id)arg3 withStatus:(int)arg4;
- (void)returnPassword:(id)arg1 forCompositeKey:(id)arg2 withStatus:(int)arg3;
- (void)returnUsername:(id)arg1 password:(id)arg2 authtype:(id)arg3 label:(id)arg4 serverSupportsSRP:(BOOL)arg5 forCompositeKey:(id)arg6 withStatus:(int)arg7;
- (void)requestCredentialsForPriorAuthorized:(id)arg1 withOptions:(id)arg2;
- (void)requestCredentialsForKerberosTGTForRequester:(id)arg1 withOptions:(id)arg2;
- (void)requestCredentialsForKerberosNoUIForRequester:(id)arg1 withOptions:(id)arg2;
- (void)requestCredentialsForKerberosForRequester:(id)arg1 withOptions:(id)arg2;
- (void)requestCredentialsForAskToObserveForRequester:(id)arg1 withOptions:(id)arg2;
- (void)requestCredentialsForAskToControlForRequester:(id)arg1 withOptions:(id)arg2;
- (void)requestCredentialsForRSAForRequester:(id)arg1 withOptions:(id)arg2;
- (void)requestCredentialsForSRPForRequester:(id)arg1 withOptions:(id)arg2;
- (void)requestCredentialsForDiffieHellmanNamePasswordForRequester:(id)arg1 withOptions:(id)arg2;
- (void)requestCredentialsForVNCAuthenticationForRequester:(id)arg1 withOptions:(id)arg2;
- (void)requestCredentialsForNoAuthenticationNeededForRequester:(id)arg1 withOptions:(id)arg2;
- (void)requestCredentialsForInvalidAuthenticationTypeForRequester:(id)arg1 withOptions:(id)arg2;
- (void)cleanupAllRequests;
- (void)displayError:(id)arg1 forRequester:(id)arg2;
- (void)_endRequestForRequester:(id)arg1 closeNetAuth:(BOOL)arg2;
- (void)endRequestForRequester:(id)arg1;
- (void)requestCredentialsForAuthType:(id)arg1 forRequester:(id)arg2 withOptions:(id)arg3;
- (void)dealloc;
- (id)init;

@end


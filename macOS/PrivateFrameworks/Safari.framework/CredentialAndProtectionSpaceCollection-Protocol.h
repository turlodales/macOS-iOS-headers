//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CredentialAndProtectionSpace, NSArray, NSString, NSURLCredential, NSURLProtectionSpace;

@protocol CredentialAndProtectionSpaceCollection <NSObject>
@property(readonly, nonatomic, getter=credentialAndProtectionSpacePairsCount) unsigned long long count;
@property(nonatomic) BOOL ignoreNotifications;
@property(copy, nonatomic) NSString *filterString;
@property(copy, nonatomic) NSArray *sortDescriptors;
@property(nonatomic) __weak id delegate;
- (unsigned long long)indexOfCredentialAndProtectionSpace:(CredentialAndProtectionSpace *)arg1;
- (CredentialAndProtectionSpace *)credentialAndProtectionSpaceAtIndex:(unsigned long long)arg1;
- (void)sortAndFilter;
- (void)removeCredentialAndProtectionSpace:(CredentialAndProtectionSpace *)arg1;
- (void)removeAllCredentials;
- (void)setCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (NSString *)addressStringForProtectionSpaceAtIndex:(unsigned long long)arg1;
- (NSURLProtectionSpace *)protectionSpaceAtIndex:(unsigned long long)arg1;
- (NSURLCredential *)credentialAtIndex:(unsigned long long)arg1;
- (BOOL)includesPasswordInSortCriteria;
- (void)resetCredentialsWithOptions:(unsigned long long)arg1;
- (void)stopMonitoringCredentials;
- (void)startMonitoringCredentials;
@end


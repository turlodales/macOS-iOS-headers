//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/CredentialAndProtectionSpaceCollection-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CredentialAndProtectionSpaceCollection : NSObject <CredentialAndProtectionSpaceCollection>
{
    BOOL _ignoreNotifications;
    NSDictionary *_credentialsByProtectionSpace;
    NSMutableArray *_credentialAndProtectionSpacePairs;
    NSMutableArray *_filteredCredentialAndProtectionSpacePairIndexes;
    NSArray *_sortDescriptors;
    NSString *_filterString;
    id _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSMutableArray *filteredCredentialAndProtectionSpacePairIndexes; // @synthesize filteredCredentialAndProtectionSpacePairIndexes=_filteredCredentialAndProtectionSpacePairIndexes;
@property(retain, nonatomic) NSMutableArray *credentialAndProtectionSpacePairs; // @synthesize credentialAndProtectionSpacePairs=_credentialAndProtectionSpacePairs;
@property(retain, nonatomic) NSDictionary *credentialsByProtectionSpace; // @synthesize credentialsByProtectionSpace=_credentialsByProtectionSpace;
@property(nonatomic) BOOL ignoreNotifications; // @synthesize ignoreNotifications=_ignoreNotifications;
- (BOOL)includesPasswordInSortCriteria;
- (void)stopMonitoringCredentials;
- (void)startMonitoringCredentials;
- (void)credentialsChanged:(id)arg1;
- (void)resetCredentialsWithOptions:(unsigned long long)arg1;
- (void)_populateCredentialsWithOptions:(unsigned long long)arg1;
- (void)resetFilteredCredentials;
- (unsigned long long)indexOfCredentialAndProtectionSpace:(id)arg1;
- (id)credentialAndProtectionSpaceAtIndex:(unsigned long long)arg1;
- (void)sortAndFilter;
- (void)removeAllCredentials;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)removeCredentialAndProtectionSpace:(id)arg1;
- (void)_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)addressStringForProtectionSpaceAtIndex:(unsigned long long)arg1;
- (id)protectionSpaceAtIndex:(unsigned long long)arg1;
- (id)credentialAtIndex:(unsigned long long)arg1;
- (unsigned long long)_realIndexToPossiblyFilteredIndex:(unsigned long long)arg1;
- (unsigned long long)possiblyFilteredIndexToRealIndex:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=credentialAndProtectionSpacePairsCount) unsigned long long count;
- (BOOL)shouldFilterCredentialAndProtectionSpacePairs;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


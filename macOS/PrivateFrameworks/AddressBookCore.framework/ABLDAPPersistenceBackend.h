//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/ABAccountPersistenceBackend-Protocol.h>

@class NSString;

@interface ABLDAPPersistenceBackend : NSObject <ABAccountPersistenceBackend>
{
    NSString *_uid;
}

- (id)addressBookDomainName;
- (id)userDefaultKeyToKeyPathMapping;
- (void)deletePersistentValuesWithAddressBook:(id)arg1;
- (BOOL)savePersistentValues:(id)arg1;
- (BOOL)savePersistentValues:(id)arg1 postNotifications:(BOOL)arg2;
- (void)rediscoverPersistentValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)loadPersistentValues;
- (id)parentAccountTypeIdentifier;
- (id)accountTypeIdentifier;
- (id)acAccountIdentifier;
- (id)uid;
- (void)dealloc;
- (id)initWithUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


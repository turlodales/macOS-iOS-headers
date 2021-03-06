//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAgent/CalendarLink-Protocol.h>

@class ABRemoteGroup, ABRemoteObjectCache, ABRemotePerson, ABRemoteRecord, ABRemoteSearchElement, NSArray, NSPredicate, NSString, NSURL;

@protocol CalAgentLinkAddressBook <CalendarLink>
- (void)saveWithRemoteObjectCache:(ABRemoteObjectCache *)arg1 basePersistenceURL:(NSURL *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)remoteSubGroupsForRemoteParentGroup:(ABRemoteGroup *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)remoteSmartGroupsForAccountsWithIdentifiers:(NSArray *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)remotePersonWithUniqueID:(NSString *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(ABRemotePerson *, NSError *))arg3;
- (void)remotePersonForMeWithBasePersistenceURL:(NSURL *)arg1 reply:(void (^)(ABRemotePerson *))arg2;
- (void)remotePeopleForAccountsWithIdentifiers:(NSArray *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)remoteParentGroupsForRemoteSubGroup:(ABRemoteGroup *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)remoteInfoWithUniqueID:(NSString *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(ABRemoteInfo *, NSError *))arg3;
- (void)remoteInfosForAccountsWithIdentifiers:(NSArray *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)remoteGroupWithUniqueID:(NSString *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(ABRemoteGroup *, NSError *))arg3;
- (void)remoteGroupsForRemotePerson:(ABRemotePerson *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)remoteGroupsForAccountsWithIdentifiers:(NSArray *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)remoteCustomPropertiesWithBasePersistenceURL:(NSURL *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)remoteAccountCollectionForBasePersistenceURL:(NSURL *)arg1 reply:(void (^)(ABRemoteAccountCollection *))arg2;
- (void)propertyNameRepresentsCustomProperty:(NSString *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(BOOL))arg3;
- (void)persistentStoreURLForRemoteRecord:(ABRemoteRecord *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(NSURL *))arg3;
- (void)membersOfRemoteGroup:(ABRemoteGroup *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)fullNameForRemotePerson:(ABRemotePerson *)arg1 reply:(void (^)(NSString *))arg2;
- (void)fetchSmartGroupsWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 inAccountsWithIdentifiers:(NSArray *)arg3 withBasePersistenceURL:(NSURL *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)fetchPeopleWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 inAccountsWithIdentifiers:(NSArray *)arg3 withBasePersistenceURL:(NSURL *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)fetchGroupsWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 inAccountsWithIdentifiers:(NSArray *)arg3 withBasePersistenceURL:(NSURL *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)createInfoWithBasePersistenceURL:(NSURL *)arg1 reply:(void (^)(ABRemoteInfo *))arg2;
- (void)coreDataPredicateFromRemoteSearchElement:(ABRemoteSearchElement *)arg1 withBasePersistenceURL:(NSURL *)arg2 reply:(void (^)(NSPredicate *))arg3;
@end


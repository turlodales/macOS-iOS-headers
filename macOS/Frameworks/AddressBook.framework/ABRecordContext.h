//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABRecordContext.h"

@class ABAccount, ABAddressBook, NSString;

@interface ABRecordContext : NSObject <ABRecordContext>
{
    ABAccount *_account;
    ABAddressBook *_addressBook;
}

+ (id)recordContextWithAddresBook:(id)arg1 account:(id)arg2;
+ (id)recordContextWithAddresBook:(id)arg1;
@property(readonly, retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly, retain) ABAccount *account; // @synthesize account=_account;
- (id)lazyGroupsForGroupUids:(id)arg1;
- (id)lazyGroupsForGroups:(id)arg1;
- (id)lazyGroupForGroupUniqueId:(id)arg1;
- (id)lazyGroupForGroup:(id)arg1;
- (BOOL)save;
- (BOOL)removeRecords:(id)arg1 error:(id *)arg2;
- (BOOL)removeRecord:(id)arg1 error:(id *)arg2;
- (id)personForUniqueId:(id)arg1;
- (id)groupForUniqueId:(id)arg1;
- (BOOL)recordExistsForUniqueId:(id)arg1;
- (id)recordForUniqueId:(id)arg1;
- (id)recordsForUniqueIDs:(id)arg1;
- (id)allMembersOfGroupOrPeople:(id)arg1;
- (id)groups;
- (id)people;
- (id)addGroupWithUniqueId:(id)arg1;
- (id)addGroup;
- (id)addPersonWithDictionaryRepresentation:(id)arg1;
- (id)addPersonWithUniqueId:(id)arg1;
- (id)addPerson;
- (id)addRecordWithClass:(Class)arg1 uniqueId:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 account:(id)arg2;
- (id)initWithAccount:(id)arg1 addressBook:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


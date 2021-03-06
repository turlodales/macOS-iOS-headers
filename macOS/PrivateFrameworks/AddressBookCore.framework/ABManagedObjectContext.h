//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@class ABAddressBook;
@protocol ABAccountCollection, ABAddressBookReference;

@interface ABManagedObjectContext : NSManagedObjectContext
{
    id <ABAddressBookReference> _owningAddressBook;
    id <ABAccountCollection> _ab_accountCollection;
    int _aggregateMultiValueMode;
    BOOL _writeChangesToServer;
    BOOL _sendsChangeNotifications;
    BOOL _unlockOnDealloc;
}

+ (id)abUniqueIDsPredicate:(id)arg1;
- (void).cxx_destruct;
@property BOOL unlockOnDealloc; // @synthesize unlockOnDealloc=_unlockOnDealloc;
@property BOOL sendsChangeNotifications; // @synthesize sendsChangeNotifications=_sendsChangeNotifications;
@property BOOL writeChangesToServer; // @synthesize writeChangesToServer=_writeChangesToServer;
@property int aggregateMultiValueMode; // @synthesize aggregateMultiValueMode=_aggregateMultiValueMode;
@property(retain) id <ABAccountCollection> ab_accountCollection; // @synthesize ab_accountCollection=_ab_accountCollection;
- (void)_ab_sendAssistantChangeNotificationsForInsertedIdentifiers:(id)arg1 updatedIdentifiers:(id)arg2 deletedIdentifiers:(id)arg3;
- (void)_ab_markRecordsForDeletion:(id)arg1;
- (id)_ab_deletedRecords;
- (void)_ab_touchRecords;
- (void)_updateLinkingInformation;
- (BOOL)save:(id *)arg1;
- (id)abObjectsForPredicate:(id)arg1 entityName:(id)arg2 affectedStores:(id)arg3 asFaults:(BOOL)arg4;
- (id)abObjectsForPredicate:(id)arg1 entityName:(id)arg2 affectedStores:(id)arg3;
- (id)abObjectsForPredicate:(id)arg1 entityName:(id)arg2;
- (id)abGroupsForPredicate:(id)arg1;
- (id)abGroupsForUniqueIDs:(id)arg1;
- (id)abContactsForPredicate:(id)arg1 affectedStores:(id)arg2;
- (id)abContactsForPredicate:(id)arg1;
- (id)abContactsForUniqueIDs:(id)arg1 affectedStores:(id)arg2;
- (id)abContactsForUniqueIDs:(id)arg1;
- (id)unscopedVersionOrSelf;
- (void)_setContact:(id)arg1 preferredForLinkProperty:(id)arg2 linkedContacts:(id)arg3;
- (void)_setContact:(id)arg1 preferredForLinkProperty:(id)arg2;
- (void)setContactPreferredForLinkedPhoto:(id)arg1 forLinkedContacts:(id)arg2;
- (void)setContactPreferredForLinkedPhoto:(id)arg1;
- (void)setContactPreferredForLinkedName:(id)arg1 forLinkedContacts:(id)arg2;
- (void)setContactPreferredForLinkedName:(id)arg1;
- (void)unlinkContact:(id)arg1;
- (void)linkContact:(id)arg1 toContact:(id)arg2;
- (id)contactsWithLinkIdentifier:(id)arg1;
- (id)_arrayOfContactsFromSet:(id)arg1;
- (id)deletedContacts;
- (id)insertedContacts;
- (id)updatedContacts;
- (BOOL)abMeCardHasChanged;
- (void)deleteObject:(id)arg1;
- (void)logCallStack:(id)arg1;
- (BOOL)isMemoryBacked;
- (void)preheatGroups:(id)arg1 keyPaths:(id)arg2;
- (void)preheatGroups:(id)arg1;
- (void)preheatContacts:(id)arg1 keyPaths:(id)arg2;
- (void)preheatContacts:(id)arg1;
- (void)ab_tryRefreshRelationshipWithName:(id)arg1 description:(id)arg2 forObject:(id)arg3;
- (void)_refreshObjectsRelatedToObject:(id)arg1;
- (void)refreshRecords:(id)arg1;
@property ABAddressBook *owningAddressBook;
- (id)myContact;
- (void)dealloc;
- (id)initWithConcurrencyType:(unsigned long long)arg1;

@end


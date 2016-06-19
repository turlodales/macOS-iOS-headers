//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNCDContactFetchRequestDescription, CNCDPersistenceContext;

@interface CNCDContactFetcher : NSObject
{
    CNCDContactFetchRequestDescription *_fetchRequestDescription;
    CNCDPersistenceContext *_persistenceContext;
}

+ (id)contactsForFetchRequest:(id)arg1 inPersistenceStack:(id)arg2 error:(id *)arg3;
- (id)_fetchContactsFutureWithPredicate:(id)arg1;
- (unsigned long long)_countForContactsWithPredicate:(id)arg1;
- (id)_contactsWithPredicate:(id)arg1 inRange:(id)arg2 error:(id *)arg3;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (id)fetchContactsWithLinkIdentifier:(id)arg1 error:(id *)arg2;
- (id)linkedContacts:(id)arg1;
- (id)unifyCoreDataContacts:(id)arg1;
- (id)contactsFromCoreDataContacts:(id)arg1;
- (id)fetchRequestWithPredicate:(id)arg1 fetchRange:(id)arg2 sortDescriptors:(id)arg3;
- (id)fetchRequestWithPredicate:(id)arg1 fetchRange:(id)arg2;
- (id)fetchRequestWithPredicate:(id)arg1;
- (id)fetchExchangeContactsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)fetchContainerScopedContactsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)fetchContacts:(id *)arg1;
- (void)dealloc;
- (id)initWithFetchRequestDescription:(id)arg1 persistenceContext:(id)arg2;
- (id)init;

@end


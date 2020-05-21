//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAddressBook, ABPersonEntry, NSMutableDictionary, NSString;

@interface ABSuggestedEntriesFetcher : NSObject
{
    ABAddressBook *_addressBook;
    NSString *_filterTerms;
    NSMutableDictionary *_entries;
    ABPersonEntry *_meEntry;
}

+ (id)abPostalAddressDictionaryFromPosstalAddress:(id)arg1;
+ (id)abSocialProfileFromSocialProfile:(id)arg1;
+ (id)abInstantMessageAddressFromInstantMessageAddress:(id)arg1;
+ (id)sanitizedLabelFromLabel:(id)arg1;
+ (id)keyDescriptor;
- (void).cxx_destruct;
@property(retain, nonatomic) ABPersonEntry *meEntry; // @synthesize meEntry=_meEntry;
@property(retain, nonatomic) NSMutableDictionary *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) NSString *filterTerms; // @synthesize filterTerms=_filterTerms;
@property(retain, nonatomic) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (id)multiValueWithLabeledValues:(id)arg1;
- (id)multiValueWithInstantMessageAddresses:(id)arg1;
- (id)multiValueWithSocialProfiles:(id)arg1;
- (id)multiValueWithPostalAddresses:(id)arg1;
- (id)multiValueWithPhoneNumbers:(id)arg1;
- (id)personFromContact:(id)arg1;
- (id)entriesByUIDForContacts:(id)arg1 createMeEntry:(BOOL)arg2;
- (id)fetchSuggestedMeContact;
- (id)fetchSuggestedContacts;
- (id)resultEntriesByUID;
- (id)resultMeEntry;
- (void)fetchMeEntry;
- (void)fetchEntries;
- (id)initWithAddressBook:(id)arg1 filterTerms:(id)arg2;

@end


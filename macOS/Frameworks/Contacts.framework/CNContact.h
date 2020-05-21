//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactAugmentation.h"
#import "CNSuggested.h"
#import "NSCopying.h"
#import "NSItemProviderReading.h"
#import "NSItemProviderWriting.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class CNActivityAlert, CNContactKeyVector, NSArray, NSData, NSDate, NSDateComponents, NSDictionary, NSSet, NSString, SGRecordId;

@interface CNContact : NSObject <NSItemProviderReading, NSItemProviderWriting, CNSuggested, CNContactAugmentation, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_internalIdentifier;
    int _iOSLegacyIdentifier;
    NSString *_namePrefix;
    NSString *_givenName;
    NSString *_middleName;
    NSString *_familyName;
    NSString *_nameSuffix;
    NSString *_previousFamilyName;
    NSString *_nickname;
    NSString *_phoneticGivenName;
    NSString *_phoneticMiddleName;
    NSString *_phoneticFamilyName;
    NSString *_phoneticOrganizationName;
    NSString *_pronunciationGivenName;
    NSString *_pronunciationFamilyName;
    NSString *_sortingGivenName;
    NSString *_sortingFamilyName;
    NSString *_sectionForSortingByGivenName;
    NSString *_sectionForSortingByFamilyName;
    NSString *_organizationName;
    NSString *_departmentName;
    NSString *_jobTitle;
    NSDateComponents *_birthday;
    NSDateComponents *_nonGregorianBirthday;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSString *_note;
    NSData *_imageData;
    struct CGRect _cropRect;
    NSString *_cropRectID;
    NSData *_cropRectHash;
    NSData *_thumbnailImageData;
    NSData *_fullscreenImageData;
    NSData *_syncImageData;
    BOOL _imageDataAvailable;
    NSString *_linkIdentifier;
    BOOL _preferredForName;
    BOOL _preferredForImage;
    NSString *_phonemeData;
    long long _contactType;
    long long _displayNameOrder;
    NSArray *_phoneNumbers;
    NSArray *_emailAddresses;
    NSArray *_urlAddresses;
    NSArray *_dates;
    NSArray *_instantMessageAddresses;
    NSArray *_contactRelations;
    NSArray *_socialProfiles;
    NSArray *_postalAddresses;
    NSArray *_calendarURIs;
    NSString *_cardDAVUID;
    NSString *_externalIdentifier;
    NSData *_externalRepresentation;
    NSString *_externalModificationTag;
    NSString *_externalUUID;
    NSString *_externalImageURI;
    CNActivityAlert *_callAlert;
    CNActivityAlert *_textAlert;
    NSString *_storeIdentifier;
    NSDictionary *_storeInfo;
    CNContact *_snapshot;
    NSArray *_linkedContacts;
    NSString *_accountIdentifier;
    CNContactKeyVector *_availableKeyDescriptor;
    NSString *_mapsData;
    NSString *_searchIndex;
    NSString *_preferredLikenessSource;
    NSString *_preferredApplePersonaIdentifier;
    NSString *_preferredChannel;
    NSString *_ISOCountryCode;
    NSString *_downtimeWhitelist;
    NSString *_imageType;
    NSData *_imageHash;
}

+ (void)you_used_a_property_that_you_didnt_request_when_you_fetched_the_contact;
+ (id)previewURLForContact:(id)arg1;
+ (id)unifyContacts:(id)arg1;
+ (CDUnknownBlockType)preferredImageComparator;
+ (CDUnknownBlockType)comparatorForNameSortOrder:(long long)arg1;
+ (id)descriptorWithKeyDescriptors:(id)arg1 description:(id)arg2;
+ (id)descriptorForKeyDescriptors:(id)arg1 description:(id)arg2;
+ (id)descriptorForAllImageDataKeys;
+ (id)descriptorForAllComparatorKeys;
+ (BOOL)supportsSecureCoding;
+ (id)storeInfoFromCoder:(id)arg1 storeIdentifier:(id)arg2 key:(id)arg3;
+ (id)makeContactAndMergeValuesFromAvailableKeysInContact:(id)arg1;
+ (id)newContactWithPropertyKeys:(id)arg1 withValuesFromContact:(id)arg2;
+ (id)contactWithContact:(id)arg1;
+ (id)emptyContact;
+ (id)_contactWithContact:(id)arg1 createNewInstance:(BOOL)arg2 propertyDescriptions:(id)arg3;
+ (void)freezeIfInstancetypeIsImmutable:(id)arg1;
+ (id)contactWithDisplayName:(id)arg1 handleStrings:(id)arg2;
+ (id)contactWithDisplayName:(id)arg1 emailOrPhoneNumber:(id)arg2;
+ (id)contact;
+ (id)contactWithIdentifier:(id)arg1;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)identifierProvider;
+ (id)localizedStringForKey:(id)arg1;
+ (id)alwaysFetchedKeys;
+ (id)os_log;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactsMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForContactsWithIdentifiers:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1;
+ (id)predicateForMeContact;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1 prefixHint:(id)arg2 groupIdentifiers:(id)arg3 limitToOneResult:(BOOL)arg4;
+ (id)predicateForContactsMatchingEmailAddress:(id)arg1 groupIdentifiers:(id)arg2 limitToOneResult:(BOOL)arg3;
+ (id)predicateForContactsLinkedToContactWithIdentifier:(id)arg1;
+ (id)predicateForContactMatchingURLString:(id)arg1;
+ (id)predicateForContactsMatchingInstantMessageAddress:(id)arg1;
+ (id)predicateForContactsMatchingSocialProfile:(id)arg1;
+ (id)predicateForContactsMatchingString:(id)arg1 accountIdentifier:(id)arg2 containerIdentifier:(id)arg3 groupIdentifier:(id)arg4;
+ (id)predicateForContactMatchingMapString:(id)arg1;
+ (id)predicateForContactsMatchingFullTextSearch:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;
+ (id)predicateForContactMatchingEKParticipantWithName:(id)arg1 emailAddress:(id)arg2 URL:(id)arg3 predicateDescription:(id)arg4;
+ (id)predicateForPreferredNameInContainersWithIdentifiers:(id)arg1 groupsWithIdentifiers:(id)arg2;
+ (id)predicateForPreferredNameInRange:(struct _NSRange)arg1;
+ (id)predicateForContactsWithOrganizationName:(id)arg1;
+ (id)predicateForContactsMatchingCoreDataPredicate:(id)arg1;
+ (id)predicateForContactsLinkedToContact:(id)arg1;
+ (id)predicateForContactsMatchingPostalAddress:(id)arg1;
+ (id)predicateForContactsMatchingHandleStrings:(id)arg1 inContainersWithIdentifiers:(id)arg2;
+ (id)predicateForContactsMatchingHandleStrings:(id)arg1;
+ (id)predicateForContactMatchingPhoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)predicateForContactMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1 prefixHint:(id)arg2;
+ (id)predicateForContactMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1 options:(unsigned long long)arg2;
+ (id)predicateForAllContacts;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)contactWithVCardData:(id)arg1 error:(id *)arg2;
+ (id)contactWithArchivedData:(id)arg1 error:(id *)arg2;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)suggestionIDFromContactIdentifier:(id)arg1;
+ (id)contactIdentifierFromSuggestionID:(id)arg1;
+ (id)contactFromSuggestion:(id)arg1;
+ (id)predicateForSuggestionIdentifier:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *preferredChannel; // @synthesize preferredChannel=_preferredChannel;
@property(readonly, copy) NSString *pronunciationFamilyName; // @synthesize pronunciationFamilyName=_pronunciationFamilyName;
@property(readonly, copy) NSString *pronunciationGivenName; // @synthesize pronunciationGivenName=_pronunciationGivenName;
@property(readonly, copy) NSString *sectionForSortingByFamilyName; // @synthesize sectionForSortingByFamilyName=_sectionForSortingByFamilyName;
@property(readonly, copy) NSString *sectionForSortingByGivenName; // @synthesize sectionForSortingByGivenName=_sectionForSortingByGivenName;
@property(readonly) int iOSLegacyIdentifier; // @synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier;
@property(readonly, copy) NSDictionary *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(readonly, copy) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, copy) NSString *internalIdentifier; // @synthesize internalIdentifier=_internalIdentifier;
- (id)linkedIdentifierMap;
- (BOOL)isEqualIgnoringIdentifiers:(id)arg1;
- (BOOL)areAllPropertiesEqualToContactIgnoringIdentifiers:(id)arg1;
- (BOOL)isProperty:(id)arg1 equalToOtherIgnoreIdentifiers:(id)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)areAllPropertiesButContactIdentifierEqualToContact:(id)arg1;
- (BOOL)areAllAvailableKeysEqualToContact:(id)arg1 ignoringIdentifiers:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)shortDebugDescription;
@property(readonly, copy) NSString *description;
- (id)diffToSnapshotAndReturnError:(id *)arg1;
- (BOOL)hasChanges;
- (id)snapshot;
@property(readonly, copy) NSString *phoneticCompanyName;
@property(readonly, copy) NSString *phoneticFullName;
@property(readonly, copy) NSString *fullName;
@property(readonly, copy) NSString *stringForIndexing;
@property(readonly, copy, nonatomic) NSArray *mainStoreLinkedContacts;
- (id)linkedContactsFromStoreWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *linkedContacts;
- (id)areKeysAvailable:(id)arg1 useIgnorableKeys:(BOOL)arg2 findMissingKeys:(BOOL)arg3;
- (BOOL)areKeysAvailable:(id)arg1;
- (BOOL)isKeyAvailable:(id)arg1;
@property(readonly, nonatomic) BOOL hasBeenPersisted;
- (BOOL)isUnifiedWithContactWithIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isUnified) BOOL unified;
@property(readonly, nonatomic) NSSet *availableKeys;
- (id)keyVector;
@property(readonly, nonatomic) id <CNKeyDescriptor> availableKeyDescriptor;
- (void)assertKeysAreAvailable:(id)arg1;
- (void)assertKeyIsAvailable:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithSelfAsSnapshot;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithDistinctIdentifier;
- (id)copyWithPropertyKeys:(id)arg1;
- (id)initWithIdentifier:(id)arg1 availableKeyDescriptor:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
@property(readonly, copy) NSDictionary *activityAlerts;
@property(readonly, copy) NSString *cardDAVUID;
@property(readonly, copy) NSData *imageHash;
@property(readonly, copy) NSString *imageType;
@property(readonly, copy) NSString *downtimeWhitelist;
@property(readonly, copy) NSString *preferredApplePersonaIdentifier;
@property(readonly, copy) NSString *preferredLikenessSource;
@property(readonly, copy) NSString *searchIndex;
@property(readonly, copy) NSString *mapsData;
@property(readonly, copy) NSString *externalImageURI;
@property(readonly, copy) NSString *externalUUID;
@property(readonly, copy) NSString *externalModificationTag;
@property(readonly, copy) NSData *externalRepresentation;
@property(readonly, copy) NSString *externalIdentifier;
@property(readonly, copy) NSString *externalURI;
@property(readonly, copy) CNActivityAlert *textAlert;
@property(readonly, copy) CNActivityAlert *callAlert;
@property(readonly, copy) NSString *phonemeData;
@property(readonly, copy) NSString *accountIdentifier;
@property(readonly, copy) NSDate *modificationDate;
@property(readonly, copy) NSDate *creationDate;
@property(readonly, copy) NSArray *calendarURIs;
@property(readonly, copy) NSArray *postalAddresses;
@property(readonly, copy) NSArray *socialProfiles;
@property(readonly, copy) NSArray *contactRelations;
@property(readonly, copy) NSArray *instantMessageAddresses;
@property(readonly, copy) NSArray *dates;
@property(readonly, copy) NSArray *urlAddresses;
@property(readonly, copy) NSArray *emailAddresses;
@property(readonly, copy) NSArray *phoneNumbers;
@property(readonly) long long displayNameOrder;
@property(readonly) long long contactType;
@property(readonly, nonatomic, getter=isPreferredForImage) BOOL preferredForImage;
- (BOOL)preferredForImage;
@property(readonly, nonatomic, getter=isPreferredForName) BOOL preferredForName;
- (BOOL)preferredForName;
@property(readonly, copy) NSString *linkIdentifier;
@property(readonly, copy) NSData *syncImageData;
@property(readonly, copy) NSData *fullscreenImageData;
@property(readonly) BOOL imageDataAvailable;
@property(readonly, copy) NSData *thumbnailImageData;
@property(readonly, copy) NSData *cropRectHash;
@property(readonly, copy) NSString *cropRectID;
@property(readonly) struct CGRect cropRect;
@property(readonly, copy) NSData *imageData;
@property(readonly, copy) NSString *note;
@property(readonly, copy) NSDateComponents *nonGregorianBirthday;
@property(readonly, copy) NSDateComponents *birthday;
@property(readonly, copy) NSString *jobTitle;
@property(readonly, copy) NSString *departmentName;
@property(readonly, copy) NSString *organizationName;
@property(readonly, copy) NSString *sortingFamilyName;
@property(readonly, copy) NSString *sortingGivenName;
@property(readonly, copy) NSString *phoneticOrganizationName;
@property(readonly, copy) NSString *phoneticFamilyName;
@property(readonly, copy) NSString *phoneticMiddleName;
@property(readonly, copy) NSString *phoneticGivenName;
@property(readonly, copy) NSString *nickname;
@property(readonly, copy) NSString *previousFamilyName;
@property(readonly, copy) NSString *nameSuffix;
@property(readonly, copy) NSString *familyName;
@property(readonly, copy) NSString *middleName;
@property(readonly, copy) NSString *givenName;
@property(readonly, copy) NSString *namePrefix;
@property(readonly, copy) NSString *identifier;
@property(readonly, copy) NSArray *relatedNames;
@property(readonly, copy) NSString *companyName;
@property(readonly, copy) NSString *phoneticLastName;
@property(readonly, copy) NSString *phoneticFirstName;
@property(readonly, copy) NSString *maidenName;
@property(readonly, copy) NSString *lastName;
@property(readonly, copy) NSString *firstName;
@property(readonly, copy) NSString *nameTitle;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;
@property(readonly, nonatomic) BOOL hasSuggestedProperties;
- (id)copyWithNoSuggestion;
@property(readonly, nonatomic) NSString *suggestionFoundInBundleId;
@property(readonly, nonatomic) SGRecordId *suggestionRecordId;
@property(readonly, nonatomic, getter=isSuggestedMe) BOOL suggestedMe;
@property(readonly, nonatomic, getter=isSuggested) BOOL suggested;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


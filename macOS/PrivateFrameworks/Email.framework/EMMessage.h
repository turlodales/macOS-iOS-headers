//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Email/EMRepositoryObject.h>

#import "EFLoggable.h"
#import "EMContentItem.h"
#import "EMExtendedContentItem.h"
#import "EMMessageBuilder.h"
#import "EMMessageListItem.h"
#import "EMMutableMessageListItem.h"

@class ECMessageFlags, ECSubject, EMMailDropMetadata, EMMessageRepository, EMObjectID, NSArray, NSDate, NSIndexSet, NSString, NSUUID;

@interface EMMessage : EMRepositoryObject <EFLoggable, EMMessageBuilder, EMExtendedContentItem, EMMutableMessageListItem, EMMessageListItem, EMContentItem>
{
    unsigned long long _isEditable;
    NSArray *_mailboxes;
    NSArray *_mailboxObjectIDs;
    struct os_unfair_lock_s _mailboxesLock;
    BOOL _isVIP;
    BOOL _isBlocked;
    BOOL _hasAttachments;
    BOOL _isToMe;
    BOOL _isCCMe;
    BOOL _isAvailableLocally;
    int _exchangeEventUID;
    NSDate *_date;
    ECSubject *_subject;
    NSString *_summary;
    ECMessageFlags *_flags;
    long long _conversationNotificationLevel;
    long long _conversationID;
    NSArray *_toList;
    NSArray *_ccList;
    long long _dataTransferByteCount;
    long long _storageByteCount;
    EMMailDropMetadata *_mailDropMetadata;
    CDUnknownBlockType _loaderBlock;
    long long __internalID;
    id <ECEmailAddressConvertible> _senderAddress;
    NSArray *_bccList;
    NSUUID *_documentID;
}

+ (BOOL)supportsSecureCoding;
+ (id)combinedFlagsForMessageListItemFlags:(id)arg1 forDisplay:(BOOL)arg2;
+ (id)combinedFlagsForMessageListItems:(id)arg1 forDisplay:(BOOL)arg2;
+ (id)combinedFlagsForMessageListItems:(id)arg1;
+ (id)log;
+ (id)externalDataTypeIdentifiers;
+ (id)UTType;
+ (id)predicateForMessageWithMIMEMessageIDHeader:(id)arg1;
+ (id)_predicateForMessagesWithObjectIDConstantValue:(id)arg1 operatorType:(unsigned long long)arg2;
+ (id)predicateForExcludingMessagesWithObjectIDs:(id)arg1;
+ (id)predicateForExcludingMessageWithObjectID:(id)arg1;
+ (id)predicateForMessagesWithObjectIDs:(id)arg1;
+ (id)predicateForMessageWithInternalID:(long long)arg1;
+ (id)predicateForMessageWithObjectID:(id)arg1;
+ (id)predicateForMessageWithItemID:(id)arg1 mailboxPredicate:(id)arg2 mailboxTypeResolver:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSUUID *documentID; // @synthesize documentID=_documentID;
@property(copy, nonatomic) NSArray *bccList; // @synthesize bccList=_bccList;
@property(retain, nonatomic) id <ECEmailAddressConvertible> senderAddress; // @synthesize senderAddress=_senderAddress;
@property long long _internalID; // @synthesize _internalID=__internalID;
@property(copy, nonatomic) CDUnknownBlockType loaderBlock; // @synthesize loaderBlock=_loaderBlock;
- (void)setExchangeEventUID:(int)arg1;
@property(readonly, nonatomic) int exchangeEventUID;
- (void)setMailDropMetadata:(id)arg1;
@property(readonly, copy, nonatomic) EMMailDropMetadata *mailDropMetadata;
- (void)setStorageByteCount:(long long)arg1;
@property(readonly, nonatomic) long long storageByteCount;
- (void)setDataTransferByteCount:(long long)arg1;
@property(readonly, nonatomic) long long dataTransferByteCount;
- (void)setIsAvailableLocally:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isAvailableLocally;
- (void)setIsCCMe:(BOOL)arg1;
@property(readonly) BOOL isCCMe;
- (void)setIsToMe:(BOOL)arg1;
@property(readonly) BOOL isToMe;
- (void)setCcList:(id)arg1;
@property(readonly, copy) NSArray *ccList;
- (void)setToList:(id)arg1;
@property(readonly, copy) NSArray *toList;
- (void)setConversationID:(long long)arg1;
@property(readonly) long long conversationID;
- (void)setConversationNotificationLevel:(long long)arg1;
@property(readonly) long long conversationNotificationLevel;
- (void)setHasAttachments:(BOOL)arg1;
@property(readonly) BOOL hasAttachments;
- (void)setIsBlocked:(BOOL)arg1;
@property(readonly) BOOL isBlocked;
- (void)setIsVIP:(BOOL)arg1;
@property(readonly) BOOL isVIP;
- (void)setFlags:(id)arg1;
@property(readonly) ECMessageFlags *flags;
- (void)setSummary:(id)arg1;
@property(readonly, copy) NSString *summary;
- (void)setSubject:(id)arg1;
@property(readonly) ECSubject *subject;
- (void)setDate:(id)arg1;
@property(readonly) NSDate *date;
- (id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestRepresentationWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDisplayName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *displayName;
- (void)setContentID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *contentID;
- (void)setUTType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *UTType;
- (void)setAvailableRepresentations:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *availableRepresentations;
@property(readonly) BOOL isEditable;
@property(readonly) BOOL shouldArchiveByDefault;
@property(readonly) BOOL supportsArchiving;
@property(readonly) BOOL deleteMovesToTrash;
@property(readonly) EMMessage *displayMessage;
@property(readonly) EMObjectID *displayMessageObjectID;
- (void)setDisplayMessageItemID:(id)arg1;
@property(readonly) id <EMCollectionItemID> displayMessageItemID;
- (void)setSenderList:(id)arg1;
@property(readonly, copy) NSArray *senderList;
- (void)setFlagColors:(id)arg1;
@property(readonly, copy) NSIndexSet *flagColors;
- (void)setHasUnflagged:(BOOL)arg1;
@property(readonly) BOOL hasUnflagged;
- (void)setMailboxes:(id)arg1;
@property(readonly, copy) NSArray *mailboxes;
- (void)setMailboxObjectIDs:(id)arg1;
@property(readonly, copy) NSArray *mailboxObjectIDs;
- (void)setCount:(unsigned long long)arg1;
@property(readonly) unsigned long long count;
@property(readonly, nonatomic) id <EMCollectionItemID> itemID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)cachedMetadataOfClass:(Class)arg1 forKey:(id)arg2;
- (void)setCachedMetadata:(id)arg1 forKey:(id)arg2;
- (void)_commonInitWithBuilder:(CDUnknownBlockType)arg1;
- (id)initWithObjectID:(id)arg1 builder:(CDUnknownBlockType)arg2;
- (id)initWithObjectID:(id)arg1;
@property(nonatomic) BOOL isSinglePagePDF; // @dynamic isSinglePagePDF;
- (void)setRepository:(id)arg1;
@property(readonly, nonatomic) EMMessageRepository *repository;
- (BOOL)isInManagedAccountWithSourceMailboxScope:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) EMObjectID *objectID;
@property(readonly) Class superclass;

@end


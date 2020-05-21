//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCRemoteMessage.h"

@class MCMessageHeaders, MFEWSAccount, MFLibraryCalendarEvent, MFMailbox, NSData, NSString;

@interface MFEWSMessage : MCRemoteMessage
{
    NSData *_headerData;
    MCMessageHeaders *_headers;
    NSString *_itemId;
    NSString *_changeKey;
    NSData *_fetchedBodyData;
    MFLibraryCalendarEvent *_associatedCalendarEvent;
    long long _libraryID;
}

+ (id)newAddressesForEWSAddresses:(id)arg1;
+ (id)newAddressForEWSAddress:(id)arg1;
+ (id)_newEWSAddressesForAddresses:(id)arg1;
+ (id)_newEWSAddressForAddress:(id)arg1;
+ (id)_newEWSHeaderFieldsForMessageHeaders:(id)arg1 encodingHint:(unsigned long long)arg2;
+ (id)validEWSIdStringsForIdStrings:(id)arg1;
+ (id)validEWSItemIdTypesForItemIdTypes:(id)arg1;
+ (id)EWSItemIdTypesForItemIdStrings:(id)arg1;
+ (id)EWSItemIdStringsForItemIdTypes:(id)arg1;
+ (id)EWSItemIdTypesForMessages:(id)arg1;
+ (id)newEWSItemFromMessage:(id)arg1 data:(id)arg2 flags:(long long)arg3 sender:(id)arg4 recipientsByHeaderKey:(id)arg5 categories:(id)arg6 existingProperties:(id)arg7 useSenderInsteadOfFrom:(BOOL)arg8;
+ (id)_mimeContentForData:(id)arg1;
+ (id)dataFromMimeContent:(id)arg1;
+ (id)_newCustomEWSSetItemWithPropertyName:(id)arg1 boolValue:(BOOL)arg2;
+ (id)_newEWSSetItemWithPropertyTag:(id)arg1 intValue:(int)arg2;
+ (id)_newCustomEWSExtendedPropertyWithName:(id)arg1 boolValue:(BOOL)arg2;
+ (id)_newEWSExtendedPropertyWithTag:(id)arg1 intValue:(int)arg2;
+ (id)_extendedFieldsForFlags:(long long)arg1 importance:(long long *)arg2;
+ (id)_newEWSDeleteItemWithDistinguishedPropertySetId:(long long)arg1 propertyType:(long long)arg2 propertyId:(long long)arg3;
+ (id)_newEWSDeleteItemWithPropertyTag:(id)arg1 propertyType:(long long)arg2;
+ (id)updatesForEWSItem:(id)arg1 applyingFlagChange:(id)arg2;
+ (id)propertiesToGetBeforeUpdatingMessageFlags:(id)arg1 forMessageType:(BOOL)arg2 includesReadReceipts:(char *)arg3;
+ (id)extendedFieldsForEWSCalendarType;
+ (id)extendedFieldsForEWSMeetingRequestMessageType;
+ (id)extendedFieldsForEWSMeetingMessageType;
+ (id)fieldsToMaintainWhenUpdatingMessageType:(BOOL)arg1;
+ (id)EWSFolderClassForMailboxType:(int)arg1;
+ (id)EWSItemClassForMessageType:(BOOL)arg1;
+ (BOOL)messageTypeForEWSItemClass:(id)arg1;
+ (long long)flagsForEWSItemType:(id)arg1;
+ (id)newMessageWithEWSItemType:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long libraryID; // @synthesize libraryID=_libraryID;
@property(retain) MFLibraryCalendarEvent *associatedCalendarEvent; // @synthesize associatedCalendarEvent=_associatedCalendarEvent;
@property(retain) NSData *fetchedBodyData; // @synthesize fetchedBodyData=_fetchedBodyData;
@property(copy, nonatomic) NSString *changeKey; // @synthesize changeKey=_changeKey;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain) MCMessageHeaders *headers; // @synthesize headers=_headers;
@property(retain) NSData *headerData; // @synthesize headerData=_headerData;
- (void)setHeaderAndBodyFromFullData:(id)arg1;
- (BOOL)isEditable;
- (id)remoteID;
- (id)headersFetchIfNotAvailable:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
@property(readonly, nonatomic) MFMailbox *mailbox;
@property(readonly, nonatomic) MFEWSAccount *account;
- (id)init;
- (id)initWithItemId:(id)arg1 changeKey:(id)arg2;

@end


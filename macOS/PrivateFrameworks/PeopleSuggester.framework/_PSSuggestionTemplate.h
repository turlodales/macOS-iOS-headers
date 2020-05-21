//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INImage, NSArray, NSDictionary, NSString;

@interface _PSSuggestionTemplate : NSObject
{
    NSString *_bundleID;
    NSString *_interactionRecipients;
    INImage *_image;
    NSString *_groupName;
    NSArray *_recipientContactIDs;
    NSArray *_recipientEmailAddresses;
    NSArray *_recipientPhoneNumbers;
    NSDictionary *_contactIdToHandleMapping;
    NSString *_reason;
    NSString *_reasonType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *reasonType; // @synthesize reasonType=_reasonType;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSDictionary *contactIdToHandleMapping; // @synthesize contactIdToHandleMapping=_contactIdToHandleMapping;
@property(readonly, nonatomic) NSArray *recipientPhoneNumbers; // @synthesize recipientPhoneNumbers=_recipientPhoneNumbers;
@property(readonly, nonatomic) NSArray *recipientEmailAddresses; // @synthesize recipientEmailAddresses=_recipientEmailAddresses;
@property(readonly, nonatomic) NSArray *recipientContactIDs; // @synthesize recipientContactIDs=_recipientContactIDs;
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, nonatomic) INImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *interactionRecipients; // @synthesize interactionRecipients=_interactionRecipients;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)suggestionWithContactIDMapping:(id)arg1 phoneMapping:(id)arg2 emailMapping:(id)arg3 contactStore:(id)arg4 contactKeysToFetch:(id)arg5;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 image:(id)arg3 groupName:(id)arg4 recipientContactIDs:(id)arg5 recipientEmailAddresses:(id)arg6 recipientPhoneNumbers:(id)arg7 contactIdToHandleMapping:(id)arg8 reason:(id)arg9 reasonType:(id)arg10;

@end


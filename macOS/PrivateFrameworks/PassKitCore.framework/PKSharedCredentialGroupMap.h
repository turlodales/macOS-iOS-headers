//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, PKAppletSubcredential;

@interface PKSharedCredentialGroupMap : NSObject
{
    NSMutableDictionary *_groupIdentifierToGroupNumber;
    NSMutableDictionary *_sharingSessionToGroupNumber;
    NSMutableDictionary *_recipientIdentifierToGroupNumber;
    NSMutableDictionary *_groupNumberToSharedCredentials;
    NSMutableDictionary *_groupNumberToInvitationReceipts;
    NSMutableArray *_notGroupedSharedCredentials;
    NSMutableArray *_notGroupedInvitationReceipts;
    long long _groupCount;
    PKAppletSubcredential *_credential;
}

- (void).cxx_destruct;
- (void)insertInvitationReceipt:(id)arg1 intoGroup:(id)arg2;
- (void)insertSharedCredential:(id)arg1 intoGroup:(id)arg2;
- (void)assignGroupNumber:(id)arg1 toGroupIdentifier:(id)arg2 sharingSessionIdentifier:(id)arg3 recipientIdentifier:(id)arg4;
- (id)groupNumberWithGroupIdentifier:(id)arg1 sharingSessionIdentifier:(id)arg2 recipientIdentifier:(id)arg3;
- (id)groups;
- (void)insertInvitationReceipt:(id)arg1;
- (void)insertSharedCredential:(id)arg1;
- (id)initWithCredential:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "TUFilteredRequest.h"

@class NSSet, NSString, NSURL, NSUUID, TUHandle;

@interface TUJoinConversationRequest : NSObject <TUFilteredRequest, NSCopying, NSSecureCoding>
{
    BOOL _videoEnabled;
    BOOL _shouldSuppressInCallUI;
    BOOL _wantsStagingArea;
    BOOL _showUIPrompt;
    BOOL _uplinkMuted;
    NSSet *_remoteMembers;
    NSUUID *_UUID;
    TUHandle *_callerID;
    NSUUID *_messagesGroupUUID;
    NSString *_messagesGroupName;
}

+ (BOOL)supportsSecureCoding;
+ (id)sanitizedMembersFromMembers:(id)arg1;
+ (BOOL)showUIPromptFromURLComponents:(id)arg1;
+ (id)messagesGroupNameFromURLComponents:(id)arg1;
+ (id)messagesGroupUUIDFromURLComponents:(id)arg1;
+ (id)callerIDFromURLComponents:(id)arg1;
+ (BOOL)wantsStagingAreaFromURLComponents:(id)arg1;
+ (BOOL)shouldSuppressInCallUIFromURLComponents:(id)arg1;
+ (BOOL)videoEnabledFromURLComponents:(id)arg1;
+ (id)remoteMembersFromURLComponents:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isUplinkMuted) BOOL uplinkMuted; // @synthesize uplinkMuted=_uplinkMuted;
@property(nonatomic) BOOL showUIPrompt; // @synthesize showUIPrompt=_showUIPrompt;
@property(copy, nonatomic) NSString *messagesGroupName; // @synthesize messagesGroupName=_messagesGroupName;
@property(copy, nonatomic) NSUUID *messagesGroupUUID; // @synthesize messagesGroupUUID=_messagesGroupUUID;
@property(retain, nonatomic) TUHandle *callerID; // @synthesize callerID=_callerID;
@property(nonatomic) BOOL wantsStagingArea; // @synthesize wantsStagingArea=_wantsStagingArea;
@property(nonatomic) BOOL shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, copy, nonatomic) NSSet *remoteMembers; // @synthesize remoteMembers=_remoteMembers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)showUIPromptQueryItem;
- (id)messagesGroupNameQueryItem;
- (id)messagesGroupUUIDQueryItem;
- (id)callerIDQueryItem;
- (id)wantsStagingAreaQueryItem;
- (id)shouldSuppressInCallUIQueryItem;
- (id)videoEnabledQueryItem;
- (id)remoteMembersQueryItem;
- (id)queryItems;
@property(readonly, nonatomic) NSURL *URL;
- (id)contactNamesByHandleWithContactsDataSource:(id)arg1;
- (id)handles;
- (id)bundleIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithGroupUUID:(id)arg1 localParticipantHandle:(id)arg2 remoteParticipantHandles:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)initWithRemoteMembers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


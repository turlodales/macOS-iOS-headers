//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TUConversationMediaControllerXPCServer.h"

@class NSSet, NSUUID, TUConversationMember;

@protocol TUConversationManagerXPCServer <TUConversationMediaControllerXPCServer>
- (void)unregisterClient:(id <TUConversationManagerXPCClient>)arg1;
- (void)registerClient:(id <TUConversationManagerXPCClient>)arg1;
- (oneway void)buzzMember:(TUConversationMember *)arg1 conversationUUID:(NSUUID *)arg2;
- (oneway void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversationWithUUID:(NSUUID *)arg2;
- (oneway void)addRemoteMembers:(NSSet *)arg1 toConversationWithUUID:(NSUUID *)arg2;
- (oneway void)conversationsByGroupUUID:(void (^)(NSDictionary *))arg1;
@end


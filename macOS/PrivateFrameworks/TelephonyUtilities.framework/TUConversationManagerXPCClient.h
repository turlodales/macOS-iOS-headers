//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUConversationManagerDataSource-Protocol.h>
#import <TelephonyUtilities/TUConversationManagerXPCClient-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, TUConversationManagerDataSourceDelegate, TUConversationMediaControllerDataSourceDelegate;

@interface TUConversationManagerXPCClient : NSObject <TUConversationManagerXPCClient, TUConversationManagerDataSource>
{
    BOOL _hasRequestedInitialState;
    BOOL _shouldConnectToHost;
    int _shouldConnectToken;
    id <TUConversationManagerDataSourceDelegate> _delegate;
    id <TUConversationMediaControllerDataSourceDelegate> _mediaDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_conversationsByGroupUUID;
}

+ (id)conversationManagerServerXPCInterface;
+ (id)conversationManagerClientXPCInterface;
+ (id)conversationManagerAllowedClasses;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)asynchronousServer;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *conversationsByGroupUUID; // @synthesize conversationsByGroupUUID=_conversationsByGroupUUID;
@property(nonatomic) BOOL shouldConnectToHost; // @synthesize shouldConnectToHost=_shouldConnectToHost;
@property(nonatomic) int shouldConnectToken; // @synthesize shouldConnectToken=_shouldConnectToken;
@property(nonatomic) BOOL hasRequestedInitialState; // @synthesize hasRequestedInitialState=_hasRequestedInitialState;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <TUConversationMediaControllerDataSourceDelegate> mediaDelegate; // @synthesize mediaDelegate=_mediaDelegate;
@property(nonatomic) __weak id <TUConversationManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)mediaPrioritiesChangedForConversation:(id)arg1;
- (oneway void)updateConversationsByGroupUUID:(id)arg1;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)handleServerDisconnect;
- (void)_invokeCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_requestInitialStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_requestInitialStateIfNecessary;
- (void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;
- (void)invalidate;
- (void)registerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(id)arg2;
- (void)buzzMember:(id)arg1 conversation:(id)arg2;
- (void)addRemoteMembers:(id)arg1 toConversation:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


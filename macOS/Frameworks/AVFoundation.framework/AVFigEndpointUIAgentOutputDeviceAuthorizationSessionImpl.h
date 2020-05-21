//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVOutputDeviceAuthorizationSessionImpl.h"

@class AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl, AVOutputDeviceAuthorizationRequest, AVOutputDeviceAuthorizationSession, AVWeakReference, NSString;

__attribute__((visibility("hidden")))
@interface AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl : NSObject <AVOutputDeviceAuthorizationSessionImpl>
{
    AVOutputDeviceAuthorizationSession *_parentSession;
    struct OpaqueFigEndpointUIAgent *_agent;
    AVWeakReference *_weakObserver;
    AVOutputDeviceAuthorizationRequest *_currentRequest;
    AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl *_currentRequestImpl;
}

- (void).cxx_destruct;
@property __weak AVOutputDeviceAuthorizationSession *parentAuthorizationSession; // @synthesize parentAuthorizationSession=_parentSession;
- (void)outputDeviceAuthorizationRequestImplDidCancel:(id)arg1;
- (void)outputDeviceAuthorizationRequestImpl:(id)arg1 didRespondWithAuthorizationToken:(id)arg2;
- (void)_finishedWithPrompt;
- (void)_notifyCurrentRequestOfTerminalStatus:(long long)arg1 error:(id)arg2;
- (void)_startNewRequest:(id)arg1 impl:(id)arg2;
- (void)_showAuthPromptWithUniqueID:(id)arg1 routeDescriptor:(struct __CFDictionary *)arg2 pinMode:(BOOL)arg3 reason:(struct __CFString *)arg4;
@property(readonly, nonatomic) struct OpaqueFigEndpointUIAgent *figEndpointUIAgent;
- (void)dealloc;
- (id)initWithFigEndpointUIAgent:(struct OpaqueFigEndpointUIAgent *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


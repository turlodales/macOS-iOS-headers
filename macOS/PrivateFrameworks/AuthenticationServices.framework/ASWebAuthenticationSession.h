//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, NSUUID, NSXPCConnection;

@interface ASWebAuthenticationSession : NSObject
{
    NSURL *_url;
    NSString *_callbackURLScheme;
    CDUnknownBlockType _completionHandler;
    BOOL _canceled;
    ASWebAuthenticationSession *_referenceToSelf;
    NSUUID *_sessionUUID;
    NSXPCConnection *_safariLaunchAgentConnection;
    BOOL _prefersEphemeralWebBrowserSession;
    BOOL __skipPresentationAnchorCheck;
    id <ASWebAuthenticationPresentationContextProviding> _presentationContextProvider;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setSkipPresentationAnchorCheck:) BOOL _skipPresentationAnchorCheck; // @synthesize _skipPresentationAnchorCheck=__skipPresentationAnchorCheck;
@property(nonatomic) BOOL prefersEphemeralWebBrowserSession; // @synthesize prefersEphemeralWebBrowserSession=_prefersEphemeralWebBrowserSession;
@property(nonatomic) __weak id <ASWebAuthenticationPresentationContextProviding> presentationContextProvider; // @synthesize presentationContextProvider=_presentationContextProvider;
- (void)_invalidate;
- (void)_endSessionWithCallbackURL:(id)arg1 error:(id)arg2;
- (id)_safariLaunchAgentProxy;
- (id)_safariLaunchAgentConnection;
- (void)cancel;
- (BOOL)_startDryRun:(BOOL)arg1;
- (BOOL)start;
@property(readonly, nonatomic) BOOL canStart;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


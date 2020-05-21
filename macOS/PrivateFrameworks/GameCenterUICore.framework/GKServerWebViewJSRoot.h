//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKServerWebViewJSAccount, GKServerWebViewJSEnvironment, GKServerWebViewJSExternalAccounts, GKServerWebViewJSGame, WebScriptObject;

@interface GKServerWebViewJSRoot : NSObject
{
    int _protocolVersion;
    id <GKServerWebViewJSRootDelegate> _delegate;
    GKServerWebViewJSEnvironment *_environment;
    GKServerWebViewJSAccount *_account;
    GKServerWebViewJSGame *_game;
    GKServerWebViewJSExternalAccounts *_externalAccounts;
    WebScriptObject *_webClientMetadata;
    WebScriptObject *_navBar;
}

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
- (void).cxx_destruct;
@property(nonatomic) int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) WebScriptObject *webClientMetadata; // @synthesize webClientMetadata=_webClientMetadata;
@property(retain, nonatomic) GKServerWebViewJSExternalAccounts *externalAccounts; // @synthesize externalAccounts=_externalAccounts;
@property(retain, nonatomic) GKServerWebViewJSGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKServerWebViewJSAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) GKServerWebViewJSEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) __weak id <GKServerWebViewJSRootDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reauthenticateWithDisplayTitle:(id)arg1 displayString:(id)arg2 username:(id)arg3 callback:(id)arg4;
- (void)reauthenticate:(id)arg1;
- (void)saveFile:(id)arg1 suggestedFilename:(id)arg2 mimeType:(id)arg3;
- (void)alert:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 secondaryButton:(id)arg4;
@property(retain, nonatomic) WebScriptObject *navBar; // @synthesize navBar=_navBar;
- (id)attributeKeys;
- (id)initWithPlayer:(id)arg1 authToken:(id)arg2 game:(id)arg3;

@end


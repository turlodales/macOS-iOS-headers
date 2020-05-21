//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPContext, CDPDaemonConnection, CDPStateUIProviderProxy;

@interface CDPController : NSObject
{
    CDPContext *_context;
    id <CDPStateUIProvider> _uiProvider;
    id <CDPAuthProvider> _authProvider;
    CDPDaemonConnection *_daemonConn;
    CDPStateUIProviderProxy *_uiProviderProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CDPStateUIProviderProxy *uiProviderProxy; // @synthesize uiProviderProxy=_uiProviderProxy;
@property(retain, nonatomic) CDPDaemonConnection *daemonConn; // @synthesize daemonConn=_daemonConn;
@property(retain, nonatomic) id <CDPAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
@property(retain, nonatomic) id <CDPStateUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void)dealloc;
- (void)invalidate;
- (id)initWithContext:(id)arg1;
- (id)init;
- (id)initWithXpcEndpoint:(id)arg1 context:(id)arg2;

@end


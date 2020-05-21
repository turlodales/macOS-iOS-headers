//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKWebBridgeConfiguration, MKWebViewMessageHandlerProxy, WKWebView;

__attribute__((visibility("hidden")))
@interface MKWebViewFactoryItem : NSObject
{
    MKWebBridgeConfiguration *_bridgeConfiguration;
    WKWebView *_webView;
    MKWebViewMessageHandlerProxy *_messageHandlerProxy;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MKWebViewMessageHandlerProxy *messageHandlerProxy; // @synthesize messageHandlerProxy=_messageHandlerProxy;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, copy, nonatomic) MKWebBridgeConfiguration *bridgeConfiguration; // @synthesize bridgeConfiguration=_bridgeConfiguration;
- (id)initWithBridgeConfiguration:(id)arg1 webView:(id)arg2 messageHandlerProxy:(id)arg3;

@end


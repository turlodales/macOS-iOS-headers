//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AOSUI/NSObject-Protocol.h>

@class JSContext, MMWebKitController, NSError, NSMutableURLRequest, NSURLResponse, NSWindow, WebFrame, WebView;

@protocol MMWebKitControllerDelegate <NSObject>

@optional
- (NSWindow *)mmWebKitControllerWindow;
- (void)mmWebKitControllerWillSendRequest:(MMWebKitController *)arg1 willSendRequest:(NSMutableURLRequest *)arg2;
- (void)mmWebKitControllerDidReceiveResponse:(MMWebKitController *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)mmWebKitControllerDidFinishLoading:(MMWebKitController *)arg1;
- (void)mmWebKitControllerDidFailLoading:(MMWebKitController *)arg1 error:(NSError *)arg2;
- (void)mmWebKitControllerDidSucceed:(MMWebKitController *)arg1;
- (void)mmWebKitControllerDidCancel:(MMWebKitController *)arg1;
- (void)mmWebKitControllerConfigureForFrame:(WebFrame *)arg1;
- (void)mmWebKitControllerDidCreateJavaScriptContext:(JSContext *)arg1 forFrame:(WebFrame *)arg2;
- (void)mmWebView:(WebView *)arg1 setFrame:(struct CGRect)arg2;
@end


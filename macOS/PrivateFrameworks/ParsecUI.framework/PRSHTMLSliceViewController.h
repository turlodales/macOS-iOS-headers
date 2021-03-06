//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ParsecUI/PRSCardSectionSliceViewController.h>

#import <ParsecUI/WebFrameLoadDelegate-Protocol.h>

@class NSString, WebView;

@interface PRSHTMLSliceViewController : PRSCardSectionSliceViewController <WebFrameLoadDelegate>
{
    double _webViewHeight;
}

@property double webViewHeight; // @synthesize webViewHeight=_webViewHeight;
- (void)dealloc;
- (double)height;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (id)initWithHTMLCardSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) WebView *view; // @dynamic view;

@end


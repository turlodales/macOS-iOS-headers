//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariSharedUI/WBSWebProcessPlugInPageController.h>

@interface WBSTouchIconWebProcessPlugInPageController : WBSWebProcessPlugInPageController
{
    id <WBSTouchIconObserver> _touchIconObserver;
    unsigned long long _mainFrameMainResourceId;
    BOOL _didRecieveDidHandleOnloadEventsForFrameCallback;
    BOOL _shouldExtractIconsWhenRecievingDidHandleOnloadEventsForFrameCallback;
}

- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;
- (void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(id)arg4 pageIsProvisionallyLoading:(BOOL)arg5;
- (id)_extractFaviconURLsIncludingDefaultURLs:(BOOL)arg1 didExtractNonDefaultIconURLs:(char *)arg2;
- (id)_extractTouchIconURLsIncludingDefaultURLs:(BOOL)arg1 didExtractNonDefaultIconURLs:(char *)arg2;
@property(readonly, nonatomic) id <WBSTouchIconObserver> touchIconObserver;

@end


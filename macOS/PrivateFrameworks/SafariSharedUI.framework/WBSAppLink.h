//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSAppLink, LSApplicationProxy, NSURL;

@interface WBSAppLink : NSObject
{
    struct os_unfair_lock_s _ivarLock;
    BOOL _didResolveAppLink;
    LSAppLink *_cachedAppLink;
    NSURL *_url;
    LSApplicationProxy *_synchronousTargetApplicationProxy;
}

+ (void)clearSavedSettings;
- (void).cxx_destruct;
@property(readonly, nonatomic) LSApplicationProxy *synchronousTargetApplicationProxy; // @synthesize synchronousTargetApplicationProxy=_synchronousTargetApplicationProxy;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)_appLink:(id)arg1 getAppLinkLabel:(id *)arg2 name:(id *)arg3 icon:(id *)arg4;
- (long long)_openStrategyForAppLink:(id)arg1;
- (id)_synchronouslyFetchAppLinkWithError:(id *)arg1;
- (void)_getAppLinkWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disable;
- (void)openExternally;
- (void)openExternallyWithWebBrowserState:(id)arg1 referrerURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAppLinkLabel:(id *)arg1 name:(id *)arg2 icon:(id *)arg3;
- (void)getAppLinkAttributesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)synchronouslyDecideOpenStrategy;
- (void)decideOpenStrategyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end


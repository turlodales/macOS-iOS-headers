//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLHeadlessExtensionLoader.h"

@class NSViewController;

@interface FLViewExtensionLoader : FLHeadlessExtensionLoader
{
    NSViewController *_extensionViewController;
}

- (void).cxx_destruct;
- (void)_connectContextToSessionWithRequestIdentifier:(id)arg1 remoteController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setupRemoteViewControllerWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupSessionWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_setupSessionIfNeeded:(id *)arg1;
- (id)remoteViewController;

@end


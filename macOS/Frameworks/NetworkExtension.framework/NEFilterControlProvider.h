//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEFilterProvider.h>

#import "NSExtensionRequestHandling.h"

@class NSDictionary, NSString;

@interface NEFilterControlProvider : NEFilterProvider <NSExtensionRequestHandling>
{
    NSDictionary *_remediationMap;
    NSDictionary *_URLAppendStringMap;
}

- (void).cxx_destruct;
@property(copy) NSDictionary *URLAppendStringMap; // @synthesize URLAppendStringMap=_URLAppendStringMap;
@property(copy) NSDictionary *remediationMap; // @synthesize remediationMap=_remediationMap;
- (void)notifyRulesChanged;
- (void)handleRemediationForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleNewFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


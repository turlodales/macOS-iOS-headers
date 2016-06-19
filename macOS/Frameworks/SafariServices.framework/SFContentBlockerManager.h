//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface SFContentBlockerManager : NSObject
{
    long long _location;
    id _extensionMatchingContext;
    NSArray *_contentBlockers;
    id <SFContentBlockerManagerDelegate> _delegate;
    NSMutableDictionary *_contentBlockerIdentifierToStateMap;
    NSMutableDictionary *_contentBlockerUniqueIdentifierToDeveloperIdentifierCache;
}

+ (id)_contentBlockerLoaderConnection;
+ (void)getStateOfContentBlockerWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_removeContentBlockerWithIdentifier:(id)arg1;
- (void)_loadContentBlockerWithIdentifier:(id)arg1 checkExtensionLocation:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_appExtensionBlacklistDidChange;
- (void)_applyEnabledContentBlockers;
- (void)_loadContentBlockersIfNecessary:(id)arg1;
- (void)_findContentBlockerAppExtensions;
- (void)_loadEnabledContentBlockers;
- (id)_contentBlockerWithUUID:(id)arg1;
- (void)_setContentBlocker:(id)arg1 isEnabled:(BOOL)arg2;
- (BOOL)_anyContentBlockerEnabled;
- (BOOL)_contentBlockerIsEnabled:(id)arg1;
- (BOOL)_contentBlockerIsEnabledWithComposedIdentifier:(id)arg1;
- (BOOL)_contentBlockerIsEnabledForContentBlockerLoader:(id)arg1;
- (void)_writeContentBlockersState:(id)arg1;
- (id)_readContentBlockersState;
- (id)_composedIdentifierForEnabledStateOfContentBlocker:(id)arg1;
- (id)_composedIdentifierForEnabledStateOfContentBlockerWithBundleIdentifier:(id)arg1 developerIdentifier:(id)arg2;
- (id)_developerIdentifierForContentBlocker:(id)arg1;
@property(readonly, nonatomic) NSArray *contentBlockers;
@property(nonatomic) __weak id <SFContentBlockerManagerDelegate> delegate;

@end


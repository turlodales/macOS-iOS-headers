//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtension.h"

@interface NSExtension (Intents)
+ (BOOL)appAllowedToTalkToSiri:(id)arg1;
+ (void)_findAppsWithAnyIntentsExtensionCheckingSiriEnabledUseFilter:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_findSiriEntitledAppsContainingAnIntentsExtensionWithCompletion:(CDUnknownBlockType)arg1;
+ (void)_intents_findPossibleSiriEnabledAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;
+ (void)_intents_findAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;
+ (id)_extensionMatchingDictionaryForIntentClassNames:(id)arg1 extensionPointName:(id)arg2 launchId:(id)arg3;
+ (id)_intents_uiExtensionMatchingAttributesForIntents:(id)arg1;
+ (id)_intents_extensionMatchingAttributesForIntents:(id)arg1;
+ (void)_matchExtensionsWithAttributes:(id)arg1 extensionPointName:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_matchSnippetExtensionsWithExtensionPointName:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(BOOL)arg3 shouldIgnoreLaunchId:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_intents_matchSiriUISnippetExtensionsWithCompletion:(CDUnknownBlockType)arg1;
+ (void)_intents_matchSiriUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_matchSiriExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_matchUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_matchExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_matchExtensionsForIntent:(id)arg1 shouldIgnoreLaunchId:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_intents_extensionSupportsAtLeastOneSiriIntent;
- (id)_intents_intentsRestrictedWhileProtectedDataUnavailable;
@end


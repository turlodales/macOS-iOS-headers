//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface WFContentItemRegistry : NSObject
{
    struct os_unfair_lock_s _discoveryLock;
    NSMutableDictionary *_contentItemClassesByType;
    NSMutableSet *_allItemClasses;
}

+ (id)sharedRegistry;
+ (id)allContentItemClassesInContentKit;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s discoveryLock; // @synthesize discoveryLock=_discoveryLock;
@property(readonly, nonatomic) NSMutableSet *allItemClasses; // @synthesize allItemClasses=_allItemClasses;
@property(readonly, nonatomic) NSMutableDictionary *contentItemClassesByType; // @synthesize contentItemClassesByType=_contentItemClassesByType;
- (id)contentItemClassesSupportingType:(id)arg1;
- (Class)contentItemClassForType:(id)arg1;
@property(readonly, nonatomic) NSSet *contentItemClasses;
@property(readonly, nonatomic) NSSet *allOwnedTypes;
- (void)registerContentItemClass:(Class)arg1;
- (id)init;
- (void)rediscoverContentItemClassesIfNeeded;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1;

@end


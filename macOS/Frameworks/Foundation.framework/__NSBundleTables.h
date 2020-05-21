//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSLock, NSMapTable, NSPointerArray;

__attribute__((visibility("hidden")))
@interface __NSBundleTables : NSObject
{
    NSLock *_lock;
    NSHashTable *_staticFrameworks;
    NSHashTable *_loadedBundles;
    NSHashTable *_loadedFrameworks;
    NSMapTable *_resolvedPathToBundles;
    NSMapTable *_bundleForClassMap;
    NSPointerArray *_immortalBundles;
}

+ (id)bundleTables;
- (id)loadedBundles;
- (id)allBundles;
- (id)allFrameworks;
- (id)bundleForClass:(Class)arg1;
- (void)addStaticFrameworkBundles:(id)arg1;
- (id)addBundle:(id)arg1 forPath:(id)arg2 withType:(unsigned long long)arg3 forClass:(Class)arg4 isImmortal:(BOOL)arg5;
- (id)bundleForPath:(id)arg1;
- (void)removeBundle:(id)arg1 forPath:(id)arg2 type:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

@end


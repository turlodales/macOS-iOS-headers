//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OITSULRUCache.h>

__attribute__((visibility("hidden")))
@interface OITSUAtomicLRUCache : OITSULRUCache
{
}

- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (id)allKeys;
- (id)allValues;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end


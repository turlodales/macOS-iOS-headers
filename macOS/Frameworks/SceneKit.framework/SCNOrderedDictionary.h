//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNOrderedDictionary : NSObject
{
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (id)copy;
- (void)_setupFrom:(id)arg1;
- (id)keys;
- (id)dictionary;
- (id)allValues;
- (unsigned long long)count;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (id)allKeys;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;

@end


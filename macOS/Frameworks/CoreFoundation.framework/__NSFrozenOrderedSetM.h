//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSOrderedSet.h>

__attribute__((visibility("hidden")))
@interface __NSFrozenOrderedSetM : NSOrderedSet
{
    // Error parsing type: A^{__cow_state_t}, name: cow
    CDStruct_2595eaee storage;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)dealloc;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countForObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)count;

@end


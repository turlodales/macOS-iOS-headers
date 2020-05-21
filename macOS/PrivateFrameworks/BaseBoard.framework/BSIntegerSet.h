//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSHashTable;

@interface BSIntegerSet : NSObject <NSCopying, NSMutableCopying>
{
    NSHashTable *_hashTable;
    BOOL _hasZeroValue;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)containsValue:(long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)_initWithHashTable:(id)arg1 hasZeroValue:(BOOL)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end


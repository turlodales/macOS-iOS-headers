//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@class NSArray;

@interface NEHasher : NSCoder
{
    struct CC_SHA1state_st *_sha1Context;
    NSArray *_classPrefixWhitelist;
}

+ (id)hashObject:(id)arg1 withClassPrefixWhitelist:(id)arg2;
+ (id)hashObject:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *classPrefixWhitelist; // @synthesize classPrefixWhitelist=_classPrefixWhitelist;
@property struct CC_SHA1state_st *sha1Context; // @synthesize sha1Context=_sha1Context;
- (struct CGSize)decodeSizeForKey:(id)arg1;
- (struct CGRect)decodeRectForKey:(id)arg1;
- (struct CGPoint)decodePointForKey:(id)arg1;
- (id)decodePropertyListForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)decodeDataObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)encodeSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (long long)versionForClassName:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (id)finishHashing;
- (void)dealloc;
- (id)init;

@end


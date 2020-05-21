//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributeDescription;

__attribute__((visibility("hidden")))
@interface NSSQLBindVariable : NSObject
{
    int _cd_rc;
    unsigned char _sqlType;
    unsigned int _index;
    unsigned int _flags;
    id _value;
    NSAttributeDescription *_attributeDescription;
    long long _int64;
}

- (id)attributeDescription;
- (BOOL)allowsCoercion;
- (BOOL)hasObjectValue;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)index;
- (void)setSQLType:(unsigned char)arg1;
- (unsigned char)sqlType;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setUnsignedInt:(unsigned int)arg1;
- (unsigned int)unsignedInt;
- (void)setInt64:(long long)arg1;
- (long long)int64;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)initWithUnsignedInt:(unsigned int)arg1 sqlType:(unsigned char)arg2;
- (id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2;
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 attributeDescription:(id)arg3 allowCoercion:(BOOL)arg4;
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 attributeDescription:(id)arg3;

@end


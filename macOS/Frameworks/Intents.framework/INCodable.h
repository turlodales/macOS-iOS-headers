//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class INCodableDescription, NSMutableDictionary;

@interface INCodable : PBCodable <NSCopying>
{
    BOOL __encodeLegacyGloryData;
    INCodableDescription *_objectDescription;
    NSMutableDictionary *_customValueForKeyDictionary;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) NSMutableDictionary *customValueForKeyDictionary; // @synthesize customValueForKeyDictionary=_customValueForKeyDictionary;
@property(retain, nonatomic, setter=_setObjectDescription:) INCodableDescription *_objectDescription; // @synthesize _objectDescription;
- (id)_valueForAttribute:(id)arg1 ofClass:(Class)arg2;
- (id)_valueForAttribute:(id)arg1;
- (BOOL)_boolValueForAttribute:(id)arg1;
- (unsigned long long)_UInt64ValueForAttribute:(id)arg1;
- (unsigned int)_UInt32ValueForAttribute:(id)arg1;
- (long long)_int64ValueForAttribute:(id)arg1;
- (int)_int32ValueForAttribute:(id)arg1;
- (float)_floatValueForAttribute:(id)arg1;
- (double)_doubleValueForAttribute:(id)arg1;
- (void)_setBoolValue:(BOOL)arg1 forAttribute:(id)arg2;
- (void)_setUInt64Value:(unsigned long long)arg1 forAttribute:(id)arg2;
- (void)_setUInt32Value:(unsigned int)arg1 forAttribute:(id)arg2;
- (void)_setInt64Value:(long long)arg1 forAttribute:(id)arg2;
- (void)_setInt32Value:(int)arg1 forAttribute:(id)arg2;
- (void)_setFloatValue:(float)arg1 forAttribute:(id)arg2;
- (void)_setDoubleValue:(double)arg1 forAttribute:(id)arg2;
- (void)_setValue:(void *)arg1 forAttribute:(id)arg2;
- (void)_setObject:(id)arg1 forAttribute:(id)arg2;
- (id)_copyWithZone:(struct _NSZone *)arg1 error:(id *)arg2;
- (void)_setEmptyArrayForNonNilRepeatedAttributes:(id)arg1;
- (id)_dataWithError:(id *)arg1;
- (BOOL)_writeTo:(id)arg1 error:(id *)arg2;
- (BOOL)_readFrom:(id)arg1 error:(id *)arg2;
- (id)_nonNilRepeatedAttributes;
- (id)_nonNilAttributes;
- (BOOL)_isStringAttribute:(id)arg1 equalTo:(id)arg2;
- (BOOL)_isAttribute:(id)arg1 equalTo:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)_dictionaryRepresentationWithNullValues:(BOOL)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)data;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)isValidKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setNilValueForAllKeys;
- (id)_initWithCodableDescription:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)initWithCodableDescription:(id)arg1 data:(id)arg2;

@end


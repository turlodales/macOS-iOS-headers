//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSFetchIndexDescription, NSPropertyDescription, NSString;

@interface NSFetchIndexElementDescription : NSObject <NSSecureCoding, NSCoding>
{
    NSPropertyDescription *_property;
    NSString *_propertyName;
    unsigned long long _collationType;
    NSFetchIndexDescription *_indexDescription;
    struct __indexElementDescriptionFlags {
        unsigned int _ascending:1;
        unsigned int _propertyIsRetained:1;
        unsigned int _unique:1;
        unsigned int _reservedEntityDescription:29;
    } _indexElementDescriptionFlags;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, retain) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void)_setIndexDescription:(id)arg1;
@property(readonly, nonatomic) NSFetchIndexDescription *indexDescription;
- (void)_setUniqueBit:(BOOL)arg1;
- (void)_setIsUnique:(BOOL)arg1;
- (BOOL)_isUnique;
- (void)_setAscending:(BOOL)arg1;
@property(getter=isAscending) BOOL ascending;
@property unsigned long long collationType;
@property(readonly, retain) NSPropertyDescription *property;
- (id)_resolveProperty;
- (void)_throwIfNotEditable;
- (BOOL)_isEditable;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPropertyName:(id)arg1 property:(id)arg2 collationType:(unsigned long long)arg3 ascending:(BOOL)arg4;
- (id)initWithPropertyName:(id)arg1 collationType:(unsigned long long)arg2;
- (id)initWithProperty:(id)arg1 collationType:(unsigned long long)arg2;
- (void)_validateCollationType:(unsigned long long)arg1 forProperty:(id)arg2;

@end


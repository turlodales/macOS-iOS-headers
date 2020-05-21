//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSInvocation, NSString;

__attribute__((visibility("hidden")))
@interface _PBProperty : NSObject
{
    NSString *_name;
    Class _objectType;
    Class _subObjectType;
    BOOL _type;
    BOOL _subType;
    NSInvocation *_setter;
    NSInvocation *_getter;
    NSInvocation *_has;
    NSInvocation *_count;
    NSInvocation *_convertToString;
    NSInvocation *_convertFromString;
    CDUnknownFunctionPointerType _toDictionaryReprFn;
    CDUnknownFunctionPointerType _fromDictionaryReprFn;
    NSString *_structName;
    NSArray *_structFields;
    unsigned long long _structSize;
}

+ (id)getValidPropertiesForType:(Class)arg1 withCache:(id)arg2;
+ (id)pbPropertyFor:(struct objc_property *)arg1 type:(Class)arg2;
@property(retain, nonatomic) Class subObjectType; // @synthesize subObjectType=_subObjectType;
@property(retain, nonatomic) Class objectType; // @synthesize objectType=_objectType;
@property(nonatomic) BOOL subType; // @synthesize subType=_subType;
@property(nonatomic) BOOL type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)getPtrArrayValueFromInstance:(id)arg1;
- (void)setNumberValue:(id)arg1 onInstance:(id)arg2;
- (id)getNumberValueFromInstance:(id)arg1;
- (BOOL)setStructValue:(id)arg1 onInstance:(id)arg2;
- (id)getStructValueFromInstance:(id)arg1;
- (void)setObjValue:(id)arg1 onInstance:(id)arg2;
- (id)getObjValueFromInstance:(id)arg1;
- (unsigned long long)getCountOfRepeatedValuesFromInstance:(id)arg1;
@property(readonly, nonatomic) BOOL isStruct;
@property(readonly, nonatomic) BOOL isObject;
@property(readonly, nonatomic) BOOL canConvertFromString;
- (BOOL)instanceHasValue:(id)arg1;
- (id)initWith:(struct objc_property *)arg1 type:(Class)arg2;
- (id)_parseStructDefinition:(id)arg1;
- (void)dealloc;

@end


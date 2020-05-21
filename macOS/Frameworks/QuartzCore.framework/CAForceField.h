//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class CALayer, CAValueFunction, NSString;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_name;
    CALayer *_layer;
    CAValueFunction *_function;
    BOOL _enabled;
}

+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)attributesForKey:(id)arg1;
+ (id)properties;
+ (id)defaultValueForKey:(id)arg1;
+ (id)forceField;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributesForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)dealloc;
@property(retain) CAValueFunction *function;
@property(retain) CALayer *layer;
@property(getter=isEnabled) BOOL enabled;
@property(copy) NSString *name;
- (id)init;

@end


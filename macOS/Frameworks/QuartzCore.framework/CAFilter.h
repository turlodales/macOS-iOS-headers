//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    unsigned int _type;
    NSString *_name;
    unsigned int _flags;
    void *_attr;
    void *_cache;
}

+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)attributesForKey:(id)arg1;
+ (id)filterWithName:(id)arg1;
+ (id)filterWithType:(id)arg1;
+ (id)filterTypes;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct Object *)CA_copyRenderValue;
- (id)attributesForKeyPath:(id)arg1;
- (id)outputKeys;
- (id)inputKeys;
- (void)dealloc;
- (void)setDefaults;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
@property BOOL cachesInputImage;
@property(getter=isEnabled) BOOL enabled;
- (BOOL)enabled;
@property(copy) NSString *name;
@property(readonly) NSString *type;
- (id)initWithName:(id)arg1;
- (id)initWithType:(id)arg1;

@end


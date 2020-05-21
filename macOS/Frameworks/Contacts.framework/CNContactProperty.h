//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CNContact, NSString;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_key;
    NSString *_identifier;
    CNContact *_internalContact;
}

+ (BOOL)supportsSecureCoding;
+ (id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
+ (id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContact *internalContact; // @synthesize internalContact=_internalContact;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *key; // @synthesize key=_key;
- (id)primitiveValue;
- (BOOL)isMultiValueProperty;
@property(readonly) id value;
@property(readonly, copy) NSString *label;
- (id)labeledValue;
- (id)labeledValueForContact:(id)arg1;
- (id)sourceContact;
@property(readonly, copy) CNContact *contact;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end


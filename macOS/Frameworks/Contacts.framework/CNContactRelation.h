//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNObjectValidation.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CNContactRelation : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
+ (id)contactRelationWithName:(id)arg1;
@property(copy) NSString *name; // @synthesize name=_name;
- (BOOL)isValid:(id *)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


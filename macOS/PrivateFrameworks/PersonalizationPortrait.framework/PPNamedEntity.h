//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_PASZonedObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, PPNamedEntityRecord;

@interface PPNamedEntity : _PASZonedObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    unsigned long long _category;
    NSString *_bestLanguage;
}

+ (id)describeCategory:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bestLanguage; // @synthesize bestLanguage=_bestLanguage;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) double sentimentScore;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNamedEntity:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) PPNamedEntityRecord *mostRelevantRecord;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3 mostRelevantRecord:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3Query.h>

#import "NSSecureCoding.h"

@class NSString;

@interface ML3AggregateQuery : ML3Query <NSSecureCoding>
{
    Class _aggregateEntityClass;
    NSString *_foreignPersistentIDProperty;
    BOOL _isFastCountable;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL isFastCountable; // @synthesize isFastCountable=_isFastCountable;
@property(readonly, nonatomic) NSString *foreignPersistentIDProperty; // @synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty;
@property(readonly, nonatomic) Class aggregateEntityClass; // @synthesize aggregateEntityClass=_aggregateEntityClass;
- (BOOL)sectionsPersistentIDColumnIsDistinct;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2;
- (unsigned long long)countOfEntities;
- (BOOL)hasEntities;
- (id)persistentIDProperty;
- (Class)entityClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3;

@end


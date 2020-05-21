//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3Query.h>

@class ML3Container, ML3Predicate, NSArray;

@interface ML3ContainerQuery : ML3Query
{
    ML3Predicate *_containerPredicate;
    ML3Container *_container;
    NSArray *_limitedPersistentIDs;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *limitedPersistentIDs; // @synthesize limitedPersistentIDs=_limitedPersistentIDs;
@property(readonly, nonatomic) ML3Container *container; // @synthesize container=_container;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2;
- (id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)arg1 ordered:(BOOL)arg2;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;
- (unsigned long long)countOfEntities;
- (unsigned long long)countOfDistinctRowsForColumn:(id)arg1;
- (BOOL)hasEntities;
@property(readonly, nonatomic) BOOL requiresSmartLimiting;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


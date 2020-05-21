//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@interface ML3TruthPredicate : ML3Predicate
{
    BOOL _truthValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)falsePredicate;
+ (id)truePredicate;
- (BOOL)isFalseAlways;
- (BOOL)isTrueAlways;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)_predicateString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


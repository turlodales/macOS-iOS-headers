//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3DatabaseConnection, ML3DatabaseStatement, NSDictionary, NSString;

@interface ML3DatabaseResult : NSObject
{
    ML3DatabaseStatement *_statement;
    ML3DatabaseConnection *_connection;
    NSDictionary *_columnNameIndexMap;
    unsigned long long _limitIndex;
    NSString *_limitProperty;
    long long _limitValue;
}

- (void).cxx_destruct;
@property(nonatomic) long long limitValue; // @synthesize limitValue=_limitValue;
@property(copy, nonatomic) NSString *limitProperty; // @synthesize limitProperty=_limitProperty;
- (id)_statement;
- (id)objectsInColumn:(unsigned long long)arg1;
- (id)stringValueForFirstRowAndColumn;
- (long long)int64ValueForFirstRowAndColumn;
- (id)objectForFirstRowAndColumn;
- (BOOL)hasAtLeastOneRow;
- (id)rows;
- (void)enumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (id)columnNameIndexMap;
- (unsigned long long)indexForColumnName:(id)arg1;
- (void)setLimitProperty:(id)arg1 limitValue:(long long)arg2;
- (id)initWithStatement:(id)arg1 connection:(id)arg2;
- (id)init;

@end


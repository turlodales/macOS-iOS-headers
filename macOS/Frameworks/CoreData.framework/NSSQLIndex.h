//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFetchIndexDescription, NSMutableArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLIndex : NSObject
{
    NSFetchIndexDescription *_indexDescription;
    NSSQLEntity *_sqlEntity;
    NSMutableArray *_createStrings;
    NSMutableArray *_dropStrings;
    NSMutableArray *_updateStrings;
}

@property(retain, nonatomic) NSMutableArray *updateTableStatements; // @synthesize updateTableStatements=_updateStrings;
@property(retain, nonatomic) NSMutableArray *dropTableStatements; // @synthesize dropTableStatements=_dropStrings;
@property(retain, nonatomic) NSMutableArray *createTableStatements; // @synthesize createTableStatements=_createStrings;
@property(readonly, nonatomic) NSSQLEntity *sqlEntity; // @synthesize sqlEntity=_sqlEntity;
@property(readonly, retain, nonatomic) NSFetchIndexDescription *indexDescription; // @synthesize indexDescription=_indexDescription;
- (BOOL)isUnique;
- (id)bulkUpdateStatementsForStore:(id)arg1;
- (id)dropStatementsForStore:(id)arg1;
- (id)generateStatementsForStore:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2;

@end


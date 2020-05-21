//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMBSQLContext, NSArray;

@interface HMBSQLStatement : HMFObject
{
    HMBSQLContext *_context;
    struct sqlite3_stmt *_statement;
    NSArray *_queryPlans;
}

+ (id)queryPlansForContext:(id)arg1 statement:(id)arg2;
+ (struct sqlite3_stmt *)sqlStatementForContext:(id)arg1 statement:(id)arg2;
+ (void)setExplainStatements:(BOOL)arg1;
+ (BOOL)explainStatements;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *queryPlans; // @synthesize queryPlans=_queryPlans;
@property(nonatomic) struct sqlite3_stmt *statement; // @synthesize statement=_statement;
@property(readonly, nonatomic) __weak HMBSQLContext *context; // @synthesize context=_context;
- (void)finalize;
- (void)dealloc;
- (id)initWithContext:(id)arg1 statement:(id)arg2;
- (id)initWithContext:(id)arg1 statement:(struct sqlite3_stmt *)arg2 queryPlans:(id)arg3;

@end


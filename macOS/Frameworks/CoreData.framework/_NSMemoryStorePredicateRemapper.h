//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _NSMemoryStorePredicateRemapper : NSObject
{
    NSManagedObjectContext *_context;
}

+ (id)defaultInstance;
+ (void)initialize;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;
- (id)createPredicateForFetchFromPredicate:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPredicate;

@interface EDMessageQueryParserObject : NSObject
{
    unsigned long long _queryType;
    NSPredicate *_predicate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) unsigned long long queryType; // @synthesize queryType=_queryType;
- (id)initWithQueryType:(unsigned long long)arg1 predicate:(id)arg2;

@end


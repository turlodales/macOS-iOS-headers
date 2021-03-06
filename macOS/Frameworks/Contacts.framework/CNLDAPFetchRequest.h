//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNLDAPFetchRequest : NSObject
{
    unsigned int _fetchLimit;
    NSString *_filter;
    NSArray *_searchBases;
    NSArray *_attributesToFetch;
    unsigned long long _resultType;
}

+ (id)defaultAttributesToFetch;
+ (id)filterWithPredicate:(id)arg1 error:(id *)arg2;
+ (id)filterWithUserInput:(id)arg1;
- (void).cxx_destruct;
@property unsigned long long resultType; // @synthesize resultType=_resultType;
@property(copy) NSArray *attributesToFetch; // @synthesize attributesToFetch=_attributesToFetch;
@property unsigned int fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(copy) NSArray *searchBases; // @synthesize searchBases=_searchBases;
@property(copy) NSString *filter; // @synthesize filter=_filter;
- (id)copy;
- (id)init;

@end


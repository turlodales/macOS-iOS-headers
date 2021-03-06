//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _CPLEngineScopeCache : NSObject
{
    NSMutableDictionary *_scopeCache;
    NSMutableDictionary *_scopeByLocalIndex;
    NSMutableDictionary *_scopeByCloudIndex;
    NSMutableDictionary *_scopeByStableIndex;
    NSIndexSet *_validLocalIndexes;
    NSIndexSet *_validCloudIndexes;
}

- (void).cxx_destruct;
- (void)cacheValidCloudIndexes:(id)arg1;
- (id)validCloudIndexes;
- (void)cacheValidLocalIndexes:(id)arg1;
- (id)validLocalIndexes;
- (id)scopeWithStableIndex:(long long)arg1;
- (id)scopeWithCloudIndex:(long long)arg1;
- (id)scopeWithLocalIndex:(long long)arg1;
- (id)scopeWithIdentifier:(id)arg1;
- (void)cacheScope:(id)arg1 forScopeStorage:(id)arg2;
- (id)init;

@end


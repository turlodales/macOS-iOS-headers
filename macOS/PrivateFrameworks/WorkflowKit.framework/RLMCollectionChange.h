//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RLMCollectionChange : NSObject
{
    struct CollectionChangeSet _indices;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)modificationsInSection:(unsigned long long)arg1;
- (id)insertionsInSection:(unsigned long long)arg1;
- (id)deletionsInSection:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *modifications;
@property(readonly, nonatomic) NSArray *deletions;
@property(readonly, nonatomic) NSArray *insertions;
- (id)initWithChanges:(struct CollectionChangeSet)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCollectionLayoutItem, _NSCollectionLayoutItemSolver;

__attribute__((visibility("hidden")))
@interface _NSCollectionSolutionGroupArrangementItem : NSObject
{
    _NSCollectionLayoutItemSolver *_solution;
    struct CGRect _layoutFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _NSCollectionLayoutItemSolver *solution; // @synthesize solution=_solution;
@property(nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame=_layoutFrame;
@property(readonly, nonatomic) NSCollectionLayoutItem *item;
- (id)initWithSolution:(id)arg1;

@end


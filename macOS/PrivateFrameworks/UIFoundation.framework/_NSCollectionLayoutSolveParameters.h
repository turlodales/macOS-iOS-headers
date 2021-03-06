//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/_NSCollectionLayoutSolveResult-Protocol.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSSet, NSString;
@protocol _NSCollectionLayoutAuxiliaryOffsets;

@interface _NSCollectionLayoutSolveParameters : NSObject <_NSCollectionLayoutSolveResult>
{
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxiliaryDict;
    BOOL _isFullResolve;
    id <_NSCollectionLayoutAuxiliaryOffsets> _invalidatedSupplementaryOffsets;
}

+ (id)parametersForFullResolve;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <_NSCollectionLayoutAuxiliaryOffsets> invalidatedSupplementaryOffsets; // @synthesize invalidatedSupplementaryOffsets=_invalidatedSupplementaryOffsets;
- (id)invalidatedAuxiliaryOffsets;
- (void)addAuxiliaryIndex:(long long)arg1 elementKind:(id)arg2;
- (void)addItemIndex:(long long)arg1;
- (id)indexesForInvalidatedAuxiliariesOfKind:(id)arg1;
@property(readonly, nonatomic) NSSet *invalidatedAuxiliaryKinds;
@property(readonly, nonatomic) BOOL hasInvalidatedItems;
@property(readonly, nonatomic) BOOL isFullResolve;
@property(readonly, nonatomic) NSIndexSet *invalidatedIndexes;
- (id)init;
- (id)initWithInvalidatedIndexes:(id)arg1;
- (id)initWithInvalidatedIndexes:(id)arg1 isFullResolve:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


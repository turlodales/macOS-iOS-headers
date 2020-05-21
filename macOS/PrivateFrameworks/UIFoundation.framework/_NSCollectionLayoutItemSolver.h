//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "_NSCollectionLayoutAuxiliaryHosting.h"

@class NSArray, NSCollectionLayoutItem, NSString, _NSCollectionLayoutItemSolverState;

@interface _NSCollectionLayoutItemSolver : NSObject <NSCopying, _NSCollectionLayoutAuxiliaryHosting>
{
    BOOL _layoutRTL;
    int _layoutAxis;
    NSCollectionLayoutItem *_item;
    id <NSCollectionLayoutContainer> _container;
    NSObject *_traitCollection;
    _NSCollectionLayoutItemSolverState *_solveResult;
    id <_NSCollectionPreferredSizes> _preferredSizes;
    id <_NSCollectionLayoutSupplementaryEnrolling> _supplementaryEnroller;
    long long _solutionRecursionDepth;
    long long _maxFrameCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(readonly, nonatomic) long long maxFrameCount; // @synthesize maxFrameCount=_maxFrameCount;
@property(readonly, nonatomic) long long solutionRecursionDepth; // @synthesize solutionRecursionDepth=_solutionRecursionDepth;
@property(retain, nonatomic) id <_NSCollectionLayoutSupplementaryEnrolling> supplementaryEnroller; // @synthesize supplementaryEnroller=_supplementaryEnroller;
@property(retain, nonatomic) id <_NSCollectionPreferredSizes> preferredSizes; // @synthesize preferredSizes=_preferredSizes;
@property(retain, nonatomic) _NSCollectionLayoutItemSolverState *solveResult; // @synthesize solveResult=_solveResult;
@property(readonly, nonatomic) BOOL layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(readonly, nonatomic) NSObject *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) id <NSCollectionLayoutContainer> container; // @synthesize container=_container;
@property(readonly, nonatomic) NSCollectionLayoutItem *item; // @synthesize item=_item;
- (id)auxiliaryHostPreferredSizes;
- (id)auxiliaryHostSupplementaryEnroller;
- (long long)auxiliaryHostAuxiliaryKind;
- (int)auxiliaryHostLayoutAxis;
- (BOOL)auxiliaryHostShouldLayoutRTL;
- (id)auxiliaryHostAuxiliaryItems;
- (id)auxiliaryHostContainer;
- (struct CGPoint)auxiliaryHostAdditionalFrameOffset;
- (struct CGSize)auxiliaryHostPinningContentSize;
- (struct CGSize)auxiliaryHostContentSize;
- (id)_normalizeVisualFormatParserItems:(id)arg1 layoutAxis:(int)arg2;
- (void)_updateGroupByQueryingItemsIfNeeded:(id)arg1 container:(id)arg2;
- (struct CGRect)_adjustedFrameForFrame:(struct CGRect)arg1 offset:(struct CGPoint)arg2;
- (struct CGPoint)_frameOffsetForAdditionalFrameOffset:(struct CGPoint)arg1 repeatOffset:(long long)arg2 repeatAxis:(int)arg3 interSolutionSpacing:(double)arg4;
- (id)_supplementaryFrameWithKind:(id)arg1 absoluteIndex:(long long)arg2 additionalFrameOffset:(struct CGPoint)arg3 interSolutionSpacing:(double)arg4 repeatAxis:(int)arg5;
- (id)_supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(struct CGPoint)arg3;
- (id)_frameForAbsoluteIndex:(long long)arg1 additionalFrameOffset:(struct CGPoint)arg2 interSolutionSpacing:(double)arg3 repeatAxis:(int)arg4;
- (void)_enumerateSolutionFramesForQueryRect:(struct CGRect)arg1 itemLimit:(long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)_queryFramesWithQueryRect:(struct CGRect)arg1 additionalFrameOffset:(struct CGPoint)arg2 itemIndexOffset:(long long)arg3 itemLimit:(long long)arg4 supplementaryRepeatOffset:(long long)arg5;
- (id)_queryFramesWithQueryRect:(struct CGRect)arg1 additionalFrameOffset:(struct CGPoint)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 itemLimit:(long long)arg5;
- (void)_transformGroupArrangementItemsForRTL:(id)arg1;
- (id)_arrangeSolutionItems:(id)arg1 alongLayoutAxis:(int)arg2 forContainer:(id)arg3 additionalLayoutOffset:(struct CGPoint)arg4 interItemSpacing:(id)arg5;
- (struct CGSize)_effectiveGroupSizeForGroup:(id)arg1 container:(id)arg2;
- (int)_layoutAxisForGroup:(id)arg1;
- (unsigned long long)_directionalEdgeForLayoutAxis:(int)arg1 preEdge:(BOOL)arg2;
- (struct CGPoint)_layoutOffsetForContainer:(id)arg1;
- (struct CGSize)_effectiveContainerSizeForContainer:(id)arg1;
- (double)_additionalDimensionForEdgeSpacingAlongAxis:(int)arg1 group:(id)arg2 trailingEdgeOnly:(BOOL)arg3;
- (void)_warnIfClientSpecifiesFlexibleRootGroupEdgeSpacingAlongLayoutAxisAsNeededForGroup:(id)arg1 layoutAxis:(int)arg2;
- (struct CGPoint)_outerContainerOffsetForGroup:(id)arg1 groupComputedSize:(struct CGSize)arg2 container:(id)arg3 outerLayoutAxis:(int)arg4;
- (void)_solveSingleItem;
- (void)_solveGroup;
- (void)_solveWithCustomGroupItemProvider;
- (void)_solve;
- (void)_solveForContainer:(id)arg1 layoutAxis:(int)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(BOOL)arg5 preferredSizes:(id)arg6 solutionRecursionDepth:(long long)arg7;
@property(readonly, nonatomic) struct CGRect contentFrame;
@property(readonly, nonatomic) struct CGRect layoutFrame;
- (id)supplementaryFrameWithKind:(id)arg1 absoluteIndex:(long long)arg2 additionalFrameOffset:(struct CGPoint)arg3 interSolutionSpacing:(double)arg4 repeatAxis:(int)arg5;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(struct CGPoint)arg3;
- (id)frameForAbsoluteIndex:(long long)arg1 additionalFrameOffset:(struct CGPoint)arg2 interSolutionSpacing:(double)arg3 repeatAxis:(int)arg4;
- (id)queryFramesWithQueryRect:(struct CGRect)arg1 additionalFrameOffset:(struct CGPoint)arg2 itemIndexOffset:(long long)arg3 itemLimit:(long long)arg4 supplementaryRepeatOffset:(long long)arg5;
- (id)queryFramesWithQueryRect:(struct CGRect)arg1 additionalFrameOffset:(struct CGPoint)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 itemLimit:(long long)arg5;
- (id)queryFramesWithItemLimit:(long long)arg1;
- (id)queryFramesWithQueryRect:(struct CGRect)arg1 additionalFrameOffset:(struct CGPoint)arg2;
- (id)queryFramesWithQueryRect:(struct CGRect)arg1;
- (id)queryFramesApplyingFrameOffset:(struct CGPoint)arg1;
- (id)availableLayoutSpaces;
@property(readonly, nonatomic) id <_NSCollectionLayoutAuxiliaryOffsets> supplementaryOffsets;
@property(readonly, nonatomic) NSArray *auxiliaryFrames;
@property(readonly, nonatomic) NSArray *itemFrames;
@property(readonly, nonatomic) long long auxiliaryFrameCount;
@property(readonly, nonatomic) long long itemFrameCount;
@property(readonly, nonatomic) long long frameCount;
- (struct CGSize)contentSizeForFrameCount:(long long)arg1 layoutAxis:(int)arg2;
- (id)visualDescription;
@property(readonly, copy) NSString *description;
- (void)solveForContainer:(id)arg1 layoutAxis:(int)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(BOOL)arg5 preferredSizes:(id)arg6;
- (void)solveForContainer:(id)arg1 layoutAxis:(int)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(BOOL)arg5;
- (BOOL)canAccomodateItemWithSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItem:(id)arg1 supplementaryEnroller:(id)arg2;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 supplementaryEnroller:(id)arg2 container:(id)arg3 layoutAxis:(int)arg4 traitCollection:(id)arg5 maxFrameCount:(long long)arg6 layoutRTL:(BOOL)arg7 preferredSizes:(id)arg8 solverResult:(id)arg9 solutionRecursionDepth:(long long)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


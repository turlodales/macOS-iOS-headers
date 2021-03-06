//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCollectionViewFlowLayout, NSMutableArray;

@interface _NSFlowLayoutInfo : NSObject
{
    NSMutableArray *_sections;
    BOOL _useFloatingHeaderFooter;
    BOOL _horizontal;
    BOOL _leftToRight;
    struct CGRect _visibleBounds;
    struct CGSize _layoutSize;
    double _dimension;
    BOOL _isValid;
    CDStruct_2f5e8405 _rowAlignmentOptions;
    NSCollectionViewFlowLayout *_layout;
    struct CGSize _computedEstimatedSum;
    long long _computedEstimatedCount;
    BOOL _usesFloatingHeaderFooter;
    struct CGSize _contentSize;
    BOOL _estimatesSizes;
    struct CGSize _dropTargetGapSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize dropTargetGapSize; // @synthesize dropTargetGapSize=_dropTargetGapSize;
@property(nonatomic) BOOL estimatesSizes; // @synthesize estimatesSizes=_estimatesSizes;
@property(nonatomic) __weak NSCollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) CDStruct_2f5e8405 rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) BOOL leftToRight; // @synthesize leftToRight=_leftToRight;
@property(nonatomic) BOOL horizontal; // @synthesize horizontal=_horizontal;
@property(nonatomic) double dimension; // @synthesize dimension=_dimension;
@property(nonatomic) BOOL usesFloatingHeaderFooter; // @synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter;
- (BOOL)section:(id)arg1 shouldShowCollapseButton:(BOOL)arg2;
@property(readonly) BOOL _collapsesSectionsToFirstItem;
- (id)invalidatedIndexPaths;
@property(readonly, nonatomic) struct CGSize computedEstimatedSize;
- (id)specifiedItemSizes;
- (id)setSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2;
- (void)didUpdateSizeForSection:(long long)arg1 withDelta:(double)arg2;
- (id)copy;
- (id)snapshot;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (id)addSection;
- (void)invalidate:(BOOL)arg1;
- (id)init;

@end


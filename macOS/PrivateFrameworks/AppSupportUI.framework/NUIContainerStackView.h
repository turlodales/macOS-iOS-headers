//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIContainerView.h>

#import <AppSupportUI/_NUIGridArrangementContainer-Protocol.h>

@class NSString;

@interface NUIContainerStackView : NUIContainerView <_NUIGridArrangementContainer>
{
    struct _NUIGridArrangement _arrangement;
    CDStruct_0d6b4eb6 _visibleCount;
    struct map<NSView *, double, std::__1::less<NSView *>, std::__1::allocator<std::__1::pair<NSView *const, double>>> _customSpacings;
    struct {
        unsigned int alignment:8;
        unsigned int distribution:8;
        unsigned int axis:4;
    } _stackViewFlags;
    double _spacing;
}

+ (id)verticalContainerStackViewWithArrangedSubviews:(id)arg1;
+ (id)horizontalContainerStackViewWithArrangedSubviews:(id)arg1;
+ (id)containerStackViewWithAxis:(long long)arg1 arrangedSubviews:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (id)debugDictionary;
- (id)arrangedDescription;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)_calculateArrangedSizeFittingSize:(struct CGSize)arg1 forLayout:(BOOL)arg2;
- (void)populateGridArrangementDimension:(vector_b8a5df6e *)arg1 withCells:(const vector_f8404f95 *)arg2 axis:(long long)arg3;
- (void)populateGridArrangementCells:(vector_f8404f95 *)arg1;
- (long long)_effectiveAlignmentForArrangedSubview:(id)arg1;
- (BOOL)setNeedsInvalidation:(long long)arg1;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)setSpacing:(double)arg1 afterArrangedSubviewAtIndex:(long long)arg2;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (double)customSpacingAfterView:(id)arg1;
@property(nonatomic) long long alignment;
@property(nonatomic) long long distribution;
@property(nonatomic) long long axis;
- (void)setBaselineRelativeArrangement:(BOOL)arg1;
- (id)calculateViewForLastBaselineLayout;
- (id)calculateViewForFirstBaselineLayout;
- (id)_baselineViewVendForFirstBaseline:(BOOL)arg1;
- (void)dealloc;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


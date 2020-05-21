//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject
{
    struct {
        char referenceValuesByMetricsOrder;
    } _needsUpdateFlags;
    NSMutableArray *__referenceValuesByMetrics;
    double __cachedMetric;
    NSValue *__cachedValue;
}

+ (struct CGSize)bestItemSizeForAvailableWidth:(double)arg1 screenScale:(double)arg2 columns:(unsigned long long)arg3 bestSpacing:(double *)arg4 bestInset:(double *)arg5;
+ (struct CGSize)zoomableGridLayoutSmallItemSizeForWidth:(double)arg1;
+ (unsigned long long)photosGridLayoutColumnsForWidth:(double)arg1;
+ (long long)photosGridSizeSubclassForScreenSize:(struct CGSize)arg1;
+ (id)allLayoutMetricConfigurationSizes;
+ (id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+ (id)gadgetColumnWidthSpanSingleSetAInterpolator;
+ (id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+ (id)layoutMarginWidthInterpolator;
+ (id)legacyLayoutMarginWidthInterpolator;
+ (id)albumsGridItemWidthInterpolator;
+ (id)albumsGridEdgeInsetsInterpolator;
+ (id)memoriesItemWidthInterpolator;
+ (id)memoriesDetailsEdgeInsetsInterpolator;
+ (id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+ (id)memoriesFeedPortraitEdgeInsetsInterpolator;
+ (id)memoriesFeedInteritemSpacingInterpolator;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setCachedValue:) NSValue *_cachedValue; // @synthesize _cachedValue=__cachedValue;
@property(nonatomic, setter=_setCachedMetric:) double _cachedMetric; // @synthesize _cachedMetric=__cachedMetric;
@property(readonly, nonatomic) NSMutableArray *_referenceValuesByMetrics; // @synthesize _referenceValuesByMetrics=__referenceValuesByMetrics;
- (double)valueForMetric:(double)arg1;
- (id)_valueForMetric:(double)arg1 fromInterpolationBetweenValue:(id)arg2 secondValue:(id)arg3;
- (void)_getReferenceValueForMetric:(double)arg1 exactMatch:(id *)arg2 closestBeforeMatch:(id *)arg3 closestAfterMatch:(id *)arg4;
- (void)setReferenceValue:(double)arg1 forMetric:(double)arg2;
- (void)_updateReferenceValuesByMetricsOrderIfNeeded;
- (void)_setNeedsUpdate;
- (void)_invalidateReferenceValuesByMetricsOrder;
- (id)init;

@end


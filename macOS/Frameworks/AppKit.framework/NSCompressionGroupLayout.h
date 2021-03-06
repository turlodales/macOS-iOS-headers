//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSArray, NSMapTable, NSSet, NSUserInterfaceCompressionOptions;

@interface NSCompressionGroupLayout : NSObject <NSCopying>
{
    BOOL _prefersEqualWidths;
    double _preferredItemWidth;
    NSArray *_prioritizedCompressionOptions;
    NSUserInterfaceCompressionOptions *_currentOptions;
    NSMapTable *_itemsToWidths;
    double _equalMinWidth;
    double _equalMaxWidth;
    double _guarenteedEqualWidth;
    double _largestUnstretchedWidth;
    double _largestStretchedWidth;
    double _smallestStretchedWidth;
    double _largestPreferredWidth;
    NSSet *_currentItems;
    NSArray *_effectiveCompressionOptions;
    BOOL _hasAlertStyle;
    NSArray *_cachedItemsExcludingSpaces;
}

- (double)_minimumWidthForCompressionOptions:(id)arg1;
- (void)item:(id)arg1 minSize:(struct CGSize *)arg2 maxSize:(struct CGSize *)arg3 preferredSize:(struct CGSize *)arg4;
- (double)_guarenteedWidthForNotBreakingEqualWidths;
- (id)_optionPriorToBreakingEqualWidths;
- (double)_largestPreferredWidthForGroup;
- (double)_smallestStretchedWidthForGroup;
- (double)_largestStretchedWidthForGroup;
- (double)_largestUnstretchedWidthForGroup;
- (BOOL)_itemViewWantsAlertStylePadding:(id)arg1;
- (double)_equalMinWidthForGuarenteedEqualWidthGroup;
- (double)_equalMaxWidthForGuarenteedEqualWidthGroup;
- (id)_defaultCompressionOptionOrder;
- (void)frameChangesEnded;
- (void)_setCurrentCompressionOptions:(id)arg1;
- (void)_item:(id)arg1 setCurrentCompressionOptions:(id)arg2;
- (void)_teardownItems:(id)arg1;
- (void)_setupItems:(id)arg1;
- (id)_compressionOptionForItem:(id)arg1;
- (double)_cachedWidthForItem:(id)arg1 options:(id)arg2;
- (id)_prioritizedAndSanitizedCompressionOptionsForOptions:(id)arg1;
- (void)invalidateMeasurementsOfItems;
- (void)invalidateMeasurementsOfItem:(id)arg1;
- (id)_itemsExcludingSpaces;
- (BOOL)_customOptionOrderAllowsOption:(id)arg1;
- (id)_compoundedCompressionOptions;
- (void)dealloc;
@property BOOL groupHasAlertStyle;
@property(copy) NSSet *items;
@property(readonly) NSUserInterfaceCompressionOptions *effectiveCompressionOptions;
@property(copy) NSArray *prioritizedCompressionOptions;
@property double preferredItemWidth;
@property BOOL prefersEqualWidths;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


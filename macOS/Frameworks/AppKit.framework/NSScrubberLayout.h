//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSScrubber;

@interface NSScrubberLayout : NSObject <NSCoding>
{
    id _private;
    unsigned int _dirty:1;
    unsigned int _reservedFlags:31;
}

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (long long)numberOfItems;
- (long long)selectedItem;
- (struct CGSize)visibleContentSize;
@property(readonly) BOOL automaticallyMirrorsInRightToLeftLayout;
- (BOOL)shouldInvalidateLayoutForChangeFromVisibleRect:(struct CGRect)arg1 toVisibleRect:(struct CGRect)arg2;
@property(readonly) BOOL shouldInvalidateLayoutForHighlightChange;
@property(readonly) BOOL shouldInvalidateLayoutForSelectionChange;
- (id)layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndex:(long long)arg1;
@property(readonly) struct CGSize scrubberContentSize;
- (void)prepareLayout;
- (id)_layoutAttributesForItemsInRect:(struct CGRect)arg1 withState:(CDStruct_99688279)arg2;
- (id)_layoutAttributesForItemAtIndex:(long long)arg1 withState:(CDStruct_99688279)arg2;
- (BOOL)_shouldMirrorForRTL;
- (void)_prepareLayoutIfNeeded;
- (void)invalidateLayout;
@property(readonly) struct CGRect visibleRect;
- (void)_setScrubber:(id)arg1;
@property(readonly) __weak NSScrubber *scrubber;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


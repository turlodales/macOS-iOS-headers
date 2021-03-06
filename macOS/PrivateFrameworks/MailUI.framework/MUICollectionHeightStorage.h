//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MUICollectionHeightStorage : NSObject
{
    NSMutableArray *_heights;
    NSMutableArray *_yCache;
    double _height;
    double _spacing;
    struct NSEdgeInsets _margins;
}

+ (id)keyPathsForValuesAffectingCount;
- (void).cxx_destruct;
@property(nonatomic) struct NSEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) double height; // @synthesize height=_height;
- (unsigned long long)indexAtY:(double)arg1;
- (double)maxYOfIndex:(unsigned long long)arg1;
- (double)minYOfIndex:(unsigned long long)arg1;
- (double)heightOfIndex:(unsigned long long)arg1;
- (void)setHeight:(double)arg1 ofIndex:(unsigned long long)arg2;
- (void)_invalidateCacheForIndex:(unsigned long long)arg1;
- (void)removeAllHeights;
- (void)removeHeightAtIndex:(unsigned long long)arg1;
- (void)moveHeightAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)addHeight:(double)arg1;
- (void)insertHeight:(double)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;

@end


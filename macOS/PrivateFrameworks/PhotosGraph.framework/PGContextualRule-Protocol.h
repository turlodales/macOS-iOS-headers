//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PGContextualOptions, PGHighlightItemList;

@protocol PGContextualRule <NSObject>
- (void)enumerateContextualKeyAssetsForYearHighlight:(PGHighlightItemList *)arg1 withOptions:(PGContextualOptions *)arg2 modelReader:(id <PGHighlightItemModelReader>)arg3 usingBlock:(void (^)(PHAsset *, double, id <PGHighlightItem>, id <PGHighlightItem>, char *))arg4;
- (BOOL)canProvideContextualKeyAssetsWithOptions:(PGContextualOptions *)arg1;
@end


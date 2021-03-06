//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class PGContextualOptions, PGHighlightItemList;
@protocol PGHighlightItemModelReader;

@protocol PGContextualRule <NSObject>
- (void)enumerateContextualKeyAssetsForYearHighlight:(PGHighlightItemList *)arg1 withOptions:(PGContextualOptions *)arg2 modelReader:(id <PGHighlightItemModelReader>)arg3 usingBlock:(void (^)(PHAsset *, double, id <PGHighlightItem>, id <PGHighlightItem>, char *))arg4;
- (BOOL)canProvideContextualKeyAssetsWithOptions:(PGContextualOptions *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXFeedLayoutGeneratorScanState;

@interface PXFeedLayoutGenerator : NSObject
{
    long long _cacheTailLocation;
    long long _cacheHeadLocation;
    struct PXTileInfo _cachedTileInfo[20];
    id _cachedBatchID[20];
    BOOL _scannedBatchHasCaption;
    BOOL _shouldStop;
    long long _tileCount;
    CDUnknownBlockType _tileImageSizeBlock;
    CDUnknownBlockType _tileMinimumSizeBlock;
    CDUnknownBlockType _tileHasCaptionBlock;
    CDUnknownBlockType _tileCaptionSizeBlock;
    CDUnknownBlockType _tileHasLikesBlock;
    CDUnknownBlockType _tileLikesSizeBlock;
    CDUnknownBlockType _tileCommentCountBlock;
    CDUnknownBlockType _tileCommentSizeBlock;
    CDUnknownBlockType _tileBatchIDBlock;
    long long _numberOfMagneticGuidelines;
    double _roundingScale;
    CDUnknownBlockType _parsedFrameBlock;
    long long _scanLocation;
    id _scannedBatchID;
    long long _scanSpecialSequenceCount;
    struct CGSize _interTileSpacing;
    struct CGSize _noCaptionSpacing;
    struct NSEdgeInsets _captionPadding;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL shouldStop; // @synthesize shouldStop=_shouldStop;
@property(nonatomic) long long scanSpecialSequenceCount; // @synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount;
@property(nonatomic) BOOL scannedBatchHasCaption; // @synthesize scannedBatchHasCaption=_scannedBatchHasCaption;
@property(retain, nonatomic) id scannedBatchID; // @synthesize scannedBatchID=_scannedBatchID;
@property(nonatomic) long long scanLocation; // @synthesize scanLocation=_scanLocation;
@property(copy, nonatomic) CDUnknownBlockType parsedFrameBlock; // @synthesize parsedFrameBlock=_parsedFrameBlock;
@property(nonatomic) double roundingScale; // @synthesize roundingScale=_roundingScale;
@property(nonatomic) long long numberOfMagneticGuidelines; // @synthesize numberOfMagneticGuidelines=_numberOfMagneticGuidelines;
@property(copy, nonatomic) CDUnknownBlockType tileBatchIDBlock; // @synthesize tileBatchIDBlock=_tileBatchIDBlock;
@property(copy, nonatomic) CDUnknownBlockType tileCommentSizeBlock; // @synthesize tileCommentSizeBlock=_tileCommentSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType tileCommentCountBlock; // @synthesize tileCommentCountBlock=_tileCommentCountBlock;
@property(copy, nonatomic) CDUnknownBlockType tileLikesSizeBlock; // @synthesize tileLikesSizeBlock=_tileLikesSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType tileHasLikesBlock; // @synthesize tileHasLikesBlock=_tileHasLikesBlock;
@property(copy, nonatomic) CDUnknownBlockType tileCaptionSizeBlock; // @synthesize tileCaptionSizeBlock=_tileCaptionSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType tileHasCaptionBlock; // @synthesize tileHasCaptionBlock=_tileHasCaptionBlock;
@property(nonatomic) struct CGSize noCaptionSpacing; // @synthesize noCaptionSpacing=_noCaptionSpacing;
@property(nonatomic) struct NSEdgeInsets captionPadding; // @synthesize captionPadding=_captionPadding;
@property(copy, nonatomic) CDUnknownBlockType tileMinimumSizeBlock; // @synthesize tileMinimumSizeBlock=_tileMinimumSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType tileImageSizeBlock; // @synthesize tileImageSizeBlock=_tileImageSizeBlock;
@property(nonatomic) struct CGSize interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(nonatomic) long long tileCount; // @synthesize tileCount=_tileCount;
- (double)valueByRounding:(double)arg1 usingMagneticGuidelines:(BOOL)arg2;
- (void)parsedFrame:(struct CGRect)arg1 type:(long long)arg2 forCommentAtIndex:(long long)arg3;
- (void)parsedFrame:(struct CGRect)arg1 type:(long long)arg2 forLikesAtIndex:(long long)arg3;
- (void)parsedFrame:(struct CGRect)arg1 type:(long long)arg2 forTileAtIndex:(long long)arg3;
- (struct CGSize)commentSizeForTileAtIndex:(long long)arg1 commentIndex:(long long)arg2 proposedSize:(struct CGSize)arg3;
- (struct CGSize)likesSizeForTileAtIndex:(long long)arg1 proposedSize:(struct CGSize)arg2;
- (struct CGSize)captionSizeForTileAtIndex:(long long)arg1 proposedSize:(struct CGSize)arg2;
- (BOOL)scanTile:(struct PXTileInfo *)arg1 ofType:(long long)arg2;
- (BOOL)scanTile:(struct PXTileInfo *)arg1 type:(long long *)arg2;
- (BOOL)scanTileWithSquareImage:(struct PXTileInfo *)arg1;
- (BOOL)scanTileWithHorizontalPanorama:(struct PXTileInfo *)arg1;
- (BOOL)scanTileWithLandscapeImage:(struct PXTileInfo *)arg1;
- (BOOL)scanTileWithPortraitImage:(struct PXTileInfo *)arg1;
- (BOOL)scanAnyTile:(struct PXTileInfo *)arg1;
- (BOOL)scanTile:(struct PXTileInfo *)arg1 passingTest:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL isAtEnd;
@property(nonatomic) PXFeedLayoutGeneratorScanState *scanState;
- (void)didParseTiles;
- (BOOL)parseNextTiles;
- (void)willParseTiles;
- (void)parseTiles;
- (void)enumerateFramesWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end


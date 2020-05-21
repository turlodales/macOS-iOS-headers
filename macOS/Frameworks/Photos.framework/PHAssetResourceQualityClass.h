//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLImageFormat;

@interface PHAssetResourceQualityClass : NSObject
{
    BOOL _video;
    BOOL _croppedToSquare;
    BOOL _table;
    BOOL _thumbnail;
    PLImageFormat *_backingImageFormat;
    unsigned long long _backingCPLResourceType;
    unsigned long long _maxSideLengthIfSquare;
    unsigned long long _maxNumberOfPixelsIfSquare;
}

+ (id)anyQualityClassMatchingPredicate:(id)arg1;
+ (id)allQualityClassesMatchingPredicate:(id)arg1;
+ (id)assetResourceQualityClasses;
+ (id)_cplDerivativeAssetResourceQualityClasses;
+ (id)_thumbnailAssetResourceQualityClassesForCurrentDevice;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long maxNumberOfPixelsIfSquare; // @synthesize maxNumberOfPixelsIfSquare=_maxNumberOfPixelsIfSquare;
@property(readonly, nonatomic) unsigned long long maxSideLengthIfSquare; // @synthesize maxSideLengthIfSquare=_maxSideLengthIfSquare;
@property(readonly, nonatomic, getter=isThumbnail) BOOL thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic, getter=isTable) BOOL table; // @synthesize table=_table;
@property(readonly, nonatomic, getter=isCroppedToSquare) BOOL croppedToSquare; // @synthesize croppedToSquare=_croppedToSquare;
@property(readonly, nonatomic, getter=isVideo) BOOL video; // @synthesize video=_video;
@property(nonatomic) unsigned long long backingCPLResourceType; // @synthesize backingCPLResourceType=_backingCPLResourceType;
@property(retain, nonatomic) PLImageFormat *backingImageFormat; // @synthesize backingImageFormat=_backingImageFormat;
- (id)description;
- (void)preheatDataForThumbnailIndexes:(id)arg1 inLibrary:(id)arg2;
- (id)tableThumbnailDataForAsset:(id)arg1 dataSpecification:(struct PHAssetResourceTableDataSpecification *)arg2;
- (long long)_compare:(id)arg1;
- (id)initWithCPLResourceType:(unsigned long long)arg1;
- (id)initWithThumbnailFormat:(id)arg1;

@end


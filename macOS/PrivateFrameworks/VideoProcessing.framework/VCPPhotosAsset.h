//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPAsset.h>

@class NSArray, NSDictionary, PHAsset;

@interface VCPPhotosAsset : VCPAsset
{
    PHAsset *_asset;
    NSArray *_cachedResources;
    BOOL _onceExif;
    NSDictionary *_cachedExif;
}

+ (id)assetWithPHAsset:(id)arg1;
- (void).cxx_destruct;
- (id)mainFileURL;
- (id)localIdentifier;
@property(readonly, nonatomic) NSArray *resources;
- (id)fingerprint;
- (id)modificationDate;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)initWithPHAsset:(id)arg1;
- (struct __CVBuffer *)imageWithPreferredDimension:(unsigned long long)arg1;
- (id)exif;
- (float)originalPhotoOffsetSeconds;
- (float)photoOffsetSeconds;
- (id)originalMovie;
- (id)streamedMovie;
- (id)movie;
- (float)slowmoRate;
- (double)duration;

@end


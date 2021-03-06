//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetTrack, NSArray;

@interface PIVideoReframeMetadataExtractor : NSObject
{
    AVAsset *_asset;
    AVAssetTrack *_videoTrack;
    AVAssetTrack *_mdataTrack;
    struct CGAffineTransform ndcMetadataTransform;
    struct CGAffineTransform pxlMetadataTransform;
    NSArray *timedMetadataArray;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *timedMetadataArray; // @synthesize timedMetadataArray;
- (id)extractMetadata;
- (CDStruct_8e0628e6)trajectoryeHomographyFromMetadata:(const struct FigLivePhotoMetadata *)arg1 containsV3Metadata:(char *)arg2;
- (struct CGVector)motionBlurVectorFromMetadata:(const struct FigLivePhotoMetadata *)arg1;
- (struct CGVector)centerMotionVectorFromMetadata:(const struct FigLivePhotoMetadata *)arg1;
- (id)subjectsFromMetadata:(const struct FigLivePhotoMetadata *)arg1;
- (void)overwriteTrackingMetadataWithPlist:(id)arg1;
- (id)initWithAVAsset:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface PXPeopleFaceTileImageRequestResult : NSObject
{
    BOOL _isDegraded;
    BOOL _isVeryLowQuality;
    NSImage *_image;
    id _originalObjectID;
    id _assetObjectID;
    struct CGSize _originalImageSize;
    struct CGRect _faceRect;
    struct PXFaceTileImageParams _params;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=_originalImageSize;
@property(nonatomic) BOOL isVeryLowQuality; // @synthesize isVeryLowQuality=_isVeryLowQuality;
@property(nonatomic) struct PXFaceTileImageParams params; // @synthesize params=_params;
@property(retain, nonatomic) id assetObjectID; // @synthesize assetObjectID=_assetObjectID;
@property(retain, nonatomic) id originalObjectID; // @synthesize originalObjectID=_originalObjectID;
@property(readonly, nonatomic) BOOL isDegraded; // @synthesize isDegraded=_isDegraded;
@property(readonly, nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
- (id)description;
- (id)initWithImage:(id)arg1 faceRect:(struct CGRect)arg2 isDegraded:(BOOL)arg3;

@end


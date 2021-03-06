//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoVision/PVObject.h>

@class NSData, PVFace;

@interface PVFaceCrop : PVObject
{
    NSData *_faceCropData;
    PVFace *_originatingFace;
    struct CGSize _cachedImageDimensions;
    short _state;
}

- (void).cxx_destruct;
@property(nonatomic) short state; // @synthesize state=_state;
- (id)description;
- (struct CGSize)imageDimensions;
- (id)originatingFace;
- (id)faceCropData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerItem, NSNumber;

@interface ISPlayerContent : NSObject
{
    BOOL _photoHasColorAdjustments;
    BOOL _photoIsOriginal;
    BOOL _supportsVitality;
    int _photoEXIFOrientation;
    struct CGImage *_photo;
    AVPlayerItem *_videoPlayerItem;
    NSNumber *_variationIdentifier;
    CDStruct_1b6d18a9 _photoTime;
    CDStruct_1b6d18a9 _videoDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *variationIdentifier; // @synthesize variationIdentifier=_variationIdentifier;
@property(readonly, nonatomic) BOOL supportsVitality; // @synthesize supportsVitality=_supportsVitality;
@property(readonly, nonatomic) BOOL photoIsOriginal; // @synthesize photoIsOriginal=_photoIsOriginal;
@property(readonly, nonatomic) BOOL photoHasColorAdjustments; // @synthesize photoHasColorAdjustments=_photoHasColorAdjustments;
@property(readonly, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
@property(readonly, nonatomic) int photoEXIFOrientation; // @synthesize photoEXIFOrientation=_photoEXIFOrientation;
@property(readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPhoto:(struct CGImage *)arg1 photoIsOriginal:(BOOL)arg2 photoEXIFOrientation:(int)arg3 photoTime:(CDStruct_1b6d18a9)arg4 videoDuration:(CDStruct_1b6d18a9)arg5 photoHasColorAdjustments:(BOOL)arg6 videoPlayerItem:(id)arg7 variationIdentifier:(id)arg8 supportsVitality:(BOOL)arg9;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISWrappedAVPlayer;

@interface ISPlayerOutputContent : NSObject
{
    BOOL _photoIsOriginal;
    int _photoEXIFOrientation;
    struct CGImage *_photo;
    ISWrappedAVPlayer *_videoPlayer;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(readonly, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(readonly, nonatomic) int photoEXIFOrientation; // @synthesize photoEXIFOrientation=_photoEXIFOrientation;
@property(readonly, nonatomic) BOOL photoIsOriginal; // @synthesize photoIsOriginal=_photoIsOriginal;
@property(readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
- (void)dealloc;
- (id)description;
- (id)initWithPhoto:(struct CGImage *)arg1 photoIsOriginal:(BOOL)arg2 photoEXIFOrientation:(int)arg3 videoPlayer:(id)arg4 videoSize:(struct CGSize)arg5;

@end


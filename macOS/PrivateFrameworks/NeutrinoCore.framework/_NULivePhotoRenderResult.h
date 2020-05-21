//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import "NULivePhotoRenderResult.h"

@class AVAsset, AVVideoComposition, NSString, NUImageGeometry;

@interface _NULivePhotoRenderResult : _NURenderResult <NULivePhotoRenderResult>
{
    AVAsset *_video;
    AVVideoComposition *_videoComposition;
    struct CGImage *_photo;
    NUImageGeometry *_videoGeometry;
    CDStruct_1b6d18a9 _photoTime;
}

- (void).cxx_destruct;
@property(retain) NUImageGeometry *videoGeometry; // @synthesize videoGeometry=_videoGeometry;
@property CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
@property(retain) struct CGImage *photo; // @synthesize photo=_photo;
@property(retain) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain) AVAsset *video; // @synthesize video=_video;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderTrackOutput;

@interface VCPVideoTrackStandardDecoder : VCPVideoTrackDecoder
{
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_trackOutput;
    struct opaqueCMSampleBuffer *_nextSample;
    long long _status;
}

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (long long)status;
- (void)dealloc;
- (id)initWithTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2;

@end


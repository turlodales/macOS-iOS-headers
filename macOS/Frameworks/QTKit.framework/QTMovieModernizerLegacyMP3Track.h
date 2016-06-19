//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QTKit/QTMovieModernizerTrack.h>

@class AVAssetReader, NSURL;

__attribute__((visibility("hidden")))
@interface QTMovieModernizerLegacyMP3Track : QTMovieModernizerTrack
{
    NSURL *_legacyMP3URL;
    AVAssetReader *_legacyMP3AssetReader;
}

@property(retain, nonatomic) AVAssetReader *legacyMP3AssetReader; // @synthesize legacyMP3AssetReader=_legacyMP3AssetReader;
@property(retain, nonatomic) NSURL *legacyMP3URL; // @synthesize legacyMP3URL=_legacyMP3URL;
- (BOOL)cleanup;
- (BOOL)startup;
- (id)newMP3AssetInTmpDirectoryFromAudioTrack:(id)arg1 asset:(id)arg2 forModernizer:(id)arg3 error:(id *)arg4;
- (id)initWithSourceAsset:(id)arg1 track:(id)arg2 forModernizer:(id)arg3;

@end


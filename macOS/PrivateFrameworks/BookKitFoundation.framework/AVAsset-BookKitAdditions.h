//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (BookKitAdditions)
- (id)_genreAudioFileMetadataItem;
- (id)_genreID3v1MetadataItem;
- (id)_genreID3v3MetadataItem;
- (id)_trackNumberAudioFileMetadataItem;
- (id)_trackNumberID3v1MetadataItem;
- (id)_trackNumberID3v3MetadataItem;
- (id)bk_isExplicitFromMetadataFormat:(id)arg1;
- (id)bk_accountIDFromMetadataFormat:(id)arg1;
- (id)bk_discNumberFromMetadataFormat:(id)arg1;
- (id)bk_trackNumberFromMetadataFormat:(id)arg1;
- (id)bk_playlistIDFromMetadataFormat:(id)arg1;
- (id)bk_genreFromMetadataFormat:(id)arg1;
- (id)bk_coverArtData;
- (id)bk_title;
- (id)bk_albumName;
- (id)bk_author;
- (id)bk_artist;
@end


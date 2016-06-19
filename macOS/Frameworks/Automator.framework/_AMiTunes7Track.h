//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/_AMiTunes7Item.h>

@class NSDate, NSString;

@interface _AMiTunes7Track : _AMiTunes7Item
{
}

@property long long year;
@property long long volumeAdjustment;
@property int videoKind;
@property BOOL unplayed;
@property long long trackNumber;
@property long long trackCount;
@property(readonly, copy) NSString *time;
@property double start;
@property(readonly) long long size;
@property(copy) NSString *sortShow;
@property(copy) NSString *sortComposer;
@property(copy) NSString *sortName;
@property(copy) NSString *sortAlbumArtist;
@property(copy) NSString *sortArtist;
@property(copy) NSString *sortAlbum;
@property(copy) NSString *show;
@property(copy) NSDate *skippedDate;
@property long long skippedCount;
@property BOOL shufflable;
@property long long seasonNumber;
@property(readonly) long long sampleRate;
@property(readonly) int ratingKind;
@property long long rating;
@property(readonly) BOOL podcast;
@property(copy) NSDate *playedDate;
@property long long playedCount;
@property(readonly, copy) NSDate *modificationDate;
@property(copy) NSString *lyrics;
@property(copy) NSString *longDescription;
@property(readonly, copy) NSString *kind;
@property(copy) NSString *grouping;
@property(copy) NSString *genre;
@property BOOL gapless;
@property double finish;
@property(copy) NSString *EQ;
@property long long episodeNumber;
@property(copy) NSString *episodeID;
@property BOOL enabled;
@property(readonly) double duration;
@property long long discNumber;
@property long long discCount;
@property(copy) NSString *objectDescription;
@property(readonly, copy) NSDate *dateAdded;
@property(readonly) long long databaseID;
@property(copy) NSString *composer;
@property BOOL compilation;
@property(copy) NSString *comment;
@property(copy) NSString *category;
@property long long bpm;
@property BOOL bookmarkable;
@property double bookmark;
@property(readonly) long long bitRate;
@property(copy) NSString *artist;
@property(readonly) int albumRatingKind;
@property long long albumRating;
@property(copy) NSString *albumArtist;
@property(copy) NSString *album;
- (id)artworks;

@end


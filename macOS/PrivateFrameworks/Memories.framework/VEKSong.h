//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FMSong, MPMediaItem, NSSet, NSString;

@interface VEKSong : NSObject <NSCopying>
{
    unsigned long long _iTunesID;
    MPMediaItem *_iTunesMediaItem;
    FMSong *_fmSong;
}

+ (void)initialize;
+ (id)featuredSmartSongsForMood:(long long)arg1;
+ (id)availableSmartSongs;
- (void).cxx_destruct;
@property(retain, nonatomic) FMSong *fmSong; // @synthesize fmSong=_fmSong;
@property(retain, nonatomic) MPMediaItem *iTunesMediaItem; // @synthesize iTunesMediaItem=_iTunesMediaItem;
@property(nonatomic) unsigned long long iTunesID; // @synthesize iTunesID=_iTunesID;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_fetchMediaItemForMediaID:(unsigned long long)arg1;
- (id)previewPlayerItemForDuration:(CDStruct_1b6d18a9)arg1 normalizedVolume:(double *)arg2;
@property(readonly, nonatomic) BOOL isLocal;
- (id)fetchSmartSongArtwork;
@property(readonly, nonatomic) long long mood;
- (long long)moodForMoodString:(id)arg1;
@property(readonly, nonatomic) NSSet *genres;
@property(readonly, nonatomic) NSString *artworkPath;
@property(readonly, nonatomic) NSString *artistName;
@property(readonly, nonatomic) NSString *songName;
@property(readonly, nonatomic) id songID;
@property(readonly, nonatomic) BOOL isiTunesMusic;
@property(readonly, nonatomic) BOOL isSmartMusic;
- (id)initWithSmartMusicID:(id)arg1;
- (id)initWithiTunesMusicID:(unsigned long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface ML3MigrationMisgroupedAlbum : NSObject
{
    NSMutableArray *_misgroupedTracks;
    long long _albumPID;
    long long _albumArtistPID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long albumArtistPID; // @synthesize albumArtistPID=_albumArtistPID;
@property(readonly, nonatomic) long long albumPID; // @synthesize albumPID=_albumPID;
@property(readonly, nonatomic) NSArray *misgroupedTracks;
- (void)addMisgroupedTrack:(id)arg1;
- (id)initWithAlbumPID:(long long)arg1 albumArtistPID:(long long)arg2;

@end


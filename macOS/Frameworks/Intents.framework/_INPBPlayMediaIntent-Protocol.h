//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBDataString, _INPBIntentMetadata, _INPBMediaItemGroup, _INPBMediaItemValue, _INPBMediaSearch, _INPBString, _INPBTimestamp;

@protocol _INPBPlayMediaIntent <NSObject>
+ (Class)mediaItemsType;
+ (Class)hashedRouteUIDsType;
+ (Class)bucketType;
+ (Class)audioSearchResultsType;
+ (Class)alternativeResultsType;
@property(readonly, nonatomic) BOOL hasShowTitle;
@property(retain, nonatomic) _INPBString *showTitle;
@property(nonatomic) BOOL hasResumePlayback;
@property(nonatomic) BOOL resumePlayback;
@property(readonly, nonatomic) BOOL hasRecoID;
@property(copy, nonatomic) NSString *recoID;
@property(readonly, nonatomic) BOOL hasProxiedBundleIdentifier;
@property(copy, nonatomic) NSString *proxiedBundleIdentifier;
@property(readonly, nonatomic) BOOL hasPlaylistTitle;
@property(retain, nonatomic) _INPBString *playlistTitle;
@property(nonatomic) BOOL hasPlaybackSpeed;
@property(nonatomic) double playbackSpeed;
@property(nonatomic) BOOL hasPlaybackRepeatMode;
@property(nonatomic) int playbackRepeatMode;
@property(nonatomic) BOOL hasPlaybackQueueLocation;
@property(nonatomic) int playbackQueueLocation;
@property(nonatomic) BOOL hasPlayShuffled;
@property(nonatomic) BOOL playShuffled;
@property(nonatomic) BOOL hasParsecCategory;
@property(nonatomic) int parsecCategory;
@property(readonly, nonatomic) BOOL hasMusicArtistName;
@property(retain, nonatomic) _INPBString *musicArtistName;
@property(readonly, nonatomic) BOOL hasMediaUserContext;
@property(retain, nonatomic) _INPBString *mediaUserContext;
@property(readonly, nonatomic) BOOL hasMediaSearch;
@property(retain, nonatomic) _INPBMediaSearch *mediaSearch;
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
@property(copy, nonatomic) NSArray *mediaItems;
@property(readonly, nonatomic) BOOL hasMediaContainer;
@property(retain, nonatomic) _INPBMediaItemValue *mediaContainer;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long hashedRouteUIDsCount;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(readonly, nonatomic) BOOL hasExpirationDate;
@property(retain, nonatomic) _INPBTimestamp *expirationDate;
@property(readonly, nonatomic) unsigned long long bucketsCount;
@property(copy, nonatomic) NSArray *buckets;
@property(readonly, nonatomic) BOOL hasAudiobookTitle;
@property(retain, nonatomic) _INPBString *audiobookTitle;
@property(readonly, nonatomic) BOOL hasAudiobookAuthor;
@property(retain, nonatomic) _INPBString *audiobookAuthor;
@property(readonly, nonatomic) unsigned long long audioSearchResultsCount;
@property(copy, nonatomic) NSArray *audioSearchResults;
@property(readonly, nonatomic) unsigned long long alternativeResultsCount;
@property(copy, nonatomic) NSArray *alternativeResults;
- (int)StringAsPlaybackRepeatMode:(NSString *)arg1;
- (NSString *)playbackRepeatModeAsString:(int)arg1;
- (int)StringAsPlaybackQueueLocation:(NSString *)arg1;
- (NSString *)playbackQueueLocationAsString:(int)arg1;
- (int)StringAsParsecCategory:(NSString *)arg1;
- (NSString *)parsecCategoryAsString:(int)arg1;
- (_INPBMediaItemValue *)mediaItemsAtIndex:(unsigned long long)arg1;
- (void)addMediaItems:(_INPBMediaItemValue *)arg1;
- (void)clearMediaItems;
- (_INPBString *)hashedRouteUIDsAtIndex:(unsigned long long)arg1;
- (void)addHashedRouteUIDs:(_INPBString *)arg1;
- (void)clearHashedRouteUIDs;
- (_INPBDataString *)bucketAtIndex:(unsigned long long)arg1;
- (void)addBucket:(_INPBDataString *)arg1;
- (void)clearBuckets;
- (_INPBMediaItemGroup *)audioSearchResultsAtIndex:(unsigned long long)arg1;
- (void)addAudioSearchResults:(_INPBMediaItemGroup *)arg1;
- (void)clearAudioSearchResults;
- (_INPBMediaItemGroup *)alternativeResultsAtIndex:(unsigned long long)arg1;
- (void)addAlternativeResults:(_INPBMediaItemGroup *)arg1;
- (void)clearAlternativeResults;
@end


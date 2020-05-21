//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying>
{
    double _duration;
    double _elapsedTime;
    double _elapsedTimeTimestamp;
    long long _iTunesStoreAlbumIdentifier;
    long long _iTunesStoreArtistIdentifier;
    long long _iTunesStoreIdentifier;
    long long _iTunesStoreSubscriptionIdentifier;
    double _inferredTimestamp;
    long long _legacyUniqueIdentifier;
    long long _radioStationIdentifier;
    double _releaseDate;
    double _startTime;
    NSString *_albumArtistName;
    NSString *_albumName;
    NSString *_albumYear;
    NSData *_appMetricsData;
    int _artworkDataHeightDeprecated;
    int _artworkDataWidthDeprecated;
    NSString *_artworkFileURL;
    NSString *_artworkIdentifier;
    NSString *_artworkMIMEType;
    NSString *_artworkURL;
    NSData *_artworkURLTemplatesData;
    NSString *_assetURLString;
    NSString *_brandIdentifier;
    int _chapterCount;
    NSString *_collectionIdentifier;
    NSData *_collectionInfoData;
    NSString *_composer;
    NSString *_contentIdentifier;
    NSData *_currentPlaybackDateData;
    float _defaultPlaybackRate;
    NSData *_deviceSpecificUserInfoData;
    NSString *_directorName;
    int _discNumber;
    float _downloadProgress;
    int _downloadState;
    int _editingStyleFlags;
    int _episodeNumber;
    int _episodeType;
    NSString *_genre;
    NSString *_localizedContentRating;
    NSString *_localizedDurationString;
    NSString *_lyricsURL;
    int _mediaSubType;
    int _mediaType;
    NSData *_nowPlayingInfoData;
    int _numberOfSections;
    int _playCount;
    float _playbackProgress;
    float _playbackRate;
    int _playlistType;
    NSString *_profileIdentifier;
    NSData *_purchaseInfoData;
    NSString *_radioStationName;
    NSString *_radioStationString;
    int _radioStationType;
    int _seasonNumber;
    NSString *_seriesName;
    NSString *_serviceIdentifier;
    NSString *_subtitle;
    NSString *_title;
    int _totalDiscCount;
    int _totalTrackCount;
    NSString *_trackArtistName;
    int _trackNumber;
    NSData *_userInfoData;
    BOOL _artworkAvailable;
    BOOL _infoAvailable;
    BOOL _isAlwaysLive;
    BOOL _isContainer;
    BOOL _isCurrentlyPlaying;
    BOOL _isExplicitItem;
    BOOL _isInWishList;
    BOOL _isLiked;
    BOOL _isLoading;
    BOOL _isPlayable;
    BOOL _isSharable;
    BOOL _isSteerable;
    BOOL _isStreamingContent;
    BOOL _languageOptionsAvailable;
    BOOL _lyricsAvailable;
    struct {
        unsigned int duration:1;
        unsigned int elapsedTime:1;
        unsigned int elapsedTimeTimestamp:1;
        unsigned int iTunesStoreAlbumIdentifier:1;
        unsigned int iTunesStoreArtistIdentifier:1;
        unsigned int iTunesStoreIdentifier:1;
        unsigned int iTunesStoreSubscriptionIdentifier:1;
        unsigned int inferredTimestamp:1;
        unsigned int legacyUniqueIdentifier:1;
        unsigned int radioStationIdentifier:1;
        unsigned int releaseDate:1;
        unsigned int startTime:1;
        unsigned int artworkDataHeightDeprecated:1;
        unsigned int artworkDataWidthDeprecated:1;
        unsigned int chapterCount:1;
        unsigned int defaultPlaybackRate:1;
        unsigned int discNumber:1;
        unsigned int downloadProgress:1;
        unsigned int downloadState:1;
        unsigned int editingStyleFlags:1;
        unsigned int episodeNumber:1;
        unsigned int episodeType:1;
        unsigned int mediaSubType:1;
        unsigned int mediaType:1;
        unsigned int numberOfSections:1;
        unsigned int playCount:1;
        unsigned int playbackProgress:1;
        unsigned int playbackRate:1;
        unsigned int playlistType:1;
        unsigned int radioStationType:1;
        unsigned int seasonNumber:1;
        unsigned int totalDiscCount:1;
        unsigned int totalTrackCount:1;
        unsigned int trackNumber:1;
        unsigned int artworkAvailable:1;
        unsigned int infoAvailable:1;
        unsigned int isAlwaysLive:1;
        unsigned int isContainer:1;
        unsigned int isCurrentlyPlaying:1;
        unsigned int isExplicitItem:1;
        unsigned int isInWishList:1;
        unsigned int isLiked:1;
        unsigned int isLoading:1;
        unsigned int isPlayable:1;
        unsigned int isSharable:1;
        unsigned int isSteerable:1;
        unsigned int isStreamingContent:1;
        unsigned int languageOptionsAvailable:1;
        unsigned int lyricsAvailable:1;
    } _has;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *albumYear; // @synthesize albumYear=_albumYear;
@property(retain, nonatomic) NSString *localizedDurationString; // @synthesize localizedDurationString=_localizedDurationString;
@property(retain, nonatomic) NSString *brandIdentifier; // @synthesize brandIdentifier=_brandIdentifier;
@property(retain, nonatomic) NSString *artworkFileURL; // @synthesize artworkFileURL=_artworkFileURL;
@property(nonatomic) int episodeType; // @synthesize episodeType=_episodeType;
@property(nonatomic) long long legacyUniqueIdentifier; // @synthesize legacyUniqueIdentifier=_legacyUniqueIdentifier;
@property(retain, nonatomic) NSData *artworkURLTemplatesData; // @synthesize artworkURLTemplatesData=_artworkURLTemplatesData;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(retain, nonatomic) NSData *currentPlaybackDateData; // @synthesize currentPlaybackDateData=_currentPlaybackDateData;
@property(nonatomic) int artworkDataHeightDeprecated; // @synthesize artworkDataHeightDeprecated=_artworkDataHeightDeprecated;
@property(nonatomic) int artworkDataWidthDeprecated; // @synthesize artworkDataWidthDeprecated=_artworkDataWidthDeprecated;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(nonatomic) double inferredTimestamp; // @synthesize inferredTimestamp=_inferredTimestamp;
@property(nonatomic) double elapsedTimeTimestamp; // @synthesize elapsedTimeTimestamp=_elapsedTimeTimestamp;
@property(retain, nonatomic) NSData *collectionInfoData; // @synthesize collectionInfoData=_collectionInfoData;
@property(retain, nonatomic) NSData *deviceSpecificUserInfoData; // @synthesize deviceSpecificUserInfoData=_deviceSpecificUserInfoData;
@property(retain, nonatomic) NSString *lyricsURL; // @synthesize lyricsURL=_lyricsURL;
@property(retain, nonatomic) NSString *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(nonatomic) BOOL isSteerable; // @synthesize isSteerable=_isSteerable;
@property(retain, nonatomic) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;
@property(retain, nonatomic) NSData *nowPlayingInfoData; // @synthesize nowPlayingInfoData=_nowPlayingInfoData;
@property(nonatomic) int mediaSubType; // @synthesize mediaSubType=_mediaSubType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *seriesName; // @synthesize seriesName=_seriesName;
@property(retain, nonatomic) NSData *appMetricsData; // @synthesize appMetricsData=_appMetricsData;
@property(nonatomic) float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) int downloadState; // @synthesize downloadState=_downloadState;
@property(nonatomic) float defaultPlaybackRate; // @synthesize defaultPlaybackRate=_defaultPlaybackRate;
@property(retain, nonatomic) NSData *purchaseInfoData; // @synthesize purchaseInfoData=_purchaseInfoData;
@property(nonatomic) long long iTunesStoreAlbumIdentifier; // @synthesize iTunesStoreAlbumIdentifier=_iTunesStoreAlbumIdentifier;
@property(nonatomic) long long iTunesStoreArtistIdentifier; // @synthesize iTunesStoreArtistIdentifier=_iTunesStoreArtistIdentifier;
@property(nonatomic) long long iTunesStoreSubscriptionIdentifier; // @synthesize iTunesStoreSubscriptionIdentifier=_iTunesStoreSubscriptionIdentifier;
@property(nonatomic) long long iTunesStoreIdentifier; // @synthesize iTunesStoreIdentifier=_iTunesStoreIdentifier;
@property(retain, nonatomic) NSString *radioStationString; // @synthesize radioStationString=_radioStationString;
@property(retain, nonatomic) NSString *radioStationName; // @synthesize radioStationName=_radioStationName;
@property(nonatomic) long long radioStationIdentifier; // @synthesize radioStationIdentifier=_radioStationIdentifier;
@property(nonatomic) BOOL isInWishList; // @synthesize isInWishList=_isInWishList;
@property(nonatomic) BOOL isLiked; // @synthesize isLiked=_isLiked;
@property(nonatomic) BOOL isSharable; // @synthesize isSharable=_isSharable;
@property(retain, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
@property(nonatomic) int trackNumber; // @synthesize trackNumber=_trackNumber;
@property(nonatomic) int totalTrackCount; // @synthesize totalTrackCount=_totalTrackCount;
@property(nonatomic) int totalDiscCount; // @synthesize totalDiscCount=_totalDiscCount;
@property(nonatomic) int chapterCount; // @synthesize chapterCount=_chapterCount;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) BOOL isAlwaysLive; // @synthesize isAlwaysLive=_isAlwaysLive;
@property(retain, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) int discNumber; // @synthesize discNumber=_discNumber;
@property(retain, nonatomic) NSString *composer; // @synthesize composer=_composer;
@property(retain, nonatomic) NSString *assetURLString; // @synthesize assetURLString=_assetURLString;
@property(retain, nonatomic) NSString *artworkMIMEType; // @synthesize artworkMIMEType=_artworkMIMEType;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property(retain, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property(nonatomic) BOOL isCurrentlyPlaying; // @synthesize isCurrentlyPlaying=_isCurrentlyPlaying;
@property(nonatomic) BOOL isStreamingContent; // @synthesize isStreamingContent=_isStreamingContent;
@property(nonatomic) int editingStyleFlags; // @synthesize editingStyleFlags=_editingStyleFlags;
@property(nonatomic) BOOL lyricsAvailable; // @synthesize lyricsAvailable=_lyricsAvailable;
@property(nonatomic) int numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property(nonatomic) BOOL languageOptionsAvailable; // @synthesize languageOptionsAvailable=_languageOptionsAvailable;
@property(nonatomic) BOOL infoAvailable; // @synthesize infoAvailable=_infoAvailable;
@property(nonatomic) BOOL artworkAvailable; // @synthesize artworkAvailable=_artworkAvailable;
@property(nonatomic) int radioStationType; // @synthesize radioStationType=_radioStationType;
@property(nonatomic) int playlistType; // @synthesize playlistType=_playlistType;
@property(nonatomic) BOOL isExplicitItem; // @synthesize isExplicitItem=_isExplicitItem;
@property(retain, nonatomic) NSString *localizedContentRating; // @synthesize localizedContentRating=_localizedContentRating;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) double releaseDate; // @synthesize releaseDate=_releaseDate;
@property(nonatomic) int episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(nonatomic) int seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(retain, nonatomic) NSString *directorName; // @synthesize directorName=_directorName;
@property(retain, nonatomic) NSString *albumArtistName; // @synthesize albumArtistName=_albumArtistName;
@property(retain, nonatomic) NSString *trackArtistName; // @synthesize trackArtistName=_trackArtistName;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(nonatomic) float playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(nonatomic) BOOL isPlayable; // @synthesize isPlayable=_isPlayable;
@property(nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAlbumYear;
@property(readonly, nonatomic) BOOL hasLocalizedDurationString;
@property(readonly, nonatomic) BOOL hasBrandIdentifier;
@property(readonly, nonatomic) BOOL hasArtworkFileURL;
@property(nonatomic) BOOL hasEpisodeType;
@property(nonatomic) BOOL hasLegacyUniqueIdentifier;
@property(readonly, nonatomic) BOOL hasArtworkURLTemplatesData;
@property(nonatomic) BOOL hasIsLoading;
@property(readonly, nonatomic) BOOL hasArtworkIdentifier;
@property(readonly, nonatomic) BOOL hasCurrentPlaybackDateData;
@property(nonatomic) BOOL hasArtworkDataHeightDeprecated;
@property(nonatomic) BOOL hasArtworkDataWidthDeprecated;
@property(readonly, nonatomic) BOOL hasServiceIdentifier;
@property(nonatomic) BOOL hasInferredTimestamp;
@property(nonatomic) BOOL hasElapsedTimeTimestamp;
@property(readonly, nonatomic) BOOL hasCollectionInfoData;
@property(readonly, nonatomic) BOOL hasDeviceSpecificUserInfoData;
@property(readonly, nonatomic) BOOL hasLyricsURL;
@property(readonly, nonatomic) BOOL hasArtworkURL;
@property(nonatomic) BOOL hasIsSteerable;
@property(readonly, nonatomic) BOOL hasUserInfoData;
@property(readonly, nonatomic) BOOL hasNowPlayingInfoData;
@property(nonatomic) BOOL hasMediaSubType;
@property(nonatomic) BOOL hasMediaType;
@property(readonly, nonatomic) BOOL hasSeriesName;
@property(readonly, nonatomic) BOOL hasAppMetricsData;
@property(nonatomic) BOOL hasDownloadProgress;
@property(nonatomic) BOOL hasDownloadState;
@property(nonatomic) BOOL hasDefaultPlaybackRate;
@property(readonly, nonatomic) BOOL hasPurchaseInfoData;
@property(nonatomic) BOOL hasITunesStoreAlbumIdentifier;
@property(nonatomic) BOOL hasITunesStoreArtistIdentifier;
@property(nonatomic) BOOL hasITunesStoreSubscriptionIdentifier;
@property(nonatomic) BOOL hasITunesStoreIdentifier;
@property(readonly, nonatomic) BOOL hasRadioStationString;
@property(readonly, nonatomic) BOOL hasRadioStationName;
@property(nonatomic) BOOL hasRadioStationIdentifier;
@property(nonatomic) BOOL hasIsInWishList;
@property(nonatomic) BOOL hasIsLiked;
@property(nonatomic) BOOL hasIsSharable;
@property(readonly, nonatomic) BOOL hasContentIdentifier;
@property(nonatomic) BOOL hasTrackNumber;
@property(nonatomic) BOOL hasTotalTrackCount;
@property(nonatomic) BOOL hasTotalDiscCount;
@property(nonatomic) BOOL hasChapterCount;
@property(nonatomic) BOOL hasPlaybackRate;
@property(nonatomic) BOOL hasIsAlwaysLive;
@property(readonly, nonatomic) BOOL hasGenre;
@property(nonatomic) BOOL hasElapsedTime;
@property(nonatomic) BOOL hasDiscNumber;
@property(readonly, nonatomic) BOOL hasComposer;
@property(readonly, nonatomic) BOOL hasAssetURLString;
@property(readonly, nonatomic) BOOL hasArtworkMIMEType;
@property(nonatomic) BOOL hasStartTime;
@property(readonly, nonatomic) BOOL hasProfileIdentifier;
@property(readonly, nonatomic) BOOL hasCollectionIdentifier;
@property(nonatomic) BOOL hasIsCurrentlyPlaying;
@property(nonatomic) BOOL hasIsStreamingContent;
@property(nonatomic) BOOL hasEditingStyleFlags;
@property(nonatomic) BOOL hasLyricsAvailable;
@property(nonatomic) BOOL hasNumberOfSections;
@property(nonatomic) BOOL hasLanguageOptionsAvailable;
@property(nonatomic) BOOL hasInfoAvailable;
@property(nonatomic) BOOL hasArtworkAvailable;
@property(nonatomic) BOOL hasRadioStationType;
@property(nonatomic) BOOL hasPlaylistType;
@property(nonatomic) BOOL hasIsExplicitItem;
@property(readonly, nonatomic) BOOL hasLocalizedContentRating;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasPlayCount;
@property(nonatomic) BOOL hasReleaseDate;
@property(nonatomic) BOOL hasEpisodeNumber;
@property(nonatomic) BOOL hasSeasonNumber;
@property(readonly, nonatomic) BOOL hasDirectorName;
@property(readonly, nonatomic) BOOL hasAlbumArtistName;
@property(readonly, nonatomic) BOOL hasTrackArtistName;
@property(readonly, nonatomic) BOOL hasAlbumName;
@property(nonatomic) BOOL hasPlaybackProgress;
@property(nonatomic) BOOL hasIsPlayable;
@property(nonatomic) BOOL hasIsContainer;
@property(readonly, nonatomic) BOOL hasSubtitle;
@property(readonly, nonatomic) BOOL hasTitle;
- (id)_initWithData:(id)arg1;
- (id)_init;

@end


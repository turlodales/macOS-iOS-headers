//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying>
{
    double _artworkHeight;
    double _artworkWidth;
    int _cachingPolicy;
    NSMutableArray *_contentItemIdentifiers;
    _MRPlaybackQueueContextProtobuf *_context;
    NSString *_label;
    int _length;
    int _location;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_requestID;
    BOOL _includeInfo;
    BOOL _includeLanguageOptions;
    BOOL _includeLyrics;
    BOOL _includeMetadata;
    BOOL _includeSections;
    BOOL _isLegacyNowPlayingInfoRequest;
    BOOL _returnContentItemAssetsInUserCompletion;
    struct {
        unsigned int artworkHeight:1;
        unsigned int artworkWidth:1;
        unsigned int cachingPolicy:1;
        unsigned int length:1;
        unsigned int location:1;
        unsigned int includeInfo:1;
        unsigned int includeLanguageOptions:1;
        unsigned int includeLyrics:1;
        unsigned int includeMetadata:1;
        unsigned int includeSections:1;
        unsigned int isLegacyNowPlayingInfoRequest:1;
        unsigned int returnContentItemAssetsInUserCompletion:1;
    } _has;
}

+ (Class)contentItemIdentifiersType;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL isLegacyNowPlayingInfoRequest; // @synthesize isLegacyNowPlayingInfoRequest=_isLegacyNowPlayingInfoRequest;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) int cachingPolicy; // @synthesize cachingPolicy=_cachingPolicy;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(nonatomic) BOOL returnContentItemAssetsInUserCompletion; // @synthesize returnContentItemAssetsInUserCompletion=_returnContentItemAssetsInUserCompletion;
@property(retain, nonatomic) NSMutableArray *contentItemIdentifiers; // @synthesize contentItemIdentifiers=_contentItemIdentifiers;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) _MRPlaybackQueueContextProtobuf *context; // @synthesize context=_context;
@property(nonatomic) BOOL includeLanguageOptions; // @synthesize includeLanguageOptions=_includeLanguageOptions;
@property(nonatomic) BOOL includeInfo; // @synthesize includeInfo=_includeInfo;
@property(nonatomic) BOOL includeSections; // @synthesize includeSections=_includeSections;
@property(nonatomic) BOOL includeLyrics; // @synthesize includeLyrics=_includeLyrics;
@property(nonatomic) double artworkHeight; // @synthesize artworkHeight=_artworkHeight;
@property(nonatomic) double artworkWidth; // @synthesize artworkWidth=_artworkWidth;
@property(nonatomic) BOOL includeMetadata; // @synthesize includeMetadata=_includeMetadata;
@property(nonatomic) int length; // @synthesize length=_length;
@property(nonatomic) int location; // @synthesize location=_location;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsLegacyNowPlayingInfoRequest;
@property(readonly, nonatomic) BOOL hasLabel;
@property(nonatomic) BOOL hasCachingPolicy;
@property(readonly, nonatomic) BOOL hasPlayerPath;
@property(nonatomic) BOOL hasReturnContentItemAssetsInUserCompletion;
- (id)contentItemIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentItemIdentifiersCount;
- (void)addContentItemIdentifiers:(id)arg1;
- (void)clearContentItemIdentifiers;
@property(readonly, nonatomic) BOOL hasRequestID;
@property(readonly, nonatomic) BOOL hasContext;
@property(nonatomic) BOOL hasIncludeLanguageOptions;
@property(nonatomic) BOOL hasIncludeInfo;
@property(nonatomic) BOOL hasIncludeSections;
@property(nonatomic) BOOL hasIncludeLyrics;
@property(nonatomic) BOOL hasArtworkHeight;
@property(nonatomic) BOOL hasArtworkWidth;
@property(nonatomic) BOOL hasIncludeMetadata;
@property(nonatomic) BOOL hasLength;
@property(nonatomic) BOOL hasLocation;
- (id)customDescription;
- (id)customDictionaryRepresentation;

@end


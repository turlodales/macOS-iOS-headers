//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, _RMSNowPlayingArtworkCacheItem;

@interface TVRMSNowPlayingArtworkCache : NSObject
{
    _RMSNowPlayingArtworkCacheItem *_lastItem;
    NSCache *_cache;
}

+ (id)sharedArtworkCache;
- (void).cxx_destruct;
- (void)setArtworkData:(id)arg1 forNowPlayingInfo:(id)arg2;
- (void)setArtworkData:(id)arg1 forIdentifier:(id)arg2;
- (id)artworkDataForNowPlayingInfo:(id)arg1;
- (id)artworkDataForIdentifier:(id)arg1;
- (id)init;

@end


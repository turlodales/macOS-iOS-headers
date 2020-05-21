//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKArtworkImageSource.h"

@class MKArtworkDataSourceCache, NSString;

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource>
{
    id <GEOTransitArtworkDataSource> _artwork;
    long long _shieldSize;
    MKArtworkDataSourceCache *_artworkCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKArtworkDataSourceCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property(readonly, nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artwork; // @synthesize artwork=_artwork;
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(BOOL)arg2;
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(BOOL)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToTransitArtworkViewMode:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


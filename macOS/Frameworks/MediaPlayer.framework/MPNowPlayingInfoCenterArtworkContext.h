//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaItemArtwork, NSData, NSString;

@interface MPNowPlayingInfoCenterArtworkContext : NSObject
{
    NSString *_artworkIdentifier;
    MPMediaItemArtwork *_artwork;
    NSData *_artworkData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
@property(retain, nonatomic) MPMediaItemArtwork *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;

@end


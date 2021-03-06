//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastServices/PODContentChangeEntityData.h>

#import <PodcastServices/PODSecureCoding-Protocol.h>

@class NSArray, NSString, PODPlaylist;

@interface PODPlaylistChangeEntityData : PODContentChangeEntityData <PODSecureCoding>
{
    PODPlaylist *_playlist;
    NSArray *_episodes;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(readonly, nonatomic) PODPlaylist *playlist; // @synthesize playlist=_playlist;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPlaylist:(id)arg1 episodes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


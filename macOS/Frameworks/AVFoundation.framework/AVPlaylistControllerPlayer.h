//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVQueuePlayer.h>

@interface AVPlaylistControllerPlayer : AVQueuePlayer
{
    struct __CFDictionary *_playerItemsForFigPlaybackItems;
}

- (id)_items;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDStruct_1b6d18a9)currentTime;
- (struct OpaqueFigPlaybackItem *)_copyCurrentFigPlaybackItem;
- (id)currentItem;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithFigPlayer:(struct OpaqueFigPlayer *)arg1;

@end

